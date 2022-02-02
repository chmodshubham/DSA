#include <bits/stdc++.h>
using namespace std;
// redundant means extra and parentheses means braces
// extra braces with no use

bool check_redundancy(string str)
{
    stack<char> stk;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            stk.push(str[i]);

        // else if (str[i] > 'a' && str[i] < 'z' || str[i] > 'A' && str[i] < 'Z')
        // {
        //     continue;
        // }

        else if (str[i] == ')')
        {
            if (stk.top() == '(')
            {
                return true;
            }

            else
            {
                while (stk.top() != '(') // to pop operators
                {
                    stk.pop();
                }
                stk.pop();

                if (stk.empty())
                    return false;
            }
        }

        else // for checking operators ,mainly +,-,/,* that whether it is equal to stk.top() or not
        {
            stk.push(str[i]);
        }
    }
    return true;
}

int main()
{
    cout << check_redundancy("((a+b))") << endl;
    cout << check_redundancy("(a+(a+b))") << endl;
    return 0;
}