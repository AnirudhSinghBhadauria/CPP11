#include <iostream>

using namespace std;

int main()
{
    int x =10;
    int y =56;

    [&](int x,int y){cout<<"x : "<<x<<endl<<"y : "<<y;}(34,56);

    return 0;
}