//22-48080-2 12:40 PM

#include <iostream>
using namespace std;

int main() {
    char input[100];
    int length = 0;

    cout << "Enter input: ";
    cin >> input;

    while (input[length] != '\0') {
        length++;
    }

    if (length >= 2 && input[0] == '/' && input[1] == '/') {
        cout << "Single line comment" << endl;
        return 0;
    }

    if (length >= 2 && input[0] == '/' && input[1] == '*') {

        if (length >= 4 && input[length - 2] == '*' && input[length - 1] == '/') {
            cout << "Multi-line comment" << endl;
            return 0;
        } else {
            cout << "Multi-line comment started but not ended" << endl;
            return 0;
        }
    }

    cout << "Not a comment" << endl;
    return 0;
}
