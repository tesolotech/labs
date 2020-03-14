#include"stdio.h"
void main()
{
	char str[]={0,0,0,0,0,0,0,0,0,0};
	char *s;
	int i;
	s=str;
	for(i=0;i<=9;i++)
	{
		if(*s)
		{
			printf("%c",s);
			s++;
		}
	}
}
