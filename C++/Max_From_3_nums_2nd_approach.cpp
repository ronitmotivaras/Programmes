#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 3 Numbers : ";
    cin >> a >> b >> c;

    if (a>b && a>c)
    {
        cout << "A is Big";
    }
    else if (b>c)
    {
        cout<<"B is Big";
    }
    else
    {
        cout<<"C is Big";
    }
    return 0;
}