#include "Wand.h"

double Wand::hit(double armor)
{
    if(armor < 50)
    {
		double damage = hitPoints;
        if(damage < 0)
			return 0;
    }

	else
		double damage = hitPoints - armor;

    return damage;
}
