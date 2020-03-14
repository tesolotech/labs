#include"stdio.h"
int Cube(int n);
int main()
{
	int n;
	printf("enter a no:-");
	scanf("%d",&n);
	int a=Cube(n);
	printf("Cube of %d no is %d\n",n,a);
	return 0;
}
int Cube(int n)
{
//	int cube=n*n*n;
	return(n*n*n);
}
