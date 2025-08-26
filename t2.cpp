/*
when no copy constructor is found ,complier supplies its own copy constructor
*/


#include<iostream>
using namespace std;
class number{
int a;
public:
number(){a=0;}
number(int num){a=num;}
/*number(number &obj)
{
    cout<<"copy cons";
    a=obj.a;
}
*/
void display()
{
    cout<<"the number for the object is:"<<a<<endl;
}
};




int main()
{
    number x,y,z(34),z2;
x.display();
y.display();
z.display();
 number z1(x);//copy constructor invoked
 z1.display();
z2=z;//copy constructor not called
number z3=z;//copy constructor invoked
z3.display();
}