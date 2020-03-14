#include<stdio.h>
void main()
{
	int i,size;
	printf("enter the size of binary digits:=");
	scanf("%d",&size);
	
	char binary[size+1],onebinary[size+1];
	printf("enter the binary ditits:-");
	scanf("%c",&binary[i]);
	for(i=0;i<size;i++)
	{
		if(binary[i]=='1')
		{
			onebinary[i]='0';
		}
		else if(binary[i]='0')
		{
			onebinary[i]='1';
		}
		else
		{
			printf("INVALID INPUT\n");
			break;
		}
	}
	onebinary[size]='\0';
	printf("original binary is= %s\n",binary);
	printf("onescomplement binary is=%s\n",onebinary);


}
