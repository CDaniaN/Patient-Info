#ifndef BLOOD_H
#define BLOOD_H

#include <iostream>
#include <string>
using namespace std;

class BloodData
{
	private:
		string blood_type;
		char RhFactor;
	public:
		BloodData()
		{
			blood_type = "O";
			RhFactor = '+';
		}
		BloodData(string bt, char rf)
		{
			blood_type = bt;
			RhFactor = rf;
		}
		void setBloodType(string bt)
		{
			blood_type = bt;

		}
		void setRhFactor(char rf)
		{
			RhFactor = rf;
		}
		string getBloodType()
		{
			return blood_type;
		}
		char getRhFactor()
		{
			return RhFactor;
		}
};

#endif
