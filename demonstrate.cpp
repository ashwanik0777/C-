#include <iostream>
using namespace std;
class Baseclass
{
public:
    virtual void print() = 0;
};
class Derivedclass1 : public Baseclass
{
public:
    void print() override
    {
        cout << "Derived class 1 : Hello From Derived class 1" << endl;
    }
};
class Derivedclass2 : public Baseclass
{
public:
    void print() override
    {
        cout << "Derived class 2 : Hello From Derived class 2" << endl;
    }
};
int main()
{
    Baseclass *baseobject1 = new Derivedclass1();
    Baseclass *baseobject2 = new Derivedclass2();

    baseobject1->print();
    baseobject2->print();

    delete baseobject1;
    delete baseobject2;

    return 0;
}