#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Please Enter the size of the triangle side: \n";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
        cout << "Yeah , we have triangle !!!\n";
    else
    {
        cout << "we dont have triangle !!!\n";
    }
    return 0;

}