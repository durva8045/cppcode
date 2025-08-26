/*destructor never takes an argument nor does it return value any */

#include <iostream>
using namespace std;
int count=0;
class num{

public:
num()
{
count++;
cout<<"constructor called"<<count<<endl;
}
~num(){
    cout<<"destructor is called "<<count<<endl;
    count--;
}

};




int main()
{
cout<<"we are in main function\n";
cout<<"creating first object n1\n";
num n1;{
cout<<"entering this block\n";
cout<<"creating two more object\n";
num n2,n3;
cout<<"exisiting a block\n";
}
cout<<"back to main\n";
}
