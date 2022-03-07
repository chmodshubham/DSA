#include <bits/stdc++.h>
using namespace std;
// same as allocate_minimum_pages problem, check for a better explanation
// this is an another method to solve the problem

int find_feasible(int board[], int n, int limit)
{
    int time_sum_for_a_painter = 0;
    int no_of_painters_required = 1;
    for (int i = 0; i < n; i++)
    {
        time_sum_for_a_painter += board[i];
        if (time_sum_for_a_painter > limit)
        {
            time_sum_for_a_painter = board[i];
            no_of_painters_required++;
        }
    }
    return no_of_painters_required;
}

int painters_partition(int board[], int n, int m)
{
    if (m > n)
        return -1;

    int total_length_sum = 0;
    int max_board_size = 0;
    for (int i = 0; i < n; i++)
    {
        max_board_size = max(max_board_size, board[i]);
        total_length_sum += board[i];
    }

    int start = max_board_size, end = total_length_sum;
    while (start < end)
    {
        int mid = (start + end) / 2;

        int no_of_painters = find_feasible(board, n, mid);
        if (no_of_painters <= m)
            end = mid;

        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    int board[] = {10, 20, 30, 40};
    int no_of_boards = 4;
    int no_of_painters = 2;

    cout << painters_partition(board, no_of_boards, no_of_painters) << endl;
    return 0;
}