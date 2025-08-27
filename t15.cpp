/*

-------------------initialization list in constructor ----------------
syntax for initialization

constructor(argument-list):initialization-section
{
assignment+other code;
}
*/




#include<iostream>
using namespace std;

class test{
int a;
int b;
public:
//test(int i,int j):a(i),b(j)
//test(int i,int j):a(i),b(j+i)
//test(int i,int j):a(i),b(2*j)
//test(int i,int j):a(i),b(a+j)
//test(int i,int j):b(j),a(i+b) garbage value will print in a because a is initialize first
{
    cout<<"constructor is executed"<<endl;
    cout<<"the value of a:"<<a<<endl;
    cout<<"the value b:"<<b<<endl;
}



};

int main()
{

    test t(3,4);
    return 0;
}