#include <iostream>
using namespace std;

int uniqueno(int arr[],int n)
{
	int xorsum = 0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
// we are doing xor operation of all the nos. in the array .so, for our input loop..
//        xorsum            000      0
//        i=0               010  *   2
//        i=1               010  *   2
//        i=2               110  %   6
//        i=3               011      3
//        i=4               100  $   4
//        i=5               110  %   6
//        i=6               100  $   4
//        
//xor operation of all nos. is actually the xor operation of 0(xorsum) and the unique no. only ,
//as the xor operation of same nos. are actually zero and xor operation of zero and any no. is the no. itself.		
	}
    return xorsum;
}

int main()
{
	int arr[7]={2,2,6,3,4,6,4};
	cout << uniqueno(arr,7);
	
}

        
        
