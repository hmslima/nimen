#ifndef UNIVERSAL_H
#define UNIVERSAL_H

#include <string>

class Universal {

    protected:
        std::string id {0};
        std::string name;
        short int area {0};

        //Translations
        std::string name_ptbr;
        std::string name_es;
    
    public:

        // Getters and Setters

        void set_id(std::string new_id);
        std::string get_id();

        void set_name(std::string new_name);
        std::string get_name();

        void set_area(int new_area);
        int get_area();

        void set_name_ptbr(std::string new_name);
        std::string get_name_ptbr();

        void set_name_es(std::string new_name);
        std::string get_name_es();

        // Other methods

        void same_names();
};

#endif