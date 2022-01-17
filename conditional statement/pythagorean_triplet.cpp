#include <iostream>
using namespace std;

bool check(int x,int y, int z)
{
	int a=max(x,max(z,y));
	int b,c;
	if (a==x)
	{
		b=y;
		c=z;
	}
	else if (a==y)
	{
		b=x;
		c=z;
	}
	else 
	{
		b=x;
		c=y;
	}
	if(a*a==b*b+c*c)
	{
		return true;
	}
	else
	{
		return false;
	}
//    if(x>y&&x>z)
//    {
//    	if(x*x==y*y+z*z)
//    	{
//    		return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else if(y>x&&y>z)
//    {
//    	if(y*y==x*x+z*z)
//    	{
//    		return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//    else 
//    {
//    	if(z*z==x*x+y*y)
//    	{
//    		return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z ;
	if (check(x,y,z))
	{
		cout << "Pythagorean Triplet";
	}
	else
	{
		cout << "Not Pythagorean Triplet";
	}
	return 0;
}
