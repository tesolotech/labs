int Fibo(num)
{
	if(num==1||num==2)
		return 1;
	return(Fibo(num-1)+Fibo(num-2));
}
#include"stdio.h"
void main()
{
	int num,i;
	printf("enter range where you want to print series:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		printf("%d ,",Fibo(i));
}
