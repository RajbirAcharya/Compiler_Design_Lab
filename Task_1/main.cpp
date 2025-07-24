//22-48080-2 12:06 PM completed.

#include <iostream>

using namespace std;

int main()
{
    char num[100];
    int i = 0;

    cout << "Enter your number : " << endl;
    cin >> num;

    if (num[0] == '-') {
        i = 1;
        if (num[1] == '\0') {
            cout << "Not numeric constant" << endl;
            return 0;
        }
    }
    while (num[i] != '\0') {
        if(num[i] < '0' || num[i] > '9') {
            cout << "Not numeric constant" << endl;
            return 0;
        }
        i++;
    }
    cout << "Numeric Constant" << endl;
    return 0;
}
