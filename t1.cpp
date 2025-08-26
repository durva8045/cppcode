/*

deposite of amount in bank

*/



#include<iostream>
using namespace std;
class bankdeposite{
int principal;
int years;
float interestrate;
float returnvalue;
public:
bankdeposite(){}
bankdeposite(int p,int y,float r);
bankdeposite(int p,int y,int r);
void show();


};
bankdeposite::bankdeposite(int p,int y,float r)
{
principal=p;
years=y;
interestrate=r;

returnvalue=principal;
for(int i=0;i<y;i++)
{
returnvalue=returnvalue*(1+interestrate);

}
}



bankdeposite::bankdeposite(int p,int y,int  r)
{

    principal=p;
years=y;
interestrate=float(r)/100;

returnvalue=principal;
for(int i=0;i<y;i++)
{
returnvalue=returnvalue*(1+interestrate);

}
}

 void bankdeposite::show(){

    cout<<"principal amount was"<<principal<<endl<<"return value after"<<years<<"is"<<returnvalue<<endl;
 }


int main()
{
bankdeposite b1,b2,b3;
int p,y;
float r;
int R;


cout<<"enter the value of p,y,r";
cin>>p>>y>>r;
b1=bankdeposite(p,y,r);
b1.show();
cout<<"ente rthe value p,y,R"<<endl;
cin>>p>>y>>R;
b2=bankdeposite(p,y,R);
b2.show();

}