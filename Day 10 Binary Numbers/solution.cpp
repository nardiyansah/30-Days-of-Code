#include <bits/stdc++.h>

using namespace std;

string convertToBiner(int n)
{
    string biner = "";

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            biner.insert(biner.begin(), '0');
        }
        else
        {
            biner.insert(biner.begin(), '1');
        }

        n >>= 1;
    }

    return biner;
}

int countConsecutive(string biner)
{
    int max = 0;
    int temp = 0;

    for (int i = 0; i < biner.length(); i++)
    {
        if (biner[i] == '1')
        {
            temp += 1;
        }

        if (temp > max)
        {
            max = temp;
        }

        if (biner[i] == '0')
            temp = 0;
    }

    return max;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string biner = convertToBiner(n);

    int consecutive = countConsecutive(biner);

    cout << consecutive;
    return 0;
}
