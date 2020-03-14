#include"stdio.h"
#include<math.h>
int main()
{
	int num, i=0,sum=0,rem;
	printf("Enter Binary Digits:");
	scanf("%d",&num);
	while(num>0)
	{
	//	rem=num%10;
		sum+=pow(2,i)*(num%10);
		num=num/10;
		i++;
	}
	printf("%d in decimal:%d",num,sum);

	return 0;
}
