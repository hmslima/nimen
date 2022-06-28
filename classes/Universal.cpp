#include <string>
#include "Universal.h"

// Getters and Setters

void Universal::set_id(std::string new_id) {
    id = new_id;
}

std::string Universal::get_id() {
    return id;
}

void Universal::set_name(std::string new_name) {
    name = new_name;
}

std::string Universal::get_name() {
    return name;
}

void Universal::set_area(int new_area) {
    area = new_area;
}

int Universal::get_area() {
    return area;
}

void Universal::set_name_ptbr(std::string new_name) {
    name_ptbr = new_name;
}

std::string Universal::get_name_ptbr() {
    return name_ptbr;
}

void Universal::set_name_es(std::string new_name) {
    name_es = new_name;
}

std::string Universal::get_name_es() {
    return name_es;
}

// Other methods

void Universal::same_names() {
    name_ptbr = name;
    name_es = name;
}