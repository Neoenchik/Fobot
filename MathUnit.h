#pragma once
#include <string>
#include "ProcFormWin.h"
#include "Vars.h"

typedef int Fklapan[20];

using namespace Fobot;
typedef double FM[6];

static bool Priznak;
static int /*I, J,*/ J1, FLAGRR;
static double H, FWK, FNK, FIZ, DIZ, FTI, DEZP, FZP, FN, KST, CSTT, KIZ, CIZT, DT, TAU, HZAP, DZAP, FI, FI1, QWN, dfidt, Cflu, Du,
RoFT, EFT, RoGT, EGT, RoT, ET, ALFW1, ALFP1, EUN, dRdT, dRdP, dEdT, dEdP, ktt, KIZ1, ktt1, xnn, ynn, deltp;
static std::string sTime, sEvent, sParams;
static FM TR1, TR, TRT1;
static Fklapan KLopen;
static Fklapan KLclose;
static int PrTKR, PRWKL, PRKRIZIS;

inline double LINT(int NIN, double XN, FS XIN, FS FIN)
{
	int KIN;
	std::string s;
	if (((XN >= XIN[0]) && (XN <= XIN[NIN])) || ((XN < XIN[0]) && (XN >= XIN[NIN])))
	{
		KIN = 1;
		while (((XN >= XIN[KIN]) && (XN > XIN[KIN - 1])) || ((XN < XIN[KIN]) && (XN < XIN[KIN - 1])))
		{
			KIN++;
		}
		if (((XN >= XIN[KIN]) && (XN <= XIN[KIN - 1])) || ((XN <= XIN[KIN]) && (XN >= XIN[KIN - 1])))
			return FIN[KIN - 1] + (XN - XIN[KIN - 1]) * (FIN[KIN] - FIN[KIN - 1]) / (XIN[KIN] / XIN[KIN - 1]);
	}
	else
		MessageBox::Show("eRROR", "Выход за переделы интерполяции : xin(1) = " + XIN[1] + "; xn = " + XN + "; xin[nin] = " + XIN[NIN]);
}


inline double ALFN(double TST, double TW1)
{
	const double LA = 0.07,
		RA = 1.29,
		CA = 1000.0,
		MA = 0.00000184;
	double AL;
	if (abs((TST - TW1) / TW1) < 0.00001)
		return 0;
	else
	{
		AL = 0.105 * exp(log(LA * RA * RA * CA * 9.81 * abs(TST - TW1) / TW1 / MA) / 3);
		return AL + 5.67 * (exp(4 * log(TST / 100)) - exp(4 * log(TW1 / 100))) / (TST - TW1);
	}
}
inline void HEATtransfer(double P, double T, double T1, double Q, double ALFW, double ALFP, int PR)
{
	double QKP, A, PRF, LK, RK, NSTEP, GR, GRR, GRR1, tet1, tet, B, Ro, Bo, D, S, Am, Ac, Taum, Tauc, Ja, Aj, Ro1, NCP;
	if (abs((T - T1) / T) < 0.0001)
		ALFW = 0;
	else
	{
		RK = EGT - EFT;
		if (T < MainData.TKR - 0.01)
		{
			QKP = 0.14 * (EGT - EFT) * sqrt(RoGT) * sqrt(sqrt(9.81 * MainData.SUG.SigmaF * (RoFT * RoGT)));
			if ((Q < QKP) || (MainData.PRR != 2))
			{
				A = MainData.SUG.LF / (MainData.SUG.CpF * RoFT);
				PRF = MainData.SUG.NuF / A;
				ALFP = 10;
				PR = 1;
				tet1 = 0.5;
				tet = tet1 * PI / 180;
				B = 0.25 * (1 + cos(tet)) * (1 + cos(tet)) * (2 - cos(tet));
				if (abs((RoFT - RoGT) / RoFT) < 0.05)
					ALFW = ALFW1;
				else
				{
					LK = sqrt(MainData.SUG.SigmaF / 9.81 / (RoFT - RoGT));
					D = 0.021375 * tet1 * LK;
					Bo = (0.25 * D * D * exp(-2 / 3 * log(B)));
					Ro1 = 2 * T * MainData.SUG.SigmaF / (RK * RoGT * abs(T1 - T));
					Ro = 2 * T * MainData.SUG.SigmaF / (RK * RoGT * abs(T1 - T)) / LK;
					Ja = MainData.SUG.CpF * RoFT / (RK * RoGT) * abs(T1 - T);
					Aj = sqrt(12 * Ja);
					Am = Ro * sqrt(4.04);
					Taum = Am * Am * LK * LK / A;
					Ac = sqrt(Bo + Am * Am * Aj * Aj);
					Tauc = Ac * LK * LK / (Aj * Aj * A);
					S = 4 * D * D;
					GR = sqrt(MainData.SUG.LF * MainData.SUG.CpF * RoFT) * (T1 - T);
					GRR = 1 / sqrt(PI);
					Q = S / Tauc * (2 * GRR * GR * sqrt(Taum) + RoGT * RK * PI / 6 * B * D * D * D / S);
					Q = Q + S / Tauc * (2 * GRR * GR * (sqrt(Tauc) - sqrt(Taum)));
					Q = Q - S / Tauc * (2 * GRR * GR * PI * sin(tet) * sin(tet) *
						Aj * Aj * A * (Tauc * sqrt(Tauc) - Taum * sqrt(Taum)) / 3 / S);
					NCP = 0.0000012 * D * D / Ro1 / Ro1 / (1 + 0.0000012 * D * D / Ro1 / Ro1);
					ALFW = Q * NCP / S / (T1 - T);
				}
			}
			else
			{
				ALFW = 0.72 * sqrt(sqrt(MainData.SUG.LG * MainData.SUG.LG * MainData.SUG.LG * RK * (RoFT - RoGT) * 9.81 /
					(MainData.SUG.NuG * MainData.Tank.D * (T1 - T))));
				PR = 2;
			}
		}
		else
		{
			PRF = MainData.SUG.NuKR * TR[6] * MainData.SUG.CKP / MainData.SUG.LKR; //!!!!!!!!!!!!!!
			GR = (9.81 * abs(T1 - T) * MainData.Tank.D * MainData.Tank.D * MainData.Tank.D) / (T * MainData.SUG.NuKR * MainData.SUG.NuKR);
			ALFW = 0.75 * MainData.SUG.LKR / MainData.Tank.D * sqrt(sqrt(GR * PRF));
			PR = 3;
		}
	}
}

