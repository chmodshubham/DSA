#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int postEvaluation(string s)
{
    stack<int> stk;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stk.push(s[i] - '0');
        }
        else
        {
            int opr2 = stk.top();
            stk.pop();
            int opr1 = stk.top();
            stk.pop();

            switch (s[i])
            {
            case '+':
                stk.push(opr1 + opr2);
                break;
            case '-':
                stk.push(opr1 - opr2);
                break;
            case '*':
                stk.push(opr1 * opr2);
                break;
            case '/':
                stk.push(opr1 / opr2);
                break;
            case '^':
                stk.push(pow(opr1, opr2));
                break;
            }
        }
    }

    return stk.top();
}

int main()
{
    cout << postEvaluation("46+2/5*7+") << endl;
    return 0;
}