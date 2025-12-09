#include <iostream>
#include <string>

using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "This is parent";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "This is Child";
    }
};

void count()
{
    static int count = 0;
    count++;
    cout << "count : " << count << endl;
}

int main()
{
    // Child c1;
    // c1.show();
    count();
    count();
    count();

    return 0;
}