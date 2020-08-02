[Day 3 Intro to Conditional Statements](https://www.hackerrank.com/challenges/30-conditional-statements/problem)

My Solution

```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (N % 2 == 1)
    {
        cout << "Weird";
    }
    else
    {
        if (N > 20)
        {
            cout << "Not Weird";
        }
        else if (N > 6)
        {
            cout << "Weird";
        }
        else
        {
            cout << "Not Weird";
        }
    }

    return 0;
}

```