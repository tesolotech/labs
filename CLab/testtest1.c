#include"stdio.h"
void main()
{
	char arr[]={48,48,48,48,48,48,48,48,48,48};
	char *s;
	s=arr;
	int i;
	for(i=0;i<=9;i++)
	{
		if(*s)
		{
			printf("%c",*s);
		}
	}
}
