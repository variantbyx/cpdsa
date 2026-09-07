#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base show\n";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived show\n";
    }
};

int main()
{
    Base *obj = new Derived();
    obj->show();
    return 0;
}