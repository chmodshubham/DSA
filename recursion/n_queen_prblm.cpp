#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **a, int i, int j, int n)
{
    for (int row = 0; row < i; row++) // check for the straight column
    {
        if (a[row][j] == 1)
        {
            return false;
        }
    }

    int row = i;
    int col = j;
    while (row >= 0 && col >= 0) // check for the left diagonal
    {
        if (a[row][col] == 1)
            return false;

        row--;
        col--;
    }

    row = i;
    col = j;
    while (row >= 0 && col < n) // check for the right diagonal
    {
        if (a[row][col] == 1)
            return false;

        row--;
        col++;
    }
    return true;
}

bool queen(int **a, int i, int n)
{
    if (i >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(a, i, col, n))
        {
            a[i][col] = 1;

            if (queen(a, i + 1, n))
            {
                return true;
            }
            a[i][col] = 0; // backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    queen(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}