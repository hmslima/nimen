#include <string>
#include "Thing.h"

void Thing::set_height(int new_height) {
    height = new_height;
}

int Thing::get_height() {
    return height;
}

void Thing::set_constitution(int new_constitution) {
    constitution = new_constitution;
}

int Thing::get_constitution() {
    return constitution;
}

void Thing::set_inner_space(int new_inner_space) {
    inner_space = new_inner_space;
}

int Thing::get_inner_space() {
    return inner_space;
}

void Thing::set_env_location(std::string env_location_id) {
    env_location = env_location_id;
}

std::string Thing::get_env_location() {
    return env_location;
}

void Thing::set_building_location(std::string building_location_id) {
    building_location = building_location_id;
}

std::string Thing::get_building_location() {
    return building_location;
}