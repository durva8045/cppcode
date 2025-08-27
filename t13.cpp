/*virtual base class

__________student_______
|test             sport  |
|                        |
|___________result_______|


*/

#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setnumber(int n)
    {
        rollno = n;
    }
    void print()
    {
        cout << "roll no is" << rollno << endl;
    }
};

class test : virtual public student
{

protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks()
    {
        cout << "your result is" << endl
             << "maths" << maths << endl
             << "physics" << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void setscore(float s)
    {
        score = s;
    }

    void printscore()
    {
        cout << "your score is" << endl
             << score << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print();
        printmarks();
        printscore();
        cout << "your total score is" << total << endl;
    }
};

int main()
{
    result durva;
    durva.setnumber(123);
    durva.setmarks(23.4, 45.6);
    durva.setscore(34);
    durva.display();
    return 0;
}