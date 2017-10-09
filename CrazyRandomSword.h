#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>      
#include "CrazyRandomSword.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

	srand (time(NULL));
	int random = rand() % 91 + 10;

    CrazyRandomSword() : Weapon("CrazyRandomSword", random) {
	}
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
