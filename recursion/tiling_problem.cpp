#include <iostream>
using namespace std;

int tiling_ways(int n)
{
    // board size is 2*n     and    tile size is 2*1
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return (tiling_ways(n-1) /*when 1 tile is vertically placed*/ + tiling_ways(n-2) /*when 1 tile is horizontally placed*/);
     
    //  when 1 tile is horizontally placed , no. of ways to place the rest of the tiles is (n-2)
    //  and
    //  when 1 tile is vertically placed , no. of ways to place the rest of the tiles is (n-1) 

}

int main()
{
    cout << tiling_ways(4);
    return 0; 
}