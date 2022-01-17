#include <iostream>
using namespace std;

int main()
{
	int a;
	char s,m;
	cout<<"Enter Age:";
	cin>>a;
	cout<<"Sex (M or F):";
	cin>>s;
	cout<<"Marital Status(Y or N):";
	cin>>m;
	if(s=='F')
	{
		if(a>=20&&a<=60)
		{
			cout<<"She will work in urban areas\n";	
		}
		else
		{
			cout<<"ERROR";
		}
	}
	else
	{
		if(a>=20&&a<=40)
		{
			cout<<"He will work in anywhere.\n";
		}
		else if(a>=40&&a<=60)
		{
			cout<<"He will work in urban areas only\n";
		}
		else
		{
			cout<<"ERROR";
		}
	}
	return 0;
}
