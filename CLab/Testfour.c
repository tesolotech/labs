#include"stdio.h"
void main()
{
	int x,y=2,z,a;
	x=(y*=2)+(z=a=y);
	printf("%d,",x);
	int n=3;
	printf("%d, %d, ",n++,++n);
	int i=254;
	putchar(i);
	printf("%f",(float)9/5);
	unsigned e=1;
	int j=-4;
	printf("\n%u\n",e+j);
	for(int j=3;j<15;j+=3)
	printf("%d, ",j);
}
