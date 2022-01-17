#include <iostream>
using namespace std;

void substring(string s, string ans)
{
    if (s.length()==0)
    {
        cout << ans << endl;
        return;
    }
    
    char ch=s[0];
    int ascii=ch;
    
    substring(s.substr(1),ans);
    substring(s.substr(1),ans+ch);
    substring(s.substr(1),ans + to_string(ascii));
    
}

int main()
{
    substring("ABC","");
    return 0;
}