#include <vector>

#include "classes/Environment.h"
#include "classes/Character.h"

std::vector<Environment> env;
std::vector<Character> npc;

void create_environments () {

    Environment *burned_tree_village_north = new Environment("btvn", "Burned Tree village: north part");
    burned_tree_village_north->set_south(1);
    burned_tree_village_north->set_name_ptbr("Vila Árvore Queimada: parte norte");
    burned_tree_village_north->set_name_es("Villa Árbol Quemado: parte norte");
    env.push_back(*burned_tree_village_north);

    Environment *burned_tree_village_south = new Environment("btvs", "Burned Tree village: south part");
    burned_tree_village_south->set_north(1);
    burned_tree_village_south->set_name_ptbr("Vila Árvore Queimada: parte sul");
    burned_tree_village_south->set_name_es("Villa Árbol Quemado: parte sur");
    env.push_back(*burned_tree_village_south);
}

void create_characters () {

    // The player's character
    Character *player = new Character("player");
    player->set_env_location("btvn");

    npc.push_back(*player);

}