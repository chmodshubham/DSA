#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEvaluation(string s)
{
    stack<int> stk;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stk.push(s[i] - '0');
        }

        else
        {
            int operator1 = stk.top();
            stk.pop();
            int operator2 = stk.top();
            stk.pop();

            switch (s[i])
            {
            case '+':
                stk.push(operator1 + operator2);
                break;
            case '-':
                stk.push(operator1 - operator2);
                break;
            case '*':
                stk.push(operator1 * operator2);
                break;
            case '/':
                stk.push(operator1 / operator2);
                break;
            case '^':
                stk.push(pow(operator1, operator2));
                break;
            }
        }
    }

    return stk.top();
}

int main()
{
    cout << prefixEvaluation("-+7*45+20") << endl;
    return 0;
}