#include <iostream>
using namespace std;

string keypad_arr[] = {"" , "" , "abc", "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void keypad(string s , string ans)
{
    if(s.size()==0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string resp_code= keypad_arr[ch -'0'];

    for(int i=0; i<resp_code.size();i++)
    {
        keypad(s.substr(1), ans + resp_code[i]);
    } 
}

int main()
{
    keypad("23",  "");
    return 0;
}