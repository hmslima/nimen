#include <string>
#include "Building.h"

Building::Building(std::string new_name, int new_inner_space) {
    Universal::set_name(new_name);
    inner_space = new_inner_space;
}

void Building::set_has_it_a_ceiling(bool new_has_it_a_ceiling) {
    has_it_a_ceiling = new_has_it_a_ceiling;
}

bool Building::get_has_it_a_ceiling() {
    return has_it_a_ceiling;
}