#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	srand (time(NULL));
	int armr = armor / 2;
	int randm = rand() % armr;       //0 to half the armor  +1

	double damage = hitPoints - randm;
    if(damage < 0)
		return 0;

    return damage;
}
