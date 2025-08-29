/*
ponter to object and arrow operation

*/
#include<iostream>
using namespace std;
class complex{
int img,real;
public:
void setdata(int a,int b)
{
    img=b;
    real=a;
}

void getdata()
{
    cout<<"the img part is"<<img<<endl;
     cout<<"the real part is"<<real<<endl;
}
};


int main()
{

    //complex c;
    //complex *p=&c;
    complex *p=new complex;//to create object
   // (*p).setdata(2,4); is exactly same as
   p->setdata(2,4);
//(*p).getdata(); is as good as
p->getdata();


//array of objects
complex *p1=new complex[3];
p1->setdata(3,4);
p1->getdata();

return 0;
}