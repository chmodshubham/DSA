#include <iostream>
using namespace std;

int pathcount(int st , int end)
{
	if(st==end)
	{
		return 1;
	}
	if(st>end)
	{
		return 0;
	}
	
	int count =0;
	// we make jump as the no. in a dice
	for(int i=1 ; i<=6 ; i++)
	{
		count += pathcount(st+i,end);

		// pathcount(1,3)         (note:  2 loops left for pathcount(2,3)  and  pathcount(3,3))
		// in pathcount(1,3)  :     pathcount(2,3) executes    and 1 loop left for pathcount(3,3)
		// in pathcount(2,3)  :     pathcount(3,3) executes and its value becomes 1.
		
		// now pathcount(2,3) value equals to its interior function body which is equal to 1 (pathcount(3,3) value) 
		// and for pathcount(1,3) , value equals to 2 (pathcount(2,3) value + pathcount(3,3) value)

		// similarly we work for another 2 loops left in 1st statement.
	}
	return count ;
}

int main()
{
	cout << pathcount(0,3);
	return 0;
}
