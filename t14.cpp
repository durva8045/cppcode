/*---------------------constructor in derived class------------
case1:
class b:public a{
//order of execution of constructor ---first a
};

case2:

class a:public b,public c{

//order of execution of constructor ---first b

};

case3:
class a:public b,virtual public c{

//order of execution of constructor ---first cthan b than a

};
*/

#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base 1 class constructor called" << endl;
    }
    void printdata1()
    {
        cout << "the value of data 1 is" << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base 2 class constructor called" << endl;
    }
    void printdata2()
    {
        cout << "the value of data 2 is" << data2 << endl;
    }
};

class derived : public base1, public base2//first base1 will called
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class  constructr called" << endl;
    }

    void printderived()
    {

        cout << "the value of derived1 is" << derived1 << endl;
        cout << "the value of derived2 is" << derived2 << endl;
    }
};

int main()
{
   
    derived durva(1, 2, 3, 4);
    durva.printdata1();
    durva.printdata2();
    durva.printderived();
     return 0;
}