/*ambiguity resolution*/

#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "hi" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "hello" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};



class b{

public:
void show()
{
    cout<<"hello ji"<<endl;
}


};

class d : public b{
    int a;
public:

void show()
{
    cout<<"how are u"<<endl;
}




};


int main()
{
    //ambuigity 1
   // base1 b1;
   // b1.greet();
   // base2 b2;
   // b2.greet();
    //derived d;
   // d.greet();
   // return 0;



   //ambuigity2
b b1;
d d1;
b1.show();
d1.show();



    
}