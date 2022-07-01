#include <iostream>

using namespace std;

int fun()
{
    return (3.456f + 4545 * 343.4554f / 454354.1 * 'a');
}

int main()
{

    auto x = 34 + 56 * 'a' + 34 + 56.56f;

    cout << x << endl;

    auto y = fun();
    cout << y << endl;

    return 0;
}