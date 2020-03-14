#include"stdio.h"
int Max(int n, int n1);
int Min(int n, int n1);
void main()
{
	int n,n1;
	printf("enter two no:-");
	scanf("%d%d",&n,&n1);
	printf("Maximum is%d\n",Max(n, n1));
	printf("Minimum is %d\n",Min(n,n1));
}
int Max(int n, int n1)
{
	return(n>n1?n:n1);
}
int Min(int n, int n1)
{
	return(n>n1?n1:n);
}
