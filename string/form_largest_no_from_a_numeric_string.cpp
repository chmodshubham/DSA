#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str="13254";
	int i=0;
	int x=str.size();
	while(x!=1)
	{
		if(str[i]>str[i+1])
		{
		    char x=str[i];
			str[i]=str[i+1];
			str[i+1]=x;
		}
		i++;
		if(i>x-2)
		{
			i=0;
			x--;
		}
	}
	for(int j=str.size()-1;j>=0;j--)
	{
		cout << str[j];
	}
	
	return 0;
}
