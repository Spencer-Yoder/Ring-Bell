#ifndef HEADER
#define HEADER

#include<iostream>
#include<vector>
#include<iomanip>	//Used for set width
#include<Windows.h>	//Used for playing audio and sleeping

using namespace std;

class RingBell
{
private:
	int current_hour;	//Store the current time in hours, min, and sec
	int current_min;
	int current_sec;

	vector<int> ring_times;	//Vector to saved the times to ring the bells (all set so many min after the current time)

public:
	void ReadFile();
	void GetTime();
	void CalcTime();
	void WaitTime();

	void PlayBell_1();
	void PlayBell_2();
};
#endif
