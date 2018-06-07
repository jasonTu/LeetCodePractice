#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void foo()
    {
        cout << "foo from parent" << endl;
    }
    void fool()
    {
        cout << "fool from parent" << endl;
    }
};

class Son: public Parent
{
    virtual void foo()
    {
        cout << "foo from son" << endl;
    }
    void fool()
    {
        cout << "fool from son" << endl;
    }
};

int main(void)
{
    Parent *p = new Son();
    p->foo();
    p->fool();
    return 0;
}
