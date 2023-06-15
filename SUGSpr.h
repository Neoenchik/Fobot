#pragma once
#include "Ftypes.h"
#include <string>
#include <stdio.h>
#include <sys/stat.h>

const std::string FNSUG = "SUG.dat";
const int NS = 50;
struct TSUG
{
	std::string Name;
	double LF;
	double NuF;
	double CpF;
	double SigmaF;
	double NuG;
	double LG;
	double CpG;
	FS PS, TS, RF, EF, RG, EG;
	FKR EK, RK;
	FL PK, TK;
	double LKR;
	double CKP;
	double NuKR;
};
static TSUG SUG;
static FILE* FSUG;
inline void OpenSUG()
{
	char csdf;
	FSUG = fopen(FNSUG.c_str(), "a+");
	if (FSUG == NULL)
		csdf = 'E';
	else
		csdf = 'D';
	perror("fopen");
}
inline void CloseSUG()
{
	fclose(FSUG);
}
inline void AddSUG(TSUG aSUG)
{
	FSUG = fopen(FNSUG.c_str(), "a+");
	fseek(FSUG, 0, 0);
	CloseSUG();
	OpenSUG();

	while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
	{
	}
	fwrite((char*)&aSUG, sizeof(aSUG), 1, FSUG);
	fclose(FSUG);
}
inline TSUG ReadSUG(int aNum)
{
	FSUG = fopen(FNSUG.c_str(), "a+");
	fseek(FSUG, 0, 0);
	for (int i = 0; i <= aNum; i++)
		fread((char*)&SUG, sizeof(SUG), 1, FSUG);
	fclose(FSUG);
	return SUG;
}
inline void WriteSUG(int aNum, TSUG aSUG)
{
	FILE* F;
	fclose(FSUG);
	FSUG = fopen(FNSUG.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FSUG, 0, 0);
	int i = 0;
	while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
	{
		if (i != aNum)
			fwrite((char*)&SUG, sizeof(SUG), 1, F);
		else
			fwrite((char*)&aSUG, sizeof(aSUG), 1, F);
		i++;
	}
	fcloseall();
	_set_errno(0);
	std::remove(FNSUG.c_str());
	int zzzzzz = _doserrno;
	std::string zzzzz = strerror(_doserrno);
	std::rename("$$$.$$$", FNSUG.c_str());
	OpenSUG();
}
inline void DelSUG(int aNum)
{
	FILE* F;
	fclose(FSUG);
	FSUG = fopen(FNSUG.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FSUG, 0, 0);
	int i = 0;
	while (fread((char*)&SUG, sizeof(SUG), 1, FSUG) == 1)
	{
		if (i != aNum)
			fwrite((char*)&SUG, sizeof(SUG), 1, F);
		i++;
	}
	//fclose(FSUG);
	//fclose(F);
	int GGG = fcloseall();
	std::remove(FNSUG.c_str());
	int s = errno;
	std::rename("$$$.$$$", FNSUG.c_str());
	OpenSUG();
}
/*int GetRecCount()
{
	struct stat fi;
	stat(FNSUG.c_str(), &fi);
	return fi.st_size;
}*/