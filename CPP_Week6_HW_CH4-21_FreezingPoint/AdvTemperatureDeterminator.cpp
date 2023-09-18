#include "AdvTemperatureDeterminator.h"
#include <iostream>
using namespace std;

void AdvTemperatureDeterminator::determine_Freeze_and_Boiling()
{
	cout << "What Temperature Do You Need To Check? ";
	int userTemp;
	cin >> userTemp;

	//use seperate if statements for each substance test, and for temperature Checks 


	//test freezing point

	if (userTemp <= -362) {
		//water freeze under 33
		cout << "Oxygen Will Freeze At: " << userTemp << " , ";
	}
	else if (userTemp <= -173) {
		cout << "Ethyl Will Freeze At: " << userTemp << " , ";
		//merc freezes under -38
	}
	else if (userTemp <= -38) {
		cout << "Mercury Will Freeze At: " << userTemp << " , ";


	}
	else if (userTemp <= 32) {
		cout << "Water Will Freeze At: " << userTemp << " , ";

	}
	else {
		cout << "Nothing Freezes at that Temperature , But ";
	}


	//test for Boiling Points
	if (userTemp >= 676) {
		cout << "Mercury Will Boil At: " << userTemp;

	}else if (userTemp >= 212 ) {
		cout << "Water Will Boil At: " << userTemp;

	}
	else if (userTemp >= 172) {
		cout << "Ethyl Will Boil At: " << userTemp;

	}
	else if (userTemp >= -306) {
		cout << "Oxygen Will Boil At: " << userTemp;

	}







}
