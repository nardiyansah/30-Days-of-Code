#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string S;
        cin >> S;
        for (int even = 0; even < S.length(); even += 2)
        {
            cout << S[even];
        }
        cout << " ";
        for (int odd = 1; odd < S.length(); odd += 2)
        {
            cout << S[odd];
        }
        cout << endl;
    }
    return 0;
}
