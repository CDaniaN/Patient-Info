//Dania Nasereddin 3-4-20 #19
// Lab 06 - Patient Info
//

#include <iostream>
#include "Patient.h"
#include "Blood.h"
using namespace std;

int main()
{
	Patient Timmy;
	cout << "Patient ID: " << Timmy.getID() <<
		"\nPatient Age: " << Timmy.getAge() << endl;
	Timmy.displayBlood();

	Patient Spike(1337, 19, '-', "AB");
	cout << "Patient ID: " << Spike.getID() <<
		"\nPatient Age: " << Spike.getAge() << endl;
	Spike.displayBlood();

	system("PAUSE>nul");
	return 0;
}