/*
 * ConfigurationHandler.cpp
 *
 *  Created on: May 3, 2012
 *      Author: tompet
 */
#include <fstream>
#include <iostream>
#include <vector>
#include "Shared.h"
#include "Configuration.h"
#include "ColorTranslator.h"
#include "UniversalConfiguration.h"
using namespace std;

static void save(UniversalConfiguration uc, String path){
	ofstream file(path);
	if (file.is_open())	{
		uc.writeToStream(file);
	}
	else cout << "Unable to open file";
	file.close();
}

static UniversalConfiguration load(String path){
	ifstream file(path);
	if(file.is_open()){
		uc.readStream(file);
	} else cout << "File error";
	file.close();
	return uc;
}
