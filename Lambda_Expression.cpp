#include <iostream>

using namespace std;

template<class t>
t fun(t x , t y){
    return x+y;
}



int main(){

    // [](){cout<<"Hello World";}();
    // cout<<"\n";
    // [](int x,int y)->auto{cout<<"Sum : "<<x+y;}(23,56);

    auto f=[&](int x,int y){return x+y;}(23,45);
    cout<<f;

//    cout<<"sum is : "<< fun(34.4554f,54.45f);



    return 0;
}

