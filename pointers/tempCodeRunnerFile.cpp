void swap(int* aptr , int* bptr)
{
	int temp = *aptr;
	*aptr=*bptr;
	*bptr=temp;
}