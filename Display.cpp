//============================================================================
// Name        : Display.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

Monitor myMonitor;
Projector projectorList;
ColorTranslator myColorTrans;
int numProjectors;


//todo
//final int WIDTH:
//final int HEIGHT:

void Display(){
	*myMonitor = new Monitor();


	// in i config fil och hämta antal projektorer
	//TODO
	numProjectors = 4; // Temp
	*projectorList = new projectorList[10];
	for(int i = 0; i<numProjectors; i++){
		//TODO buffer of size len at memory (inte 50)
		projectorList[i] = new Projector(&projectorList[i], 50);
	}
	*myColorTrans = new ColorTranslator();

}

void display(Scene scn){
	myColorTrans.apply();
	//todo göra klart
}

int getProjectors(){
	return &projectorList;
}

Monitor getMonitor(){
	return myMonitor;
}
ColorTranslator getColorTranslator(){
	return myColorTrans;
}
double getBoundingCube(){
	//todo
}
void highlight(){
	//todo
	//	for each(Projector p in projector):
	//	       p.highlight();
	for(int i = 0; i<numProjectors;i++){
		projectorList[i].highlight();
	}
}
void unHighlight(){
	//todo
	for(int i = 0; i<numProjectors;i++){
		projectorList[i].unhighlight();
	}
}
void setConfigurations(UniversalConfiguration uc){
	//todo

}
UniversalConfiguration getConfigurations(){
	//todo
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
