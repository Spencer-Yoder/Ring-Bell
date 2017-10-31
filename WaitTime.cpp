#include "Header.h"

//This Function calls RingBell function after the program waits the
//pre-determined time between bells. 
void RingBell::WaitTime()
{
	int count = 1; //start at ring one
	int total_time = ring_times[0];

	Sleep(ring_times[0] * 60 * 1000);	//calculate the first wait time
	PlayBell_1();	//rings bells once
	cout << "Rang bell 1" << endl;
	
	for (int i = 1; i < ring_times.size(); ++i)
	{
		if (count == 1)	//If count is 1 ring bell twice
		{
			Sleep((ring_times[i] - ring_times[i - 1]) * (60 * 1000));
			PlayBell_2();
			cout << "Rang bell " << (i+1) << endl;
			count = 0;
			total_time = total_time + ring_times[i];
		}

		else //Ring only once
		{
			Sleep((ring_times[i] - ring_times[i - 1]) * (60 * 1000));
			PlayBell_1();
			cout << "Rang bell " << (i+1) << endl;
			count = 1;
			total_time = total_time + ring_times[i];
		}
	}
}
