//22-48080-2 12:34 PM

#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Enter the equation: ";
    cin >> input;

    int operatorCount = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            operatorCount++;
            cout << "operator" << operatorCount << ": " << ch << endl;
        }
    }

    if (operatorCount == 0) {
        cout << "No operators found." << endl;
    }

    return 0;
}
