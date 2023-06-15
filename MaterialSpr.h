#pragma once
#include <string>
#include <fstream>
#include <stdio.h>

const std::string FNMat = "Material.dat";

struct TMaterial
{
	std::string Name;
	double R;
	double C;
	double L;
};

static TMaterial Material;
static FILE* FMaterial;
inline void OpenMaterial()
{
	char csdf;
	FMaterial = fopen(FNMat.c_str(), "a+");
	if (FMaterial==NULL)
		csdf = 'E';
	else
		csdf = 'D';
	perror("fopen");
}
inline void CloseMaterial()
{
	fclose(FMaterial);
}
inline void AddMaterial(TMaterial aMaterial)
{
	FMaterial = fopen(FNMat.c_str(), "a+");
	fseek(FMaterial, 0, 0);
	CloseMaterial();
	OpenMaterial();

	while (fread((char*)&Material, sizeof(Material), 1, FMaterial)== 1)
	{
	}
	fwrite((char*)&aMaterial, sizeof(aMaterial),1, FMaterial);
	fclose(FMaterial);
}
inline TMaterial ReadMaterial(int aNum)
{
	FMaterial = fopen(FNMat.c_str(), "a+");
	fseek(FMaterial,0, 0);
	for(int i=0;i<=aNum;i++)
		fread((char*)&Material, sizeof(Material),1, FMaterial);
	fclose(FMaterial);
	return Material;
}
inline void DelMaterial(int aNum)
{
	FILE* F;
	fclose(FMaterial);
	FMaterial = fopen(FNMat.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FMaterial, 0, 0);
	int i = 0;
	while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Material, sizeof(Material), 1, F);
		i++;
	}
	//fclose(FMaterial);
	//fclose(F);
	int GGG = fcloseall();
	std::remove(FNMat.c_str());
	int s = errno;
	std::rename("$$$.$$$", FNMat.c_str());
	OpenMaterial();
}
inline void WriteMaterial(int aNum, TMaterial aMaterial)
{
	FILE* F;
	fclose(FMaterial);
	FMaterial = fopen(FNMat.c_str(), "a+");
	F = fopen("$$$.$$$", "a+");
	fseek(FMaterial, 0, 0);
	int i = 0;
	while (fread((char*)&Material, sizeof(Material), 1, FMaterial) == 1)
	{
		if (i != aNum)
			fwrite((char*)&Material, sizeof(Material), 1, F);
		else
			fwrite((char*)&aMaterial, sizeof(aMaterial), 1, F);
		i++;
	}
	fcloseall();
	_set_errno(0);
	std::remove(FNMat.c_str());
	int zzzzzz = _doserrno;
	std::string zzzzz = strerror(_doserrno);
	std::rename("$$$.$$$", FNMat.c_str());
	OpenMaterial();
}
inline int GetRecCount()
{
	struct stat fi;
	stat(FNMat.c_str(), &fi);
	return fi.st_size;
}