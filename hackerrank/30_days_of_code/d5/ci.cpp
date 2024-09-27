#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    Person(int initialAge)
    {
        if (initialAge < 0)
        {
            age = 0;
            cout << "Age is not valid, setting age to 0." << endl;
        }
        else
        {
            age = initialAge;
        }
    }

    void yearPasses()
    {
        age++;
    }

    void amIOld()
    {
        if (age < 13)
        {
            cout << "You are young." << endl;
        }
        else if (age < 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            cout << "You are old." << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ia;
        cin >> ia;

        Person p = Person(ia);
        p.amIOld();
        for (int i = 0; i < 3; i++)
        {
            p.yearPasses();
        }

        p.amIOld();
        cout << endl;
        cout.flush();
    }
}