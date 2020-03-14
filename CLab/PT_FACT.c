#include"stdio.h"
int Fact(int);
void main()
{
	int num;
	printf("enter max range:-");
	scanf("%d",&num);
	int res=Fact(num);
	printf("%d",res);

}
int Fact(int n)
{
	if(n>=1)
		return (n*Fact(n-1));
	else
		return 1;
}
