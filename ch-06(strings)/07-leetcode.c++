#include <iostream>
#include <cstring> //used to operate with string like strchr
using namespace std;
int main()
{
    char name[100];
// char vowel[5] = {'a' , 'e' ,'i' ,'o' ,'u'};
    cout<<"to remove variables in your name\n";
    cout << "enter your name\n";
    cin.getline(name,100);
    int i = 0;
    while (name[i] != '\0')
    {
// if (name[i] != 'a' && name[i] != 'i' && name[i] != 'o' && name[i] != 'e' && name[i] != 'u')
        if (!strchr("aeiou", name[i])) // strchr use to check array values
        {
            cout << name[i] << "\n";

        }
        i++;
    }

    return 0;
}

