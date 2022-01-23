#include <iostream>
#include <stack>
using namespace std;

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;

    else if (ch == '+' || ch == '-')
        return 2;

    else if (ch == '^')
        return 4;

    else
        return -1; // for opening bracket
}

string infix2Postfix(string s)
{
    stack<char> stk;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            res += s[i];

        else if (s[i] == '(')
            stk.push(s[i]);

        else if (s[i] == ')')
        {
            while (!stk.empty() && stk.top() != '(')
            {
                res += stk.top();
                stk.pop();
            }
            if (!stk.empty())
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
    while (!stk.empty())
    {
        res += stk.top();
        stk.pop();
    }

    return res;
}

int main()
{
    cout << infix2Postfix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}