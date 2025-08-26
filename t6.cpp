/*
properties of friend 
1. not in scope of class
2. can be invoved without the help of object
3.usually contains  the objects as arguments
4. can be declared inside public or private

*/


#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void read(int x,int y)
{
a=x;
b=y;
}
void print()
{
    cout<<"complex no are "<< a<<" + "<<b<<" i "<<endl;
}

friend complex add(complex c1,complex c2);
};

complex add(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}


int main()
{
    complex c1,c2,c3;
    c1.read(2,4);
    c1.print();

c2.read(3,7);
c2.print();

c3 =add(c1,c2);
c3.print();


return 0;
}