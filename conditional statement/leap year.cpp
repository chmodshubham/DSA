/* Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.*/
#include <iostream>
using namespace std;

int main()
{
	int s,y;
	cout<<"Year:";
	cin>>y;
	if (y%4==0)
	{
		if(y%400==0)
		{
			cout<<"It is a leap year.";	
		}
		else
		{
			cout<<y<<" is a century but it is not a leap year.";
		}
	}
	else
	{
		cout<<"It is not a leap year.";
	}
	return 0;
}
