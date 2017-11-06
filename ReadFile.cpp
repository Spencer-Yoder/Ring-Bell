#include "Header.h"
#include<fstream> //Used for working with a file

//This function reads a file to find out when the bells need to rung.
//If the file is not there or can not be opened it gives an error and
//sets the times with pre-determined time. 
void RingBell::ReadFile()
{
	fstream infile;
	infile.open("schedule.txt");	//open the file

	if (!infile.is_open())	//Check to see if the file is open
	{
		cout << "schedule.txt file did not open! Using Hard Coded Times (10, 15, 55, 60)" << endl;
		ring_times.push_back(10); //10
		ring_times.push_back(15);	//15
		ring_times.push_back(55);	//55
		ring_times.push_back(60);	//60
		return;
	}

	while (infile.good())	//read file and add to vector
	{
		int temp;
		infile >> temp;
		ring_times.push_back(temp);
	}

	infile.close();	//Do the closeie thingie to the file

}