#include "SimpleAxe.h"

double SimpleAxe::hit(double armor)
{
    if(armor > 0 && armor < 20)
    {
		double damage = hitPoints;
        if(damage < 0)
			return 0;
    }

	else
		double damage = hitPoints - armor;

    return damage;
}
