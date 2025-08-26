/*
1.default visibility is private.
2. public visibility mode: public member of the base class will becomes public member of derived class.
3. private visibility mode: public member of the base class will becomes private member of the derived class.
4. private member are never inherite>
*/

#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;
    employee(int i)
    {
        id = i;
        salary = 345.0;
    }
    employee(){}
};

class programmer : public employee
{
public:
    int languagecode;
    programmer(int i)
    {
        id = i;
        languagecode = 56;
    }

    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{

    employee e1(3), e2(4);
    cout << e1.salary << endl;
    cout << e2.salary << endl;
    programmer p(2);
    cout<<p.languagecode<<endl;
    cout<<p.salary<<endl;
    p.getdata();
    


    return 0;
}