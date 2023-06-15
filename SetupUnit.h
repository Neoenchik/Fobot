#pragma once
#include "Ftypes.h"
#include <fstream>

static TSetup SetD;

inline TSetup ReadSetupData()
{
	std::ifstream fileConfiguration;
	fileConfiguration.open("Fobot.ini");
	std::string s;
	if (!fileConfiguration.is_open())
	{
		fileConfiguration.close();
		std::ofstream Createfile;
		Createfile.open("Fobot.ini");
		Createfile << "[Main]" << std::endl << "Expession = 5";
		Createfile.close();
		fileConfiguration.open("Fobot.ini");
	}
	fileConfiguration >> s;
	fileConfiguration >> s;
	fileConfiguration >> s;
	fileConfiguration >> s;
	fileConfiguration.close();
	SetD.Expres = atoi(s.c_str());
	return SetD;
}
inline void WriteSetupData(TSetup Data)
{
	std::ofstream Createfile;
	Createfile.open("Fobot.ini");
	Createfile << "[Main]" << std::endl << "Expession = " << Data.Expres;
	Createfile.close();
}