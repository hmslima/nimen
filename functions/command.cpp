#include <string>
#include "command.h"
#include "texts.h"

extern std::string game_language;

extern std::string raw_command;
extern std::string commad_name;
extern std::string commad_target;
extern bool command_has_argument;
extern std::string message;

void analyze_command_name() {

    message.clear();

    if (commad_name.compare("Empty") == 0) {
        command_has_argument = false;
        message = txt_invalid_command_empty_space ();
    }
    else {
        if (commad_name.compare("help") == 0) {
            command_has_argument = false;
            message = txt_help ();
        }
        else if (commad_name.compare("setlang") == 0) {
            command_has_argument = true;
        }
        else {
            command_has_argument = false;
            message = txt_invalid_command (commad_name);
        }
    }
}

void analyze_command_argument() {
    if (command_has_argument) {
        
        if (commad_name.compare("setlang") == 0) {
            if (commad_target.compare("en") != 0 &&
            commad_target.compare("ptbr") != 0 &&
            commad_target.compare("es") != 0)
            {
                message = txt_invalid_argument (commad_target);
            }
            else {
                game_language = commad_target;
                message = txt_setlang (commad_target);
            }
        }

    }

    // Reset the variable
    command_has_argument = false;

}

void get_commands_name () {

    // Clear any garbage from the string
    commad_name.clear();

    // First check to see if at least there is anything written in the command
    if (raw_command[0] == ' ' || raw_command[0] == '\0') {
        commad_name = "Empty";
    }
    else {
        for (int i = 0; i < 256; i++) {

            if (raw_command[i] != ' ' && raw_command[i] != '\0') {
                commad_name += raw_command[i];
            }
            else {
                break;
            }
        }
    }

}

void get_commands_target () {

    int counter = 0;

    if (command_has_argument == false) {
        // Do nothing
    }
    else {
        // Clear any garbage from the string
        commad_target.clear();

        // Find out where the target starts
        for (int i = 0; i < 300; i++) {
            if (raw_command[i] == ' ' && (raw_command[i + 1] != ' ' || raw_command[i + 1] != '\0')) {
                counter = i + 1;
                break;
            }
            else if (raw_command[i] == '\0') {
                commad_target = "Invalid";
                break;
            }
        }

        // The target name is copied
        if (commad_target.compare("Invalid") != 0) {
            for (int i = counter; i < 512; i++) {

                if (raw_command[i] != ' ' && raw_command[i] != '\0') {
                    commad_target += raw_command[i];
                }
                else {
                    break;
                }
            }
        }
        
    }

}

void init_command() {
    
}