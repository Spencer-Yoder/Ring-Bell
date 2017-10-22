#include "Header.h"
#include<MMSystem.h>	
#pragma comment(lib, "winmm.lib")

void RingBell::PlayBell_1()	//Play Bell once 
{
	PlaySound(TEXT("bell.wav"), NULL, SND_SYNC);
}


void RingBell::PlayBell_2()	//Play Bell twice
{
	PlaySound(TEXT("bell.wav"), NULL, SND_SYNC);
	PlaySound(TEXT("bell.wav"), NULL, SND_SYNC);
}