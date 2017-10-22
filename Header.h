#ifndef HEADER
#define HEADER

#include<iostream>
#include<vector>
#include<iomanip>	//set width
#include<Windows.h>	//audio and sleeping

using namespace std;

class RingBell
{
private:
	int current_hour;	
	int current_min;
	int current_sec;

	vector<int> ring_times;	

public:
	void ReadFile();
	void GetTime();
	void CalcTime();
	void WaitTime();

	void PlayBell_1();
	void PlayBell_2();
};
#endif
