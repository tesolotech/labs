#include"stdio.h"
void main()
{
	char ch[20];

	int i;
	for(i=0;i<10;i++)
	*(ch+i)=67;
	*(ch+i)='\0';
	printf("\n%s",ch);
}
