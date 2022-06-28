#ifndef BUILDING_H
#define BUILDING_H

#include <string>
#include "Thing.h"
#include "Place.h"

class Building: public Thing, public Place {
    private:
        bool has_it_a_ceiling {true};
    public:

        Building(std::string new_name, int new_inner_space);

        void set_has_it_a_ceiling(bool new_has_it_a_ceiling);
        bool get_has_it_a_ceiling();
};

#endif