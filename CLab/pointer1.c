#include"stdio.h"
void main()
{
	char arr[]={"this is the pointer test"};
	printf("%d\n",*arr);
	printf("%c\n",*arr);
	printf("%u\n",arr);
	printf("%s\n",arr);
	printf("%d\n",&arr);
}
