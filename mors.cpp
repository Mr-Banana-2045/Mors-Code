#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<char, std::string> map = {
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."}, {'8', "---.."}, {'9', "----."}, {'0', "-----"},
   };
    printf("\033[92m Mors Code\033[00m\n\n");
    std::string input;
    std::cout << "input : ";
    std::getline(std::cin, input);

    std::cout << "output : ";
    std::string output;
    for (char moz : input) {
        moz = tolower(moz);
        if (moz != ' ') {
            output += moz;
        if (map.find(moz) != map.end()) {
            std::cout << map[moz] << "|";
        } else {
            std::cout << moz;
        }
    }
  }
    std::cout << std::endl;
}
