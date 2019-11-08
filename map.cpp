#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<string, int> ages;

    ages["Patryk"] = 50;
    ages["Judyta"] = 40;
    ages["Tyrion"] = 60;

    pair<string, int> addToMap("Hrapus", 10);
    ages.insert(addToMap);

    cout << ages["Hrapus"] << endl;

    if (ages.find("Judyta") != ages.end())
        cout << "Found Judysia" << endl;
    else
        cout << "Key not found :( " << endl;

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    for (map<string, int>::iterator it =ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
