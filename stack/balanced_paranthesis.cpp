#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stk.push(s[i]);
        }
        else if (!stk.empty() && s[i] == ')')
        {
            if (stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
        else if (!stk.empty() && s[i] == '}')
        {
            if (stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
        else if (!stk.empty() && s[i] == ']')
        {
            if (stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (!stk.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    string s = "{[()]}";
    if (isValid(s))
    {
        cout << "Balanced Paranthesis\n";
    }
    else
    {
        cout << "Unbalanced Paranthesis\n";
    }
    return 0;
}