inline double GIST(double FIUN)
{
	const double GAM = 1.29,
		M = 0.044;
	double K, PR;
	if ((FIUN > 0) && (FIUN < 1))
	{
		K = exp(log(RoFT / RoGT) / 3);
		K = ((1 - FIUN) * RoFT / K + FIUN * RoGT) *
			sqrt(GAM * 8.31 * TR[4] * (1 + (1 - FIUN) * RoGT / FIUN / RoFT * K * K));
		return K;
	}
	else
		return TR[6] * sqrt(GAM * 8.31 * TR[4]);
}
inline double DBLINT(int PRE, int NIN, int Min, double XN, double YN, FL XIN, FL YIN, FKR FIN)
{
	typedef double B[2];
	typedef double B11[50];
	int I, IIN, KIN, Kn, Kk;
	double TTS, RoGn, ROFn, EGn, EFn, Ps;
	std::string s;
	B B1;
	B11 FO, P;
	if ((XN >= XIN[0]) && (XN <= XIN[NIN]))
	{
		IIN = 1;
		while ((XN > XIN[IIN]) && (IIN <= NIN))
			IIN++;
		if (XN <= MainData.TKR)
		{
			Ps = LINT(MainData.NS, XN, MainData.SUG.TS, MainData.SUG.PS);
			if (PRE == 0)
			{
				RoGn = LINT(MainData.NS, XN, MainData.SUG.TS, MainData.SUG.RG);
				ROFn = LINT(MainData.NS, XN, MainData.SUG.TS, MainData.SUG.RF);
			}
			else
			{
				RoGn = LINT(MainData.NS, XN, MainData.SUG.TS, MainData.SUG.EG);
				ROFn = LINT(MainData.NS, XN, MainData.SUG.TS, MainData.SUG.EF);
			}
			KIN = 1;
			while ((Ps > YIN[KIN]) && (KIN <= Min))
				KIN++;
			if (TR[5] > MainData.SUG.RF[MainData.NS])
			{
				Kk = Min;
				Kn = KIN - 1;
				FO[Kn] = ROFn;
				P[Kn] = Ps;
				for (int i = Kn; i < Min; i++)
				{
					P[i] = YIN[i];
					EFn = XIN[IIN];
					if (P[i] < MainData.PKR)
					{
						TTS = LINT(MainData.NS, YIN[I], MainData.SUG.PS, MainData.SUG.TS);
						if ((XIN[IIN - 1] < TTS) && (XIN[IIN] > TTS))
						{
							if (PRE == 0)
								FIN[IIN][i] = LINT(MainData.NS, YIN[i], MainData.SUG.PS, MainData.SUG.RF);
							else
								FIN[IIN][i] = LINT(MainData.NS, YIN[i], MainData.SUG.PS, MainData.SUG.EF);
							EFn = TTS;
						}
					}
					FO[i] = FIN[IIN - 1][i] + (XN - XIN[IIN - 1]) *
						(FIN[IIN][i] - FIN[IIN - 1][i]) / (EFn - XIN[IIN - 1]);
				}
				KIN = Kn + 1;
				if (P[KIN] > P[KIN - 1])
				{
					while (YN > P[KIN])
						KIN++;
				}
				else
				{
					while (YN < P[KIN])
						KIN++;
				}
				return FO[KIN - 1] + (YN - P[KIN - 1]) * (FO[KIN] - FO[KIN - 1]) / (P[KIN] - P[KIN - 1]);
			}
			else
			{
				if (Ps < YN)
					Ps = YN;
				Kk = KIN;
				Kn = 0;
				FO[Kk] = RoGn;
				P[Kk] = Ps;
				for (int i = 0; i < Kk - 1; i++)
				{
					P[i] = YIN[i];
					EFn = XIN[IIN];
					if (P[i] < MainData.PKR)
					{
						TTS = LINT(MainData.NS, YIN[I], MainData.SUG.PS, MainData.SUG.TS);
						if ((XIN[IIN - 1] < TTS) && (XIN[IIN] > TTS))
						{
							if (PRE == 0)
							{
								FIN[IIN - 1][i] = LINT(MainData.NS, YIN[i], MainData.SUG.PS, MainData.SUG.RG);
							}
							else
								FIN[IIN - 1][i] = LINT(MainData.NS, YIN[i], MainData.SUG.PS, MainData.SUG.EG);
							EFn = TTS;
						}
					}
					FO[i] = FIN[IIN - 1][i] + (XN - XIN[IIN - 1]) *
						(FIN[IIN, i] - FIN[IIN - 1, i]) / (EFn - XIN[IIN - 1]);
				}
				KIN = Kn + 1;
				if (P[KIN] > P[KIN - 1])
				{
					while (YN > P[KIN])
						KIN++;
				}
				else
				{
					while (YN < P[KIN])
						KIN++;
				}
				return FO[KIN - 1] + (YN - P[KIN - 1]) * (FO[KIN] - FO[KIN - 1]) / (P[KIN] - P[KIN - 1]);
			}
		}
		else
		{
			KIN = 1;
			if (YIN[KIN] > YIN[KIN - 1])
			{
				while (YN > YIN[KIN])
					KIN++;
			}
			else
			{
				while (YN < YIN[KIN])
					KIN++;
			}
			if ((XN >= MainData.TKR) && (XIN[IIN - 1] <= MainData.TKR) && (YIN[KIN - 1] <= MainData.PKR) && (YIN[KIN] > MainData.PKR))
			{
				if (PRE == 0)
					FIN[IIN - 1][KIN - 1] = MainData.SUG.RG[MainData.NS];
				else
					FIN[IIN - 1][KIN - 1] = MainData.SUG.EG[MainData.NS];
				FIN[IIN - 1][KIN] = FIN[IIN - 1][KIN] + (MainData.TKR - XIN[IIN - 1]) *
					(FIN[IIN][KIN] - FIN[IIN - 1][KIN]) / (XIN[IIN] - XIN[IIN - 1]);
				FIN[IIN][KIN - 1] = FIN[IIN][KIN] + (MainData.PKR - YIN[KIN - 1]) *
					(FIN[IIN, KIN] - FIN[IIN, KIN - 1]) / (YIN[KIN] - YIN[KIN - 1]);
				XIN[IIN - 1] = MainData.TKR;
				YIN[IIN - 1] = MainData.PKR;
			}
			for (int i = 0; i < 2; i++)
			{
				B1[I] = FIN[IIN - 1][KIN - 2 + I] + (XN - XIN[IIN - 1]) * (FIN[IIN][KIN - 2 + I] -
					FIN[IIN - 1][KIN - 2 + I]) / (XIN[IIN] - XIN[IIN - 1]);
			}
			return B1[1] + (YN - YIN[KIN - 1]) * (B1[2] - B1[1]) / (YIN[KIN] - YIN[KIN - 1]);
		}
	}
	else
	{
		MessageBox::Show("error", "Выход за пределы интерполяции: XIN(1)=" + XIN[1] + "; XN=" + XN + "; XIN[NIN]=" + XIN[NIN] + "; FO[Kn]= " + FO[Kn] +
			"; YN= " + YN + "; FO[Kk]= " + FO[Kk]);
	}
}


