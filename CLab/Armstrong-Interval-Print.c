#include"stdio.h"
int ArmstrongN(int n);
void GetNo(int a, int b);
void main()
{
	int a,b;
	printf("enter initial and ending no:-");
	scanf("%d%d",&a,&b);
	GetNo(a,b);

}
int ArmstrongN(int n)
{
	int temp=n,rem;
	int sum=0;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
		if(n==sum)
		{
			return 1;
		}
		else
			return 0;
	}
}
void GetNo(int a, int b)
{
	while(a<=b)
	{
		if(ArmstrongN(a))
			printf("%d,",a);
		
		a++;
	}
}
