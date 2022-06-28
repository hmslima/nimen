#include "Environment.h"

Environment::Environment(std::string new_id, std::string new_name) {
    Universal::set_id(new_id);
    Universal::set_name(new_name);
}