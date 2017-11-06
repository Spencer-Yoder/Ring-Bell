#include "Header.h"

//This function Calculates the time when the bells will ring
//and out puts them to the user. If the time is more than 60
//min it will reset back to 0.
void RingBell::CalcTime()
{
	int count = 1;

	for (vector<int>::iterator iter = ring_times.begin(); iter != ring_times.end(); iter++)	//Iterate through the vector
	{
		int Temp_hour = 0;
		int Temp_min = 0;

		Temp_hour = current_hour;
		Temp_min = current_min + *iter;

		while (Temp_min > 60)	//If more then 60 min move back to 0
		{
			Temp_min = Temp_min - 60;
			Temp_hour++;
		}

		if (Temp_hour > 12)	//If it is more then 12 hours move back to 0
			Temp_hour = Temp_hour - 12;

		cout << count << "\t" << Temp_hour << ":" << setfill('0') << setw(2) << Temp_min << endl; //output
		count++;
	}
	cout << endl;
}