#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;

    string name;
    long number;
    map<string, long> row_data;

    cin >> n;
    cin.ignore();

    for (long i = 0; i < n; i++)
    {
        cin >> name;
        cin >> number;

        // insert to map
        row_data[name] = number;
    }

    while (cin >> name)
    {
        if (row_data.find(name) != row_data.end())
        {
            cout << name << "=" << row_data.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
