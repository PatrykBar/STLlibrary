#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(): name(""), age(0)
    {

    }

    Person(string name, int age): name(name), age(age)
    {

    }

    void print()
    {
        cout << name << ": " << age << endl;
    }

};

int main()
{

    map<int, Person> people; // Map sorting for us data by the index in square brackets

    people[5] = Person("Patryk", 40);
    people[550] = Person("Judyta", 50);
    people[66] = Person("Tyrion", 666);

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
    {
        cout << it->first << ": " << flush;
        it->second.print();
    }

    return 0;
}
