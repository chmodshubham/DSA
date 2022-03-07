#include <bits/stdc++.h>
using namespace std;

bool is_possible(int arr[], int n, int m, int min)
{
    int no_of_students_required = 1; // let the no_of_students_required for the first selection of books within the (total_page_sum < min) be 1
    int sum_of_pages_per_student = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min) // if the choosen book pages exceed the min then it shows no further combination is possible
        {
            return false;
        }

        if (sum_of_pages_per_student + arr[i] > min) // if the previous selected books_page sum and current book page sum exceeds the min(minimum pages that can be hold) then it increase the students required
        {
            sum_of_pages_per_student = arr[i];
            no_of_students_required++;

            if (no_of_students_required > m)
                return false;
        }

        else // if the previous selected books_page sum and current book page sum does not exceed the min, then more books will be added to the current student holding the previous books
        {
            sum_of_pages_per_student += arr[i];
        }
    }
    return true;
}

int allocate_minimum_pages(int arr[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int total_pages_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_pages_sum += arr[i];
    }

    int start = 0, end = total_pages_sum;
    int answer = INT_MAX;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (is_possible(arr, n, m, mid))
        {
            answer = min(answer, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int arr[] = {12, 34, 67, 90}; // elements are no of pages in the different books
    int no_of_books = 4;          // equal to the arr size
    int no_of_students = 2;
    cout << allocate_minimum_pages(arr, no_of_books, no_of_students) << endl;
}