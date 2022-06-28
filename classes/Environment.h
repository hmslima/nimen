#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <string>
#include "Universal.h"
#include "Place.h"

class Environment: public Universal, public Place {
    
    public:
    Environment(std::string new_id, std::string new_name);
};

#endif