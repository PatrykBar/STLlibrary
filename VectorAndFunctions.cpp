#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    cout << strings[0] << endl;
    cout << strings.size() << endl;

    cout << "-------------------------------------------" << endl;

    //strings.pop_back();

    for (int i=0; i<strings.size(); i++)
        cout << strings[i] << endl;

    cout << "Size: " <<strings.size() << endl;

    cout << "-------------------------------------------" << endl;

    vector<string>::iterator it = strings.begin();

    cout << *it << endl;

    it++;

    cout << *it << endl;

    for (it; it !=strings.end(); it++)
        cout << *it << endl;


    cout << "-------------------------------------------" << endl;


    vector<string>::const_iterator ite = strings.begin();

    while (ite !=strings.end())
        cout << *ite++ << " " << endl;


    cout << "First element: " <<strings.front() << endl;
    cout << "Last element: " << strings.back() << endl;


    cout << "First element: " << *strings.begin() << endl;
    cout << "Last element: " << *--strings.end() << endl;

    cout << "-------------------------------------------" << endl;

    cout << "Last element: " << *strings.end() << endl; //.end() wskaŸnik do elementu za kontenerem, dlatego nie zawiera wartoœci

    cout << "-------------------------------------------" << endl;

    cout << "First element: " << *strings.cbegin() << endl; //c oznacza const
    cout << "Last element: " << *--strings.cend() << endl;

    cout << "-------------------------------------------" << endl;

    cout << "First element: " << *++strings.crbegin() << endl; //c oznacza const
    cout << "Last element: " << *++strings.crend() << endl; // r oznacza revers

    cout << "-------------------------------------------" << endl;

    cout << "Last element: " << *strings.crend() << endl; // wska¿nik do elementu prxzed pierwszym elementem

    cout << "-------------------------------------------" << endl;




    return 0;
}
