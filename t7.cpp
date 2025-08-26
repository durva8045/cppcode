/*
properties of friend
1. not in scope of class
2. can be invoved without the help of object
3.usually contains  the objects as arguments
4. can be declared inside public or private

*/

#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumrealcomplex(complex, complex);
};

class complex
{
    int a, b;

    //friend int calculator::sumrealcomplex(complex o1, complex o2);
    friend class calculator;

public:
    void read(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "complex no are " << a << " + " << b << " i " << endl;
    }
};

int calculator::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int main()
{
    complex c1, c2;
    c1.read(2, 4);
    c1.print();

    c2.read(3, 7);
    c2.print();
    calculator c;
    int res = c.sumrealcomplex(c1, c2);
    cout << "the sum of real and img part is" << res << endl;

    return 0;
}