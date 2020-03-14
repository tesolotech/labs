#include"stdio.h"
int main()
{
	int i=5;
	void *p;
	p=&i;
	printf("%d",*p);
	return 0;
}
