/* multiple inheritance*/

#include <iostream>
using namespace std;
class Base1
{
protected:
    int baseint1;

public:
    void setbase1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void setbase2(int a)
    {
        baseint2 = a;
    }
};

class derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base1" << baseint1 << endl;
        cout << "the value of base2" << baseint2 << endl;
        cout << "the sum of value is" << baseint1 + baseint2 << endl;
    }
};

int main()
{
    derived durva;
    durva.setbase1(34);
    durva.setbase2(45);
    durva.show();

    return 0;
}