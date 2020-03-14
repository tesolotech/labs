#include"stdio.h"
int Fibo(int n);
void main()
{
	int n,i;
	printf("enter the nth term of no:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d, ",Fibo(i));
	}

}
int Fibo(int n)
{
	if(n==1||n==2)
		return 1;
	return(Fibo(n-1)+Fibo(n-2));
}
