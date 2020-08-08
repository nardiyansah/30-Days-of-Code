#include <bits/stdc++.h>

using namespace std;

int searchMax(vector<vector<int>> arr)
{
    int max = -99999;
    int temp = 0;

    // pivot
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            temp = arr[y][x] + arr[y][x + 1] + arr[y][x + 2] + arr[y + 1][x + 1] + arr[y + 2][x] + arr[y + 2][x + 1] + arr[y + 2][x + 2];

            if (max < temp)
            {
                max = temp;
            }

            temp = 0;
        }
    }

    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int maxValue = searchMax(arr);

    cout << maxValue;

    return 0;
}
