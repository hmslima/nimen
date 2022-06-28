#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#include <string>

#include "functions/command.h"

#include "creation.h"

std::string game_language = "en";

std::string raw_command;
std::string commad_name;
std::string commad_target;
bool command_has_argument;
std::string message;

extern "C" {

    void EMSCRIPTEN_KEEPALIVE generate_world () {
        create_environments ();
        create_characters();
    }

    void EMSCRIPTEN_KEEPALIVE send_command(std::string sent_command) {

        // Clear any garbage stored in raw_command
        raw_command.clear();

        // Copy the input to raw_command
        raw_command = sent_command;

        // Get the parts of the command
        get_commands_name ();
        analyze_command_name();
        get_commands_target ();
        analyze_command_argument();

    }

    const char* EMSCRIPTEN_KEEPALIVE game_output() {
        return message.c_str();
    }

    const char* EMSCRIPTEN_KEEPALIVE see_raw_command() {
        return raw_command.c_str();
    }

    const char* EMSCRIPTEN_KEEPALIVE see_command() {
        return commad_name.c_str();
    }

    const char* EMSCRIPTEN_KEEPALIVE see_target() {
        return commad_target.c_str();
    }

}