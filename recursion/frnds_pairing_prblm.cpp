#include <iostream>
using namespace std;

int pairing(int n)
{ // pairing can be single or double
// example : 1 boy and 4 girls
    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return (pairing(n-1) /* when 1 boy is left single and the rest of the person undergo pairing*/ + (n-1)*pairing(n-2))  /*when 1 boy get paired then (no. of ways of pairing the boy)* (pairing of left of the people) is the combination*/;
}

int main()
{
    cout << pairing(5);
    return 0;
}