#include "Header.h"

int main()
{
	RingBell bells;

	bells.GetTime();
	bells.ReadFile();

	cout << "The Bells will ring at:" << endl;
	bells.CalcTime();

	bells.WaitTime();

	return 0;
}