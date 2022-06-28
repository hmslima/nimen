#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Thing.h"

/*
* Attributes like strength, constitution, dexterity, intelligence, wisdom, and charisma are considered primitive attributes because we
* use them to build other attributes.
* The primitive attributes of normal living beings range from 0 to 1, any value beyond this can only be used for extraordinary beings
* strength:
*   0 - normal baby
*   1 - normal child
*   2 - normal "weak" adult
*   3 - normal adult
*   4 - strong adult
*   5 - extraordinarily strong adult
* intelligence:
*   0 - it's a bacteria...
*   1 - any "dumb animal"
*   2 - an intellignet animal or a human toddler
*   3 - normal child
*   4 - normal adult or a "genius" child
*   5 - an actual genius
*
*/

class Character: public Thing {
    private:
        short int strength {0};
        short int dexterity {0};
        short int intelligence {0};
        short int wisdom {0};
        short int charisma {0};
    public:

        Character(std::string new_name);

        void set_strength(int new_strength);
        int get_strength();

        void set_dexterity(int new_dexterity);
        int get_dexterity();

        void set_intelligence(int new_intelligence);
        int get_intelligence();

        void set_wisdom(int new_wisdom);
        int get_wisdom();
        
        void set_charisma(int new_charisma);
        int get_charisma();
};

#endif