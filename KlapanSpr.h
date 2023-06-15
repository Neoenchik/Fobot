#pragma once
#include <string>
#include <stdio.h>

const std::string FNKlapan = "Klapan.dat";

struct TKlapan
{
	std::string Marka;
	double PPK;
	double PPS;
	double SPK;
};

static TKlapan Klapan;
static FILE* FKlapan;
inline void OpenKlapan()
{
	char csdf;
	FKlapan = fopen(FNKlapan.c_str(), "a+");
	if (FKlapan == NULL)
		csdf = 'E';
	else
		csdf = 'D';
	perror("fopen");
}
inline void CloseKlapan()
{
	fclose(FKlapan);
}
inline void AddKlapan(TKlapan aKlapan)
{
	FKlapan = fopen(FNKlapan.c_str(), "a+");
	fseek(FKlapan, 0, 0);
	CloseKlapan();
	OpenKlapan();

	while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
	{
	}
	fwrite((char*)&aKlapan, sizeof(aKlapan), 1, FKlapan);
	fclose(FKlapan);
}
inline TKlapan ReadKlapan(int aNum)
{
	FKlapan = fopen(FNKlapan.c_str(), "a+");
	fseek(FKlapan, 0, 0);
	for (int i = 0; i <= aNum; i++)
		fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan);
	fclose(FKlapan);
	return Klapan;
}
inline void WriteKlapan(int aNum, TKlapan aKlapan)
{
	FILE* F;
	fclose(FKlapan);
	FKlapan = fopen(FNKlapan.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FKlapan, 0, 0);
	int i = 0;
	while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Klapan, sizeof(Klapan), 1, F);
		else
			fwrite((char*)&aKlapan, sizeof(aKlapan), 1, F);
		i++;
	}
	fcloseall();
	_set_errno(0);
	std::remove(FNKlapan.c_str());
	int zzzzzz = _doserrno;
	std::string zzzzz = strerror(_doserrno);
	std::rename("$$$.$$$", FNKlapan.c_str());
	OpenKlapan();
}
inline void DelKlapan(int aNum)
{
	FILE* F;
	fclose(FKlapan);
	FKlapan = fopen(FNKlapan.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FKlapan, 0, 0);
	int i = 0;
	while (fread((char*)&Klapan, sizeof(Klapan), 1, FKlapan) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Klapan, sizeof(Klapan), 1, F);
		i++;
	}
	//fclose(FKlapan);
	//fclose(F);
	int GGG = fcloseall();
	std::remove(FNKlapan.c_str());
	int s = errno;
	std::rename("$$$.$$$", FNKlapan.c_str());
	OpenKlapan();
}
/*int GetRecCount()
{
	struct stat fi;
	stat(FNKlapan.c_str(), &fi);
	return fi.st_size;
}*/