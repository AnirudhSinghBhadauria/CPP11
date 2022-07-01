#include <iostream>

using namespace std;

class rectangle
{
    float length;
    float breadth;

public:
    rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float area()
    {
        return length * breadth;
    }
    float parameter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{

    // unique_ptr<rectangle> ptr(new rectangle(34.5f, 45.6f));

    // cout << ptr->area(); // only one pointer can point to one object !!😇

    // unique_ptr<rectangle> ptr2;

    // ptr2 = move(ptr); // this moves control from one pointer to another





    // shared_ptr<rectangle> ptr(new rectangle(34.5f, 45.6f));

    // cout << ptr->area();
    // cout<<ptr.use_count(); // returns the number of pointers ponting at same object !!😇
    // shared_ptr<rectangle> ptr2;

    // ptr = ptr2;// 2 pointres pointitng at one object !!





    // weak_ptr<rectangle> ptr(new rectangle(34.5f, 45.6f));

    // cout << ptr->area();
    // weak_ptr<rectangle> ptr2;

    // ptr = ptr2; // 2 pointres pointitng at one object !!😇

    return 0;
}