inline double dFdX(int PRRe, int PRD, int NX, int NY, double XT, double YT, FL XU, FL YU, FKR F)
{
	typedef double A[4];
	typedef double A1[3];
	int INS, I, IM, IK, ID, IV, IVM;
	double Z, TTS;
	A Z2, F1;
	A1 Z1, F2;
	if ((XT >= XU[0]) && (YT >= YU[0]) && (XT <= XU[NX]) && (YT <= YU[NY]))
	{
		IV = 1;
		if (PRD == 0)
		{
			Z = XT;
			IVM = NX;
			while ((XT > XU[IV]) && (IV <= NX))
				IV++;
		}
		else
		{
			Z = YT;
			IVM = NX;
			while ((YT > YU[IV]) && (IV <= NY))
				IV++;
		}
	}
	if (PRD == 0)
	{
		F1[0] = DBLINT(PRRe, NX, NY, XU[IV - 1], YT, XU, YU, F);
		F1[1] = DBLINT(PRRe, NX, NY, XU[IV], YT, XU, YU, F);
		return (F1[1] - F1[0]) / (XU[IV] - XU[IV - 1]);
	}
	else
	{
		F1[0] = DBLINT(PRRe, NX, NY, XT, YU[IV - 1], XU, YU, F);
		F1[1] = DBLINT(PRRe, NX, NY, XT, YU[IV], XU, YU, F);
		return (F1[1] - F1[0]) / (YU[IV] - YU[IV - 1]);
	}
	if ((YT < MainData.PKR) && (XT < MainData.TKR))
	{
		if (PRD == 0)
		{
			TTS = LINT(MainData.NS, YT, MainData.SUG.PS, MainData.SUG.TS);
			if ((TTS >= XU[IV - 1]) && (TTS < XU[IV]))
			{
				F1[0] = DBLINT(PRRe, NX, NY, TTS, YT, XU, YU, F);
				F1[1] = DBLINT(PRRe, NX, NY, XU[IV], YT, XU, YU, F);
				return (F1[1] - F1[0]) / (XU[IV] - TTS);
			}

		}
		else
		{
			TTS = LINT(MainData.NS, XT, MainData.SUG.TS, MainData.SUG.PS);
			if ((TTS >= YU[IV - 1]) && (TTS < YU[IV]))
			{
				F1[0] = DBLINT(PRRe, NX, NY, XT, TTS, XU, YU, F);
				F1[1] = DBLINT(PRRe, NX, NY, XT, YU[IV], XU, YU, F);
				return (F1[1] - F1[0]) / (YU[IV] - TTS);
			}
		}
	}
}

inline double dFdTs(int NSS, double TT, FS RS, FS ES, FS TTS)
{
	typedef double A[3];
	int INS, I, IM, IK, ID;
	A X, F;
	INS = 1;
	while ((TT > TTS[INS]) && (INS <= NSS))
		INS++;
	return (ES[INS] * RS[INS] - ES[INS - 1] * RS[INS - 1]) / (TTS[INS] - TTS[INS - 1]);
}

