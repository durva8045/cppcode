/*array of object*/



#include<iostream>
using namespace std;
class emp{
int id;
int salary;
public:
void setid()
{
    salary=100;
    cout<<"enter id of employee";
    cin>>id;
}
void getid()
{
    cout<<"the id of this em is"<<id<<endl;
}

};




int main()
{
emp e[4];
for(int i=0;i<4 ;i++)
{
    e[i].setid();
    e[i].getid();
}
}





