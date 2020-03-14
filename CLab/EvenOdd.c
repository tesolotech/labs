#include"stdio.h"
int Even(int);
int Odd(int);
void main()
{
	int num;
	printf("Enter max no:");
	scanf("%d",&num);
	printf("Even no:-");
	Even(num);
	printf("\n Odd no:-");
	Odd(num);

}
int Even(int num)
{
	int i;
	for(i=0;i<num;i++)
		if(i%2==0)
			printf("%d , ",i);
	return 0;
}
int Odd(int num)
{
	int i;
	for(i=0;i<num;i++)
		if(i%2!=0)
			printf("%d , ",i);

	return 0;
}
