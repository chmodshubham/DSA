#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> pq_max;
priority_queue<int, vector<int>, greater<int>> pq_min;

void insert(int x)
{
    if (pq_max.size() == pq_min.size())
    {
        if (pq_max.empty())
        {
            pq_max.push(x);
            return;
        }

        if (x < pq_max.top())
        {
            pq_max.push(x);
        }
        else
        {
            pq_min.push(x);
        }
    }
    else if (pq_max.size() > pq_min.size())
    {
        if (x >= pq_max.top())
            pq_min.push(x);
        else
        {
            int temp = pq_max.top();
            pq_max.pop();
            pq_min.push(temp);
            pq_max.push(x);
        }
    }
    else
    {
        if (x <= pq_min.top())
        {
            pq_max.push(x);
        }
        else
        {
            int temp = pq_min.top();
            pq_min.pop();
            pq_max.push(temp);
            pq_min.push(x);
        }
    }
}

double find_median()
{
    if (pq_max.size() == pq_min.size())
        return (pq_max.top() + pq_min.top()) / 2.0;

    else if (pq_max.size() > pq_min.size())
        return pq_max.top();

    else
        return pq_min.top();
}

signed int main()
{
    insert(10);
    cout << find_median() << endl;
    insert(15);
    cout << find_median() << endl;
    insert(21);
    cout << find_median() << endl;
    insert(30);
    cout << find_median() << endl;
    insert(18);
    cout << find_median() << endl;
    insert(19);
    cout << find_median() << endl;
}