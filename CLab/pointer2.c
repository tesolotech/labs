#include"stdio.h"
void main()
{
	char arr[]={"pankaj sir is great"};
	printf("%u\n",&arr);// print base address
	printf("%c\n",&arr);// 
	printf("%s\n",arr);// print whole string
	printf("%u\n",*arr);// print aacii value of first charector
}