inline double DBPs(int NIN, int Min, FL XIN, FL YIN, FKR FINN)
{
	typedef double B1[51];
	int I, IIN, KIN, Kn, Kk, kinn;
	double TTS, RoGn, ROFn, Ps, Rpr, Efn, DBP;
	B1 RO, P;
	Rpr = 0;
	if ((xnn >= XIN[0]) && (xnn <= XIN[NIN]))
	{
		IIN = 1;
		while ((xnn >= XIN[0]) && (xnn <= XIN[NIN]))
		{
			IIN++;
		}
		if (xnn < MainData.TKR)
		{
			RoGn = LINT(MainData.NS, xnn, MainData.SUG.TS, MainData.SUG.RG);
			ROFn = LINT(MainData.NS, xnn, MainData.SUG.TS, MainData.SUG.RF);

			Ps = LINT(MainData.NS, xnn, MainData.SUG.TS, MainData.SUG.PS);
			KIN = 1;
			while ((Ps > YIN[KIN]) && (KIN <= Min))
			{
				KIN++;
			}
			if (ynn > MainData.SUG.RF[MainData.NS])
			{
				if (ROFn > ynn)
					ROFn = ynn;
				Kk = Min;
				Kn = KIN - 2;
				RO[Kn] = ROFn;
				P[Kn] = Ps;
				for (int i = Kn; i < Min; Kn++)
				{
					P[i] = YIN[i];
					Efn = XIN[IIN];
					if (P[i] < MainData.PKR)
					{
						TTS = LINT(MainData.NS, YIN[I], MainData.SUG.PS, MainData.SUG.TS);
						if ((XIN[IIN - 1] < TTS) && (XIN[IIN] > TTS))
						{
							FINN[IIN][i] = LINT(MainData.NS, YIN[i], MainData.SUG.PS, MainData.SUG.RF);
							Efn = TTS;
						}
					}
					RO[i] = FINN[IIN - 1][i] + (xnn - XIN[IIN - 1]) *
						(FINN[IIN][i] - FINN[IIN - 1][i]) / (Efn - XIN[IIN - 1]);
				}
				KIN = Kn;
				while (((ynn > RO[KIN]) && (ynn > RO[KIN - 1])) || ((ynn < RO[KIN]) && (ynn < RO[KIN - 1])))
				{
					KIN++;
				}
				DBP = P[KIN - 1] + (ynn - RO[KIN - 1]) * (P[KIN] - P[KIN - 1]) / (RO[KIN] - RO[KIN - 1]);
			}
			else
			{
				if (RoGn > ynn)
					RoGn = ynn;
				Kn = KIN - 2;
				Kk = KIN;
				RO[Kn] = RoGn;
				P[Kn] = Ps;
				if (YIN[KIN] < MainData.PKR)
				{
					TTS = LINT(MainData.NS, YIN[KIN], MainData.SUG.PS, MainData.SUG.TS);
					RO[Kk] = LINT(MainData.NS, YIN[KIN], MainData.SUG.PS, MainData.SUG.RF);
					RO[Kk] = RO[Kk] + (xnn - TTS) * (FINN[IIN][KIN] - RO[Kk]) / (XIN[KIN] - TTS);
					P[Kk] = YIN[KIN];
				}
				DBP = P[Kn] + (ynn - RO[Kn]) * (P[Kk] - P[Kn]) / (RO[Kk] - RO[Kn]);
			}
		}
		else
		{
			KIN = 1;
			while (((TRT1[5] > YIN[KIN]) && (TRT1[5] >= YIN[KIN - 1])) || ((TRT1[5] < YIN[KIN]) && (TRT1[5] <= YIN[KIN - 1])))
			{
				KIN++;
			}
			Kn = 0;
			for (int i = Kn; i < Kk; i++)
			{
				if ((YIN[KIN - 1] < MainData.PKR) && (MainData.TKR > XIN[IIN - 1]) && (MainData.TKR < XIN[IIN]))
					FINN[IIN][i] = MainData.SUG.RF[MainData.NS];
				P[i] = YIN[i];
				RO[i] = FINN[IIN - 1][i] + (xnn - XIN[IIN - 1]) *
					(FINN[IIN][i] - FINN[IIN - 1][i]) / (XIN[IIN] - XIN[IIN - 1]);
			}
			if ((XIN[IIN - 1] <= MainData.TKR) && (XIN[IIN] > MainData.TKR))
			{
				Kk++;
				kinn = 1;
				while (MainData.PKR < YIN[kinn])
					kinn++;
				for (int i = Kk; i > kinn; i--)
				{
					P[i] = P[i - 1];
					RO[i] = RO[i - 1];
				}
				P[kinn] = MainData.PKR;
				Rpr = FINN[IIN][kinn - 1] + (MainData.PKR - YIN[kinn - 1]) *
					(FINN[IIN][kinn] - FINN[IIN][kinn - 1]) / (YIN[kinn] - YIN[kinn - 1]);
				RO[kinn] = MainData.SUG.RF[MainData.NS] + (xnn - MainData.TKR) *
					(Rpr - MainData.SUG.RF[MainData.NS]) / (XIN[IIN] - MainData.TKR);
			}
			KIN = Kn;
			while (((ynn > RO[KIN]) && (ynn >= RO[KIN - 1])) || ((ynn < RO[KIN]) && (ynn <= RO[KIN - 1])))
			{
				KIN++;
			}
			if (((ynn > RO[KIN]) && (ynn < RO[KIN - 1])) || ((ynn < RO[KIN]) && (ynn > RO[KIN - 1])))
				Rpr = P[KIN - 1] + (ynn - RO[KIN - 1]) * (P[KIN] - P[KIN - 1]) / (RO[KIN] - RO[KIN - 1]);
			if (Rpr < TRT1[4])
				DBP = TRT1[4] + 50;
			else
				DBP = Rpr;
		}
		return DBP;
	}
	else
	{
		MessageBox::Show("error", "Выход за пределы интерполяции: " + "XIN(0)=" + XIN[0] +
			"; XN=" + xnn + "; XIN[NIN]=" + XIN[NIN] +
			"; RO(KN)=" + RO[Kn] + "; YN=" + ynn + "; RO(Kk)=" + RO[Kk]);
	}
}
//--------------функция mybool
inline bool mybool()
{
	const double eps1 = 0.001;
	int ii;
	bool BBBBB;
	ii = 0;
	BBBBB = false;
	while ((ii < 6) && (BBBBB == false))
	{
		ii++;
		if (TR1[ii] != 0)
			if (abs((TR1[ii] - TRT1[ii]) / TR1[ii]) > eps1)
				BBBBB = true;
	}
	return BBBBB;
}
inline void SLOI(ProcFormWin^ ProcForm)
{
	double ALFN1, BET1, BET2, BET3, GAM1, GAM3, KT, BT, CT, ATB, GKR, Ktn;
	int ppts = 0;
	ALFN1 = ALFN(TR[2], MainData.TW);
	HEATtransfer(TR[4], TR[3], TR[0], QWN, ALFW1, ALFP1, MainData.PRR);
	if ((FI < 0.05) && (PRWKL == 00))//???????
		DT = 0.001;
	else
		DT = 0.05;
	if ((FI > 0.95) && (PRWKL == 00))//???????
		DT = 0.01;
	else
		DT = 0.05;
	if (FLAGRR > 0)
		DT = 0.05;
	FI1 = FI; //??????????????
	do{
			ppts++;
		if (ppts > 20)
		{
			DT = DT / 2;
			ppts = 0;
			for (int i = 0; i < 6; i++)
				TR1[i] = TR[i];
		}
		for (int i = 0; i < 6; i++)
			TRT1[i] = TR1[i];
		BET1 = CSTT + DT * ALFW1 * FWK + DT * KST;
		GAM1 = (DT * ALFW1 * FWK * TRT1[3] + CSTT * TR[0]) / BET1;
		if (MainData.LP=true)
		{
			ATB=(9.8*(TR[2]-MainData.TW)*0.06*0.06*0.06*1.29*1.29*1000)/
			(0.5*(TR[2]+MainData.TW)*0.0000184*0.07);
			if (ATB < 1000)
				Ktn = 0.07;
			else Ktn=0.07*0.18*exp(0.25*(log(ATB)));
			if (ALFN1 == 0)
				Ktn = 0;
			else Ktn = 1 / (1 / ALFN1 + 0.0015 / 58 + 0.06 / Ktn);
			//Du:=sqrt(H*H+2*FN/PI)-H;
		   //FN:=PI/3*(Du+2*0.615)*H+2*PI/3*Du*H+2*PI*Du*Du;
			Ktn=Ktn*PI/3*(Du+2*0.0615)*H+ALFN1*(2*PI/3*Du*H+2*PI*Du*Du);
		}
		else
		{
			Ktn = ALFN1 * FN;
		}
		if (KIZ == 0)
		{
			BET2= CSTT + CIZT + DT * KST + DT * ALFN1 * FN;
			TR1[1] =BET1 * (DT * Ktn * MainData.TW + DT * KST * GAM1 + DT * MainData.QF * MainData.FF + CSTT * TR[1]) /
				(BET2 * BET1 - DT * DT * KST * KST);
			TR1[2] = TR1[1];
		}
		else
		{
			BET2 = CSTT + CIZT + DT * (KST + KIZ);
			BET3 = CIZT + DT * KIZ + DT * ALFN1 * FN;
			GAM3 = (DT * Ktn * MainData.TW + CIZT * TR[2] + DT * MainData.QF * MainData.FF) / BET3;
			TR1[1] = BET1 * (DT * (KIZ * GAM3 + KST * GAM1) + (CSTT + CIZT) * TR[1]) /
				(BET2 * BET1 - DT * DT * (KIZ * KIZ / BET3 + KST * KST));
			TR1[2] = DT * KIZ * TR1[1] / BET3 + GAM3;
		}
		TR1[0] = DT * KST * TR1[1] / BET1 + GAM1;


		if (((FI > 0) && (FI < 1)) && ((TRT1[3] <= MainData.TKR) && (TRT1[4] <= MainData.PKR)))
		{
			if (FLAGRR != 0)
			{
				Priznak = true;
				sEvent = "Две фазы";
				ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
				ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
				ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
				ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
				ProcForm->Update();
			}
			FLAGRR = 0;
			RoGT = LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.RG);
			RoFT = LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.RF);
			EGT = 1000 * LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.EG);
			EFT = 1000 * LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.EF);
			FI = (RoFT - TRT1[5]) / (RoFT - RoGT);
			if ((FI > 0) && (FI < 1))
			{
				GKR = 0;
				if (MainData.NPKK > 0)
				{
					for (int i = 0; i < MainData.NPKK; i++)
					{
						if ((TRT1[4] >= MainData.Klapans[i].PPK) && (KLopen[i] == 0))
							KLopen[i] = 1;
						else
						{
							if ((KLopen[i] == 1) && (TRT1[4] >= MainData.Klapans[i].PPS))
							{
								PRWKL = 1;
								KLopen[i] = 1;
								GKR = GKR + GIST(FI) * MainData.Klapans[i].SPK;
								//GIST функция вычисления критю расхода
							}
							else
							{
								GKR = GKR;
							}
						}
					}
				}
				ktt = ktt1;
				KT = 0;
				BT = (EGT - EFT) * RoGT / (TRT1[3] * (1 - RoGT / RoFT));
				ATB = 1000 * dFdTs(MainData.NS, TRT1[3], MainData.SUG.RG, MainData.SUG.EG, MainData.SUG.TS);
				ktt1 = 1000 * dFdTs(MainData.NS, TRT1[3], MainData.SUG.RF, MainData.SUG.EF, MainData.SUG.TS);
				if (ktt1 < 0)
					ktt1 = ktt;
				CT = MainData.Tank.V * (ktt1 * (1 - FI) + ATB * FI);
				CT = CT + BT * (MainData.Tank.V - KT);
				Cflu = CT;
				ATB = 0;
				if (GKR == 0)
					EUN = 0;
				else
					EUN = (RoFT * EFT * (1 - FI) + RoGT * EGT * FI) / (RoFT * (1 - FI) + RoGT * FI);
				if (TR[4] > 2800000)
					deltp++;
				TR1[3] = (CT * TR[3] + DT * (ATB * (MainData.Tank.V - KT) - GKR * EUN + ALFW1 * FWK * TRT1[0])) /
					(CT + DT * ALFW1 * FWK);
				TR1[5] = TR[5] * TRT1[5] / (TRT1[5] + DT * GKR / MainData.Tank.V);
				if (TR1[5] > 0.5 * (RoGT + RoFT))
					TR1[4] = LINT(MainData.NS, RoFT, MainData.SUG.RF, MainData.SUG.PS);
				else
					TR1[4] = LINT(MainData.NS, RoGT, MainData.SUG.RG, MainData.SUG.PS);
				if (FI < 0.0005)
				{
					FI = 0;
					TR[4] = LINT(MainData.NS, TR1[5], MainData.SUG.RF, MainData.SUG.PS);
					TR[3] = LINT(MainData.NS, TR1[5], MainData.SUG.RF, MainData.SUG.TS);
					TRT1[4] = TR[4];
					TRT1[3] = TR[3];
					TR1[4] = TR[4];
					TR[3] = TR[3];
				}
				if (FI > 0.9995)
				{
					FI = 1;
					TR[4] = LINT(MainData.NS, TR1[5], MainData.SUG.RG, MainData.SUG.PS);
					TR[3] = LINT(MainData.NS, TR1[5], MainData.SUG.RG, MainData.SUG.TS);
					TRT1[4] = TR[4];
					TRT1[3] = TR[3];
					TR1[4] = TR[4];
					TR1[3] = TR[3];
				}

			}
			else
			{
				if (FLAGRR == 0)
				{
					if ((abs((TR1[4] - MainData.PKR) / TR1[4]) < 0.001) && (abs((TR1[3] - MainData.TKR) / TR1[3]) < 0.001))
					{
						TR[4] = MainData.PKR;
						TR[3] = MainData.TKR;
						TR[5] = MainData.SUG.RF[MainData.NS];
						FI = 0;
					}
					Priznak = true;
					if (FI == 0)
						sEvent = "Одна фаза - жидкость";
					else
						sEvent = "Одна фаза - газ";
					ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
					ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
					ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
					ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
					ProcForm->Update();
				}
				if (FLAGRR < 10)
					FLAGRR++;
				GKR = 0;
				if (MainData.NPKK >= 0)/*??????*/
				{
					for (int i = 0; i < MainData.NPKK; i++)
					{
						if ((TRT1[4] >= MainData.Klapans[i].PPK) && (KLopen[i] == 0))
							KLopen[i] = 1;
						else
						{
							if ((KLopen[i] == 1) && (TRT1[4] >= MainData.Klapans[i].PPS))
							{
								PRWKL = 1;
								KLopen[i] = 1;
								GKR = GKR + GIST(FI) * MainData.Klapans[i].SPK;
							}
							else
								GKR = GKR;
						}
					}
				}
				dRdT = dFdX(1, 0, MainData.NTK, MainData.NPK, TRT1[3], TRT1[4], MainData.SUG.TK, MainData.SUG.PK, MainData.SUG.RK);
				dEdT = 1000 * dFdX(0, 0, MainData.NTK, MainData.NPK, TRT1[3], TRT1[4], MainData.SUG.TK, MainData.SUG.PK, MainData.SUG.EK);
				KT = TRT1[5] * dEdP;
				CT = MainData.Tank.V * TRT1[5] * dEdT;
				if ((TRT1[4] <= MainData.PKR) && (FLAGRR == 10))
				{
					BET1 = LINT(MainData.NS, TRT1[4], MainData.SUG.PS, MainData.SUG.TS);
					if (TRT1[3] <= BET1)
					{
						RoGT = LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.RG);
						RoFT = LINT(MainData.NS, TRT1[3], MainData.SUG.TS, MainData.SUG.RF);
						FI = (RoFT - TRT1[5]) / (RoFT - RoGT);
						if (FI < 0.0005)
							FI = 0;
					}
				}
				if (GKR == 0)
					EUN = 0;
				else
					EUN = ET;
				if (MainData.SUG.Name == "Хлор")
					CT = Cflu;
				TR1[3] = (CT * TR[3] + MainData.Tank.V * (1 - KT) * (TR1[4] - TR[4]) + DT * (-GKR * (EUN - ET) + ALFW1 * FWK * TRT1[0])) /
					(CT + DT * ALFW1 * FWK);
				TR1[5] = TR[5] * TRT1[5] / (TRT1[5] + DT * GKR / MainData.Tank.V);
				xnn = TR1[3];
				ynn = TR1[5];
				if (MainData.SUG.Name == "Хлор")
				{
					if ((TR1[3] <= MainData.TKR) || (FLAGRR == 1))
					{
						if (TR1[4] == MainData.TKR)
							KT = TR[3] - 0.1;
						else KT = TR[3] - 0.1;
						RoGT = LINT(MainData.NS, KT, MainData.SUG.TS, MainData.SUG.RG);
						RoFT = LINT(MainData.NS, KT, MainData.SUG.TS, MainData.SUG.RF);
						EGT = 1000 * LINT(MainData.NS, KT, MainData.SUG.TS, MainData.SUG.EG);
						EFT = 1000 * LINT(MainData.NS, KT, MainData.SUG.TS, MainData.SUG.EF);
						dfidt = (EGT - EFT) * RoGT / (1 - RoGT / RoFT) / TR[3];
						if (TR[5] > MainData.SUG.RF[MainData.NS])
						{
							xnn = LINT(MainData.NS, TR[5], MainData.SUG.RF, MainData.SUG.PS);
							ynn = LINT(MainData.NS, TR1[5], MainData.SUG.RF, MainData.SUG.PS);
						}
						else
						{
							xnn = LINT(MainData.NS, TR[5], MainData.SUG.RG, MainData.SUG.PS);
							ynn = LINT(MainData.NS, TR1[5], MainData.SUG.RG, MainData.SUG.PS);
						}
						if ((TR1[5] - TR[5]) != 0) dRdP = (ynn - xnn) / (TR1[5] - TR[5]);
						else dRdP = 0;
					}
					TR1[4] = TR[4] + dfidt * (TR1[3] - TR[3]) + dRdP * (TR1[5] - TR[5]);
					FI = 0;
				}
				else
				{
					TR1[4] = DBPs(MainData.NTK, MainData.NPK, MainData.SUG.TK, MainData.SUG.PK, MainData.SUG.RK);
				}
			}
		}
	}while (mybool() == false);
	QWN= ALFW1 * (TR1[0] - TR1[3]);
	for (int i = 0; i < 6; i++)
		TR[i] = TR1[i];
	if (MainData.NPKK > 0)
	{
		for (int i = 1; i < MainData.NPKK; i++)
		{
			if ((KLopen[i] == 1) && (KLclose[i] == 0))
			{
				Priznak = true;
				KLclose[i] = 1;
				sEvent = "Открылся " + MainData.Klapans[i].Marka;
				ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
				ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
				ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
				ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
				ProcForm->Update();
			}
			if ((TR1[4] < MainData.Klapans[i].PPS) && (KLopen[i] = 1) && (KLclose[i] = 1))
			{
				Priznak = true;
				KLopen[i] = 0;
				KLclose[i] = 0;
				sEvent = "Закрылся " + MainData.Klapans[i].Marka;
				ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
				ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
				ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
				ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
				ProcForm->Update();
			}
		}
	}
	if ((TR1[3] >= MainData.TKR) && (PrTKR==0))
	{
		PrTKR = 1;
		Priznak = true;
		sEvent = "Сверхкритическое состояние";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
	}
	if ((MainData.PRR==2) && (PRKRIZIS == 0))
	{
		PRKRIZIS = 1;
		Priznak = true;
		sEvent = "Кризис кипения";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
	}
	if (TR1[3] >= MainData.SUG.TK[MainData.NTK]-1)
	{
		Priznak = true;
		sEvent = "Предельная температура";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
	}
	if (TR1[4] >= MainData.PTANK*1000000)
	{
		Priznak = true;
		sEvent = "Разрыв цистерны";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
	}
	if (TAU >= MainData.TauP)
	{
		Priznak = true;
		sEvent = "Конец процесса";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
	}
	if (Priznak==true)
	{
		sTime = ConvertNum(TAU / 3600);
		sParams = "Т - " + ConvertNum(TR1[3] - 273) +
			"гр.Ц.;  P - " + ConvertNum(TR1[4] / 1000000) + "МПа.";
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[4] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[3] - 273).c_str());
		ProcForm->Update();
		AddEvent(sTime, sEvent, sParams);
		Priznak = false;
	}
}


