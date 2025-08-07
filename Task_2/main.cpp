//22-48080-2

#include <iostream>
#include <fstream>

using namespace std;

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isDelimiter(char ch) {
    char delimiters[] = {';', ',', '(', ')', '{', '}', '[', ']', ' ', '\n', '\t'};
    for (int i = 0; i < sizeof(delimiters); ++i) {
        if (ch == delimiters[i]) return true;
    }
    return false;
}

int main() {
    ifstream file("program.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    string input = "";

    while (file.get(ch)) {
        if ((ch >= '0' && ch <= '9') || ch == '.' || ch == '-') {
            input += ch;
        } else if (isDelimiter(ch)) {
            if (input != "") {
                int dotCount = 0;
                bool validNumber = true;

                for (int i = 0; i < input.length(); i++) {
                    if (input[i] == '.') {
                        dotCount++;
                        if (dotCount > 1) {
                            validNumber = false;
                            break;
                        }
                    } else if (!(input[i] == '-' && i == 0) && !(input[i] >= '0' && input[i] <= '9')) {
                        validNumber = false;
                        break;
                    }
                }

                if (validNumber) {
                    if (dotCount == 0) {
                        cout << "Integer: " << input << endl;
                    } else {
                        cout << "Real Number: " << input << endl;
                    }
                }

                input = "";
            }

            if (ch != ' ' && ch != '\n' && ch != '\t') {
                cout << "Delimiter: " << ch << endl;
            }
        } else {
            if (input != "") input = "";
        }
    }

    file.close();
    return 0;
}
