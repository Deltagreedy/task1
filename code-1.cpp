#include <bits/stdc++.h>
using namespace std;

int mod(double diff)
{
    if (diff < 0)
    {
        return -diff;
    }
    else
        return diff;
}

int main()
{
    int ugly[5][5];
    double diffa, diffb;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> ugly[i][j];
            if (ugly[i][j] == 1)
            {
                diffa = i + 1 - 3;
                diffb = j + 1 - 3;
            }
        }
    }

    cout << mod(diffa) + mod(diffb);

    return 0;
}