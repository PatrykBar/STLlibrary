#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Test
{
    int id;
    string name;
public:
    Test (int id, string name): id(id), name(name) {}

    void print()
    {
        cout << id << ": " << name << endl;
    }

    /*bool operator<(const Test& other) const
    {
        return name < other.name;
    }*/
    friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b)
{
    return a.name < b.name ;
}

int main()
{
    vector<Test> tests;

    tests.push_back(Test(5, "Milenka"));
    tests.push_back(Test(10, "Ola"));
    tests.push_back(Test(7, "Judyta"));
    tests.push_back(Test(3, "Wiktoria"));

    std::sort(tests.begin(), tests.end(), comp);
    //sort(tests.begin(), tests.begin() + 3, comp);

    for (int i=0; i<tests.size(); i++)
    {
        tests[i].print();
    }

    return 0;
}
