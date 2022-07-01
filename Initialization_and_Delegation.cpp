#include <iostream>

using namespace std;

class test
{
    int x = 98;
    int y = 48; // initializing objects ! was not permitted earlier !!

public:
    test(int a, int b)
    {
        x = a;
        y = b;
    }

    test() : test(1, 1) {} // Delegation : using Another constructor !
};

int main()
{
test t(23,34);
    
    return 0;
}
