#pragma once
#include <string>
#include "MaterialSpr.h"

const std::string FNTank = "Tank.dat";

struct TTank
{
	std::string Name;
	double D;
	double V;
	TMaterial Mat;
	double DST;
};

static TTank Tank;
static FILE* FTank;
inline void OpenTank()
{
	FTank = fopen(FNTank.c_str(), "a+");
}
inline void CloseTank()
{
	fclose(FTank);
}
inline void AddTank(TTank aTank)
{
	FTank = fopen(FNTank.c_str(), "a+");
	fseek(FTank, 0, 0);
	
	while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
	{
	}
	fwrite((char*)&aTank, sizeof(aTank), 1, FTank);
	fclose(FTank);
}
inline TTank ReadTank(int aNum)
{
	FTank = fopen(FNTank.c_str(), "a+");
	fseek(FTank, 0, 0);
	for (int i = 0; i <= aNum; i++)
		fread((char*)&Tank, sizeof(Tank), 1, FTank);
	return Tank;
	fclose(FTank);
}
inline void WriteTank(int aNum, TTank aTank)
{
	FILE* F;
	fclose(FTank);
	FTank = fopen(FNTank.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FTank, 0, 0);
	int i = 0;
	while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Tank, sizeof(Tank), 1, F);
		else
			fwrite((char*)&aTank, sizeof(aTank), 1, F);
		i++;
	}
	fcloseall();
	_set_errno(0);
	std::remove(FNTank.c_str());
	int zzzzzz = _doserrno;
	std::string zzzzz = strerror(_doserrno);
	std::rename("$$$.$$$", FNTank.c_str());
	OpenTank();
}
inline void DelTank(int aNum)
{
	FILE* F;
	fclose(FTank);
	FTank = fopen(FNTank.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FTank, 0, 0);
	int i = 0;
	while (fread((char*)&Tank, sizeof(Tank), 1, FTank) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Tank, sizeof(Tank), 1, F);
		i++;
	}
	//fclose(FMaterial);
	//fclose(F);
	int GGG = fcloseall();
	std::remove(FNTank.c_str());
	int s = errno;
	std::rename("$$$.$$$", FNTank.c_str());
	OpenTank();
}
/*int GetRecCount()
{
	struct stat fi;
	stat(FNTank.c_str(), &fi);
	return fi.st_size;
}*/