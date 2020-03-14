#include"stdio.h"
char* reverse(char*);
int length(char *);
void main()
{
	char *p;
	printf("%d\n",length("vikash"));
	printf("%s",reverse("vikash"));
}
int length(char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++);
	return(i);
}
char* reverse(char *p)
{
	int i,l;
	char t;
	for(i=0;*(p+i)!='\0';i++);
	for(l=0;l<i/2;l++)
	{
		t=*(p+l);
		*(p+l)=*(p+i-1-l);
		*(p+i-1-l)=t;
	}
	return(p);
}
