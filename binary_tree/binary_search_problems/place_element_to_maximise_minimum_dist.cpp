#include <bits/stdc++.h>
using namespace std;

bool is_feasible(int arr[], int mid, int n, int k)
{
    int pos = arr[0]; // storing first smallest element of the array
    // for further subtraction from higher value to this smallest element, always give u the largest distance which cannot be obtained from any other 2 elements subtraction
    int elements = 1; // this shows we have selected the 1st element 'pos' as 1 element for k size group

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid) // check for the minimum distance between 2 elements greater than or equal to mid or not
        {
            pos = arr[i];
            elements++;        //  we had choosen the 2nd element and now move on to check for the 3rd one
            if (elements == k) // check if the no of elements taken are equal to k or not so that we can return from the function it true
            {
                return true;
            }
        }
    }
    return false;
}

int largest_minimum_distance(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int result = -1; // maximum distance is stored in the result, for which any 'k' elements are taken in a group, keeping the largest minimum distance between them in mind
    int start = 0;
    int end = arr[n - 1];
    // start and end are specified in order to find the largest minimum distance
    // further on, this mid value is not considered as the position, instead as the maximum distance between 2 given positions(i.e. elements in the array) which is the minimum creteria for the selection of 2 elements.
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (is_feasible(arr, mid, n, k)) // check whether any k elements can be paired in such way that the minimum distance between the elements are greater than or equal to 'mid' or not
        {
            result = max(result, mid);
            start = mid + 1; // if, if condition satisfied, then it checks for higher value of mid, so that the k elements group with distance between them greater than or equal to mid can be added in the result if exists
        }
        else
        {
            end = mid; // if didn't find any group of k elements with minimum distance of 'mid' in between them, then we check for the lower value of mid
        }
    }
    return result;
}

int main()
{
    int arr[] = {5, 2, 7, 11, 1, 12}; // treat elements as the positions and assume that they are placed in a straight line

    cout << largest_minimum_distance(arr, 6, 3);
    return 0;
}