#include "Header.h"
#include<ctime>	//Used for getting time


void RingBell::GetTime()
{
	time_t currentTime;
	struct tm *localTime;

	time(&currentTime);                   // Get the current time
	localTime = localtime(&currentTime);  // Convert the current time to the local time

	current_hour = localTime->tm_hour;	
	current_min = localTime->tm_min;		
	current_sec = localTime->tm_sec;

	cout << "Chruch got out at: " << current_hour << ":" << current_min << "." << current_sec << endl << endl;	
}