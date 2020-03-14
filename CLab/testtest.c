#include"stdio.h"
void main()
{
	char arr[20];
	int i;
	for(i=0;i<=19;i++)
	*(arr+i)=67;
	*(arr+i)='\0';
	printf("%s\n",arr);
}
