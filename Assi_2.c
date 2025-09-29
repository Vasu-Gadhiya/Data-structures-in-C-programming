// write the program for addition of two array
#include<stdio.h>

void main()
{
    int a[5],b[5],c[5],i;

    for (i=0; i<5; i++)
    {
        printf("Enter the Value for array - A %d : ", i+1);
        scanf("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        printf("Enter the Value for array - B %d : ", i+1);
        scanf("%d",&b[i]);
    }

    for (i=0; i<5; i++)
    {
        c[i]=a[i]+b[i];
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n",c[i]);
    }
}

