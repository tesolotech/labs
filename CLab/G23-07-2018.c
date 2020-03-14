#include"stdio.h"
void main()
{
	int *p;
	int x;
	p=&x;
	*p=0;
	printf("x=%d\n",x);
	printf("*p=%d",*p);
	*p=*p+5;
	printf("x=%d",x);
	printf("*p=%d",*p);
	(*p)++;
	printf("x=%d",x);
	printf("*p=%d",*p);
}
