#include"stdio.h"
int Fact(int);
int main()
{
	int num=5;
	printf("%d",Fact(num));
	return 0;
}
int Fact(int num)
{
		if(num<1)
			return 1;
		else
			return (num*Fact(num-1));
}
