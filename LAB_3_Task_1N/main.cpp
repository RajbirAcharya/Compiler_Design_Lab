//22-48080-2 Task-1 Completed

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("input.txt");
    string line;

    while (getline(file, line)) {
        int i = 0;
        while (i < line.length()) {
            char c = line[i];
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                string word = "";
                while (i < line.length() && ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))) {
                    word = word + line[i];
                    i = i + 1;
                }

                cout << word << " is an Identifier" << endl;
            }
            else {
                if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=') {
                    cout << c << " is an Operator" << endl;
                }
                else if (c == '.' || c == ',' || c == '!' || c == '?' || c == ';' || c == ':' || c == '(' || c == ')') {
                    cout << c << " is a Punctuation" << endl;
                }
                else if (c == ' ' || c == '\t') {
                }
                else {
                    cout << c << " is Other character" << endl;
                }

                i = i + 1;
            }
        }
    }

    file.close();
    return 0;
}
