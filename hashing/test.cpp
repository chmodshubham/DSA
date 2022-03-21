#include<bits/stdc++.h>
using namespace std;

#define cor first  //correct
#define incor second  // incorrect

int main()
{
    int n = 1;
    // cin >> n;

    vector<pair<string, string>> vec(n);
    for (int i = 0;i < n;i++)
        cin >> vec[i].cor >> vec[i].incor;

    for (int i = 0;i < n;i++)
    {
        if (vec[i].cor.size() == vec[i].incor.size())
        {
            if (vec[i].cor == vec[i].incor)
                cout << "0\n";
            else
                cout << "IMPOSSIBLE\n";
        }
        else
        {
            int j = 0, k = 0;
            int count = 0;
            while (j < vec[i].cor.size() || k < vec[i].incor.size())
            {
                if (vec[i].cor[j] == vec[i].incor[k])
                    j++;
                else
                    count++;

                k++;
            }
            cout << count << endl;

        }
    }

}