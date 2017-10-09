#include <string>
#include "Wand.h"

#ifndef WAND_H
#define WAND_H

class Wand : public Weapon {
public:

    Wand() : Weapon("Wand", 30.0) {
    }
    virtual ~Wand() {};
    virtual double hit(double armor);

};

#endif /* WAND_H */
