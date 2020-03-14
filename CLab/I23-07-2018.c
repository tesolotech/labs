#include"stdio.h"
int main()
{
	char arr[]={"mango"},*p;
	p=(&arr[1]++);
	printf("%s",p++);
	return 0;
}
