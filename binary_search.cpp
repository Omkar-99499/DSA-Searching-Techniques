#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[5];
    string key;
    int low, high, mid;

    cout << "Enter 5 names in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> name[i];
    }

    cout << "Enter name to search: ";
    cin >> key;

    low = 0;
    high = 4;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (name[mid] == key)
        {
            cout << key << " found at position " << mid + 1 << endl;
            return 0;
        }
        else if (name[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << key << " not found." << endl;

    return 0;
}

