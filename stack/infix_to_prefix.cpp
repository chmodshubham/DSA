#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

string reverseOrder(string &s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        stk.push(s[i]);
    }
    s = "";
    while (!stk.empty())
    {
        s += stk.top();
        stk.pop();
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
            s[i] = '(';

        if (s[i] == '(')
            s[i] = ')';
    }

    return s;
}

string infixToPrefix(string s)
{
    reverseOrder(s);
    stack<char> stk;
    string res = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }

        else if (s[i] == '(')
        {
            stk.push(s[i]);
        }

        else if (s[i] == ')')
        {
            while (!stk.empty() && stk.top() != '(')
            {
                res += stk.top();
                stk.pop();
            }
            while (!stk.empty())
                stk.pop();
        }

        else
        {

            while (!stk.empty() && precedence(stk.top()) > precedence(s[i]))
            {
                res += stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }

    return reverseOrder(res);
}

int main()
{
    cout << infixToPrefix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}