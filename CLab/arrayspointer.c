#include"stdio.h"
void input(int *);
void display(int *);
void sort(int *);
void main()
{
	int a[5];
	input(a);
//	display(a);
	sort(a);
	display(a);
}
void input(int *p)
{
	int i;
	printf("Enter Element in an array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
}
void display(int *p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d , ",*p+i);
	}
}
void sort(int *p)
{
	int r,i,temp;
	for(r=1;r<5;r++)
	{
		for(i=0;i<5-r;i++)
		{
			if(*(p+i) > *(p+i+1))
			{
				temp=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=temp;
			}
		}
	}
}
