/*--------------array of object using pointer-----------------------
 */

#include <iostream>
using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id of item is" << id << endl;
        cout << "the price of item is" << price << endl;
    }
};

int main()
{
    int a,i;
    float b;
    int size = 2;

    shopitem *p = new shopitem[size];
    shopitem *p1 = p;

    for ( i = 0; i < size; i++)
    {
        cout << "enter id and price of item :" << i + 1 << endl;
        cin >> a >> b;
        // (*p).setdata(p,q);
        p->setdata(a, b);
        p++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "item number:" << i + 1;
        p->getdata();
        p1++;
    }
    return 0;
}