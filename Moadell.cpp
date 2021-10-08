#include <iostream>
using namespace std;

int main()
{
    string firstname, lastname;
    float a, b, c, avg;
    cout << "Enter your first & lastname: ";
    cin >> firstname >> lastname;
    cout << "Enter your 3 marks: ";
    cin >> a >> b >> c;
    avg = (a + b + c) /3;

    if (avg >= 17)
        cout << "Great\n";
    else if (avg < 17 && avg >= 12)
        cout << "Normal\n";
    else if (avg < 12)
        cout << "Fail\n";
    return 0;
}