/*


------------------------new and delete keyword------------------


*/



#include <iostream>
using namespace std;
int main()
{
    //basic example
    int a=5;
    int *p=&a;
    cout<<"the value of a is"<<*p<<endl;

    //new  operator int or float
    int *ptr=new int(3);
    cout<<"the value of p is"<<*ptr<<endl;


    int *arr= new int[3];//specific arr not a
    arr[0]=23;
    *(arr+1)=24;
    arr[2]=45;
     delete[] arr;
    cout<<"the value of a[0]"<<arr[0]<<endl;
     cout<<"the value of a[1]"<<arr[1]<<endl;
      cout<<"the value of a[2]"<<arr[2]<<endl;
      //delete operator
     
      delete ptr;
    return 0;
}