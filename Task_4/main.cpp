#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isValid = true;

    if(str.length() == 0){
        isValid = false;
    }
    else{
        char first = str[0];
        if (!((first >= 'A' && first <= 'Z') || (first >= 'a' && first <= 'z') || first == '_')) {
            isValid = false;
        }
        else{
            for(int i = 1; i < str.length(); i++){
                char ch = str[i];
                if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
                      (ch >= '0' && ch <= '9') || ch == '_')) {
                    isValid = false;
                    break;
                }
            }
        }
    }

    if (isValid) {
        cout << "Valid Identifier" << endl;
    }else {
        cout << "Not a Valid Identifier" << endl;
    }

    return 0;
}
