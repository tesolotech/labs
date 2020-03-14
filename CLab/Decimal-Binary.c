#include"stdio.h"
void main()
{
	int num, i=1,rem,temp, binary=0;
	printf("Enter decimal no:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%2;
		num=num/2;
		binary=binary+(rem*i);
		i=i*10;
	}
	printf("%d in binary:%d",temp,binary);
}
