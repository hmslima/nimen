#ifndef THING_H
#define THING_H

#include "Universal.h"

class Thing:  public Universal {
    protected:

        short int height {0};
        short int constitution {0};
        short int inner_space {0}; // If there is inner space, other things can be stored inside

        std::string env_location{""};
        std::string building_location{""};

    public:

        void set_height(int new_height);
        int get_height();

        void set_constitution(int new_constitution);
        int get_constitution();

        void set_inner_space(int new_inner_space);
        int get_inner_space();

        void set_env_location(std::string env_location_id);
        std::string get_env_location();

        void set_building_location(std::string building_location_id);
        std::string get_building_location();

};

#endif