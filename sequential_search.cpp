#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[5];
    string key;
    int i;

    cout << "Enter 5 names:" << endl;

    for (i = 0; i < 5; i++)
    {
        cin >> name[i];
    }

    cout << "Enter name to search: ";
    cin >> key;

    for (i = 0; i < 5; i++)
    {
        if (name[i] == key)
        {
            cout << key << " found at position " << i + 1 << endl;
            return 0;
        }
    }

    cout << key << " not found." << endl;

    return 0;
}

