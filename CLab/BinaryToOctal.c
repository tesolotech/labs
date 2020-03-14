#include"math.h"
#include"stdio.h"
void main()
{
	int num, dec=0, rem,i=0;
	printf("Enter Binary Digits:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		dec+=pow(2,i)*rem;
		num=num/10;
		i++;
	}
	printf("%d",dec);
}
