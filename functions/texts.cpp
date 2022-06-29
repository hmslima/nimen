#include <string>

extern std::string game_language;

using std::string;

string txt_invalid_command_empty_space () {

    if (game_language.compare("ptbr") == 0) {
        return "<b>Comando inválido:</b> espaço vazio";
    }
    else if (game_language.compare("es") == 0) {
        return "<b>Orden no válida:</b> espacio vacío";
    }
    else {
        return "<b>Invalid command:</b> empty space";
    }
}

string txt_invalid_command (string bad_command) {

    if (game_language.compare("ptbr") == 0) {
        return "<b>Comando inválido:</b> você escreveu \"" + bad_command + "\"";
    }
    else if (game_language.compare("es") == 0) {
        return "<b>Orden no válida:</b> has escrito \"" + bad_command + "\"";
    }
    else {
        return "<b>Invalid command:</b> you have written \"" + bad_command + "\"";
    }
}

string txt_invalid_argument (string bad_argument) {

    if (game_language.compare("ptbr") == 0) {
        return "<b>Argumento inválido:</b> você escreveu \"" + bad_argument + "\"";
    }
    else if (game_language.compare("es") == 0) {
        return "<b>Argumento no válido:</b> has escrito \"" + bad_argument + "\"";
    }
    else {
        return "<b>Invalid argument:</b> you have written \"" + bad_argument + "\"";
    }
}

string txt_help () {

    if (game_language.compare("ptbr") == 0) {
        return "<h2>Eis a lista de comandos</h2> \
                <ul> \
                    <li><b>start</b> – Iniciar un novo jogo</li> \
                    <li><b>setlang []</b> – Mudar o idioma do jogo \
                        <ul> \
                            <li><b>setlang en</b> – Mudar para o inglês</li> \
                            <li><b>setlang es</b> – Mudar para o espanhol</li> \
                        </ul> \
                        </li> \
                        <li><b>clear</b> – Limpar a tela</li> \
                </ul>";;
    }
    else if (game_language.compare("es") == 0) {
        return "<h2>Aquí está la lista de comandos</h2> \
                <ul> \
                    <li><b>start</b> – Iniciar un nuevo juego</li> \
                    <li><b>setlang []</b> – Cambiar el idioma del juego \
                        <ul> \
                            <li><b>setlang en</b> – Cambiar a inglés</li> \
                            <li><b>setlang ptbr</b> – Cambiar a portugués brasileño</li> \
                        </ul> \
                        </li> \
                        <li><b>clear</b> – Limpiar la pantalla</li> \
                </ul>";
    }
    else {
        return "<h2>Here is the list of commands</h2>\
                <ul> \
                    <li><b>start</b> – Start a new game</li> \
                    <li><b>setlang []</b> – Change the game\'s language \
                        <ul> \
                            <li><b>setlang es</b> – Change to Spanish</li> \
                            <li><b>setlang ptbr</b> – Change to Brazilian Portuguese</li> \
                        </ul> \
                        </li> \
                        <li><b>clear</b> – Clear the screen</li> \
                </ul>";
    }
}

string txt_setlang (string lang) {
    if (game_language.compare("ptbr") == 0) {
        return "O idioma do jogo foi alterado para [" + lang + "]";
    }
    else if (game_language.compare("es") == 0) {
        return "El idioma del juego ha cambiado al [" + lang + "]";
    }
    else {
        return "The game\'s language was altered to [" + lang + "]";
    }
}