inline void MainMath()
{
	FLAGRR = 0;
	PrTKR = 0;
	PRWKL = 0;
	PRKRIZIS = 0;
	ProcFormWin^ ProcForm = gcnew ProcFormWin();
	ProcForm->Show();
	ProcForm->Update();
	for (int i = 0; i < MainData.NPKK; i++)
	{
		KLopen[i] = 0;
		KLclose[i] = 0;
		MainData.Klapans[i].SPK = PI / 4 * MainData.Klapans[i].SPK * MainData.Klapans[i].SPK / 1000000;
		MainData.Klapans[i].PPK *= 1000000;
		MainData.Klapans[i].PPS *= 1000000;
	}
	deltp = 1;
	H = 4 * MainData.Tank.V / (PI * MainData.Tank.D * MainData.Tank.D);
	FWK = 0.5 * PI * MainData.Tank.D * MainData.Tank.D + PI * MainData.Tank.D * H;
	FNK = 0.5 * PI * (MainData.Tank.D + 2 * MainData.Tank.DST) * (MainData.Tank.D + 2 * MainData.Tank.DST) + PI * (MainData.Tank.D + 2 * MainData.Tank.DST) * H;
	for (int i = 0; i < 50; i++)
	{
		if (MainData.SUG.TS[i] != 0)
			MainData.NS = i;
		if (MainData.SUG.TK[i] != 0)
			MainData.NTK = i;
		if (MainData.SUG.PK[i] != 0)
			MainData.NPK = i;
	}
	MainData.TKR = MainData.SUG.TS[GetMaxIndex(MainData.SUG.TS)];
	MainData.PKR = MainData.SUG.PS[GetMaxIndex(MainData.SUG.TS)];
	FIZ = PI * MainData.SIZ / FNK;
	DIZ = MainData.Tank.D + 2 * MainData.Tank.DST + 2 * MainData.DIS;
	FTI = FIZ * DIZ * (0.5 * DIZ + H);
	DEZP = MainData.Tank.D + 2 * MainData.Tank.DST + 2 * MainData.DIS;
	FZP = (PI - FIZ) * DEZP * (0.5 * DEZP + H);
	FN = FTI + FZP;
	/*if (MainData.LP)
	{
		Du = sqrt(H * H + 2 * FN / PI) - H;
		FN = PI / 3 * (Du + 2 * 0.0615) * H + 2 * PI / 3 * Du * H + 2 * PI * Du * Du;
	}*/
	if (MainData.FF = -1)
		MainData.FF = FN;

	//Константы Расчета Температуры
	KST = 0.5 * MainData.Tank.Mat.L * (FWK + FNK) / MainData.Tank.DST;
	CSTT = 0.25 * MainData.Tank.Mat.R * MainData.Tank.Mat.C * MainData.Tank.DST * (FWK + FNK);
	if (MainData.DZP = 0)
		KIZ = 0;
	else
		KIZ = 0.5 * (MainData.ZP.L * FZP / MainData.DZP) * (FNK + FN) / FN;
	if (MainData.DIS = 0)
		KIZ1 = 0;
	else
		KIZ1 = 0.5 * (MainData.IZ.L * FTI / MainData.DIS) * (FNK + FN) / FN;
	KIZ += KIZ1;
	CIZT = 0.25 * (MainData.IZ.R * MainData.IZ.C * MainData.DIS * FTI + MainData.ZP.R * MainData.ZP.C * MainData.DZP * FZP) * (FNK + FN);
	DT = 0.01;

	DZAP = 5; //Уточнить
	TAU = 0;
	HZAP = 0;
	J1 = 0;
	for (int i = 0; i < 6; i++)
	{
		TR1[i] = MainData.TW;
		TR[i] = MainData.TW;
		TRT1[i] = MainData.TW;
	}
	TR1[5] = LINT(MainData.NS, MainData.TW, MainData.SUG.TS, MainData.SUG.PS);
	RoFT = LINT(MainData.NS, MainData.TW, MainData.SUG.TS, MainData.SUG.RF);
	RoGT = LINT(MainData.NS, MainData.TW, MainData.SUG.TS, MainData.SUG.RG);
	EGT = 1000 * LINT(MainData.NS, TRT1[4], MainData.SUG.TS, MainData.SUG.EG);
	EFT = 1000 * LINT(MainData.NS, TRT1[4], MainData.SUG.TS, MainData.SUG.EF);
	FI = (RoFT - TR1[6]) / (RoFT - RoGT);
	FI = 0.15;
	TR1[6] = RoFT * (1 - FI) + RoGT * FI;
	MainData.MSUG = TR1[6] * MainData.Tank.V;
	TR[6] = TR1[6];
	TRT1[6] = TR1[6];

	FI1 = FI;
	dfidt = 0;
	TR[5] = LINT(MainData.NS, MainData.TW, MainData.SUG.TS, MainData.SUG.RF);
	TR1[5] = LINT(MainData.NS, TR[5], MainData.SUG.RF, MainData.SUG.PS);
	TR[5] = TR1[5];
	TRT1[5] = TR1[5];
	/*I = SngltoInt(FI * 100);
	FI: = I * 0.001;
	I: = (TR[4] - 273) * 10;
		TR[4]: = i * 0.1;
	I: = TR[5] * 0.1
	tr[5] : = i * 0.00001; */
	sTime = '0';
	sEvent = "Начало процесса.Две фазы";
	sParams = "Т - " + ConvertNum(TR[4] - 273) +
		"гр.Ц.;  P - " + ConvertNum(TR[5] / 1000000) + "МПа.";
	AddEvent(sTime, sEvent, sParams);
	QWN = 0;
	ProcForm->progressBar1->Value = 0;
	ProcForm->progressBar1->Maximum = 2000;
	ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
	ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
	ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[5] / 1000000).c_str());
	ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[4] - 273).c_str());
	ProcForm->Update();

	//ЗАПИСЬ В ФАЙЛ TR1[I]
	while ((TR1[5] < MainData.PTANK * 1000000) && (TAU < MainData.TauP) && (TR1[4] < MainData.SUG.TK[MainData.NTK] - 1))
	{
		TAU = TAU + DT;
		HZAP = HZAP + DT;
		J1 = J1 + 1;
		SLOI(ProcForm);
		ProcForm->progressBar1->Value += 1;
		ProcForm->LSOST->Text = gcnew String(sEvent.c_str());
		ProcForm->LTFR->Text = gcnew String(ConvertNum(TAU / 3600).c_str());
		ProcForm->LPVN->Text = gcnew String(ConvertNum(TR1[5] / 1000000).c_str());
		ProcForm->LTVN->Text = gcnew String(ConvertNum(TR1[4] - 273).c_str());
		ProcForm->Update();
		if (J1 >= 2001)
		{
			J1 = 0;
			ProcForm->progressBar1->Value += 0;
		}
		if ((TAU - DT) == 0)
			AddPoint(TR1[4] - 273, TR1[5] / 1000000, TAU / 60);
		if (HZAP >= DZAP)
		{
			HZAP = 0;
			AddPoint(TR[4] - 273, TR1[5] / 1000000, TAU / 60);
			//ЗАПИСЬ В ФАЙЛ TR1[I]
		}
	}
	AddPoint(TR1[4] - 273, TR1[5] / 1000000, TAU / 60);
	ProcForm->Close();
}