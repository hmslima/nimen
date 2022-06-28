#ifndef PLACE_H
#define PLACE_H

class Place {
    private:
        /*
        * The class Place has the attribute members that define where a character can go
        * 0 - A character cannot go in that dirrection
        * 1 - A character can go in that dirrection, and the passage is visible
        * 2 - A character can go in that dirrection, however the passage is closed
        * 3 - A character can go in that dirrection, however the passage is hidden
        */
        short int north {0};
        short int south {0};
        short int east {0};
        short int west {0};
        short int up {0};
        short int down {0};
        
    public:

        void set_north(int direction);
        int get_north();

        void set_south(int direction);
        int get_south();

        void set_east(int direction);
        int get_east();

        void set_west(int direction);
        int get_west();

        void set_up(int direction);
        int get_up();

        void set_down(int direction);
        int get_down();

};

#endif