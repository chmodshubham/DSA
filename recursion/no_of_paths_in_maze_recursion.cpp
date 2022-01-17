#include <iostream>
using namespace std;

int pathcount_maze(int n , int i , int j)        // condition :  we only move in rightward and downward direction
{
	if(i==n-1 && j==n-1)
	{
		return 1;
	}
	if(i>=n || j>=n)
	{
		return 0;
	}
	
	return  pathcount_maze(n,i+1,j) + pathcount_maze(n,i,j+1);
}

int main()
{
	cout << pathcount_maze(3,0,0);
	return 0;
}
