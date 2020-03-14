#include"stdio.h"
void main()
{
        int arr[10],i,n;
        printf("enter the size of array:-");
        scanf("%d",&n);
        printf("enter the element in an array:-");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
                while(i<=n)
                {
                        int temp=arr[i];
                        arr[i]=arr[i+1];
                        arr[i+1]=temp;
                }
        }
        for(i=0;i<n;i++)
        {
                printf("%d",arr[i]);
        }

}

