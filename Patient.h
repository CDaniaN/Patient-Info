#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include "Blood.h"
using namespace std;

class Patient
{
	private:
		int ID_number;
		int age;
		BloodData blood;
	public:
		Patient()
		{
			ID_number = 0;
			age = 0;

		}
		Patient(int id, int a, char rf, string bt) : blood(bt, rf)
		{
			ID_number = id;
			age = a;
		}
		int getID()
		{
			return ID_number;
		}
		int getAge()
		{
			return age;
		}
		void displayBlood()
		{
			cout << "Blood Type: " << blood.getBloodType() << blood.getRhFactor() << endl;
		}

};
#endif
