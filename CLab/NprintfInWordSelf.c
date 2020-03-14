#include"stdio.h"
void main()
{
	int num, rem=0;
	printf("enter a number:-");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=(rem*10)+(num%10);
		num=num/10;
	}
	while(rem!=0)
	{
		switch(rem%10)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
		}
		rem=rem/10;
	}
}
