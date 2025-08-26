#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display()
    {
        cout << "complex no is" << a << "+i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(2, 3);
    c1.display();
    c2.setdata(3, 4);
    c2.display();
    c3.setdatabysum(c1, c2);
    c3.display();

    return 0;
}