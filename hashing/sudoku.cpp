#include<bits/stdc++.h>
using namespace std;

#define ii int,int
#define vec vector
#define pii pair<int,int>
#define mpii map<int,int>
#define vch vector<char>
#define loop(i,a,b) for(int i=a;i<b;i++)

void helper(int r, int c, vec<vch>& a, map<pii, mpii>& mp, vec<mpii>& row, vec<mpii>& col)
{
    if (r == 9)
    {
        for (auto i : a)
        {
            for (auto j : i)
                cout << j << " ";

            cout << '\n';
        }
        cout << '\n';
        return;
    }

    if (c == 9)
    {
        helper(r + 1, 0, a, mp, row, col);
        return;
    }

    if (a[r][c] != '_')
    {
        helper(r, c + 1, a, mp, row, col);
        return;
    }

    for (int i = 1;i <= 9;i++)
    {
        int rw = r / 3, cl = c / 3;
        if (!mp[{rw, cl}][i] && !row[r][i] && !col[c][i])
        {
            mp[{rw, cl}][i] = 1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i + '0';
            helper(r, c + 1, a, mp, row, col);
            mp[{rw, cl}][i] = 0;
            row[r][i] = 0;
            col[c][i] = 0;
            a[r][c] = '_';

        }
    }
}

void solveSudoku(vec<vch>& a)
{
    map<pii, mpii> mp;
    vec<mpii> row(9);
    vec<mpii> col(9);

    loop(i, 0, 9)
    {
        loop(j, 0, 9)
        {
            if (a[i][j] != '_')
            {
                mp[{i / 3, j / 3}][a[i][j] - '0'] = 1;
                row[i][a[i][j] - '0'] = 1;
                col[j][a[i][j] - '0'] = 1;
            }
        }
    }

    helper(0, 0, a, mp, row, col);

}


int main()
{
    vec<vch> soduku = {

        {'5','3','_','_','7','_','_','_','_'},
        {'6','_','_','1','9','5','_','_','_'},
        {'_','9','8','_','_','_','_','6','_'},
        {'8','_','_','_','6','_','_','_','3'},
        {'4','_','_','8','_','3','_','_','1'},
        {'7','_','_','_','2','_','_','_','6'},
        {'_','6','_','_','_','_','2','8','_'},
        {'_','_','_','4','1','9','_','_','5'},
        {'_','_','_','_','8','_','_','7','9'}

    };

    solveSudoku(soduku);

}


// #include<iostream>
// using namespace std;
// int grid[9][9] =
// {
//     {9,0,0,3,0,2,6,0,0},
//     {4,0,7,0,0,8,9,1,3},
//     {6,0,3,1,0,0,0,5,4},
//     {0,3,0,0,8,0,4,7,0},
//     {0,0,8,0,3,0,1,6,0},
//     {0,0,4,2,0,0,5,0,0},
//     {8,7,1,9,0,6,0,4,5},
//     {3,0,0,0,5,0,0,0,0},
//     {2,0,0,4,0,0,0,0,1}
// };
// void printsudoku()
// {
//     for (int i = 0;i < 9;i++)
//     {
//         for (int j = 0;j < 9;j++)
//         {
//             cout << "\t" << grid[i][j];
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// bool isvalid(int row, int col, int num)
// {
//     int r, c;
//     for (c = 0;c < 9;c++)
//     {
//         if (grid[row][c] == num)
//         {
//             return false;
//         }
//     }
//     for (r = 0;r < 9;r++)
//     {
//         if (grid[r][col] == num)
//         {
//             return false;
//         }
//     }
//     row = row - (row % 3);
//     col = col - (col % 3);
//     for (int i = row;i < row + 3;i++)
//     {
//         for (int j = col;j < col + 3;j++)
//         {
//             if (grid[i][j] == num)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;

// }
// void solver()
// {
//     for (int i = 0;i < 9;i++)
//     {
//         for (int j = 0;j < 9;j++)
//         {
//             if (grid[i][j] == 0)
//             {
//                 for (int n = 1;n < 10;n++)
//                 {
//                     if (isvalid(i, j, n))
//                     {
//                         grid[i][j] = n;
//                         solver();
//                         grid[i][j] = 0;

//                     }

//                 }
//                 return;

//             }

//         }
//     }
//     cout << "The Solution: " << endl;
//     printsudoku();
// }


// int main()
// {

//     cout << "The Given Sudoku:" << endl;
//     printsudoku();

//     solver();

// }