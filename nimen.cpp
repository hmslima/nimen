#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#include <string>

#include "functions/command.h"

#include "creation.h"

std::string raw_command;

extern "C" {

    void EMSCRIPTEN_KEEPALIVE generate_world () {
        create_environments ();
        create_characters();
    }

    void EMSCRIPTEN_KEEPALIVE send_command(char* sent_command) {
        for (int i = 0; i < sizeof(sent_command); i++) {
            raw_command += sent_command[i];
        }
    }

    const char* EMSCRIPTEN_KEEPALIVE see_command() {
        return raw_command.c_str();
    }

}