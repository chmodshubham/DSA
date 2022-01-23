#include <iostream>
#include <stack> //stack directory
using namespace std;

void reverseSen(string s)
{
    stack<string> stk; // creating a stack string 'stk'
    for (int i = 0; i < s.size(); i++)
    {
        string word = " ";
        while (s[i] != ' ' && i < s.length())
        {
            // word.push_back(s[i]);      It is a way to push the character into a string just like dynamic array.
            word += s[i];
            i++; // we are incrementing in order to pick the next word
        }
        stk.push(word);
    }

    while (stk.empty() != 1)
    {
        cout << stk.top() << " ";
        stk.pop(); // stk.pop is required to remove the top part of stack
    }
}

int main()
{
    string s = "Hello World, U are at the edge of your life";
    reverseSen(s);

    return 0;
}