#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    int mathmark;
    int phymark;
    int chemmark;

public:
    student(string n, int r, int m, int p, int c)
    {
        name = n;
        roll = r;
        mathmark = m;
        phymark = p;
        chemmark = c;
    }
    int total()
    {
        return (mathmark + phymark + chemmark);
    }
    char garde() // if int is used then it will return numerical value of A B C
    {
        float average = total() / 3;
        if (average >= 60)
        {
            return 'A';
        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};
int main()
{
    string name;
    int roll, p, m, c;

    cout << "enter your name\n";
    cin >> name;
    cout << "enter your roll number\n";
    cin >> roll;
    cout << "enter physics maths and chemistry number\n";
    cin >> p >> m >> c;

    student a(name, roll, p, m, c);
    cout << "your total marks is\n"
         << a.total() << endl;
    cout << "your grade is\n"
         << a.garde();

    return 0;
}