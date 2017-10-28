#include "Header.h"
#include<fstream> //working with a file

void RingBell::ReadFile()
{
	fstream infile;
	infile.open("schedule.txt");	//open the file

	if (!infile.is_open())	
	{
		cout << "schedule.txt file did not open!" << endl;
		return;
	}

	while (infile.good()
	{
		int temp;
		infile >> temp;
		ring_times.push_back(temp);
	}

	infile.close();

}