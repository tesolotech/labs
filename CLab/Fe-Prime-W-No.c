#include"stdio.h"
void PrintPrime(int start, int end);
int GetPrime(int n);
void main()
{
	int n,n2;
	printf("Enter the start and end range:-");
	scanf("%d%d",&n,&n2);
	PrintPrime(n,n2);
}
void PrintPrime(int start, int end)
{
	while(start<=end)
	{
		if(GetPrime(start))
		{
			printf("%d,  ",start);
		}
	start++;
	}

}
int GetPrime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
