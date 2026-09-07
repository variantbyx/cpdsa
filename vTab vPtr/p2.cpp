#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog barks\n";
    }
};

int main()
{
    Animal *a = new Dog();
    a->speak();
    return 0;
}