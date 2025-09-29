// write the program for merge of two array
#include<stdio.h>

void main()
{
    int a[50],i,pos,value,n=0;

    printf("\nEnter the limit : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("\nEnter the Value for array - A %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the position : ");
    scanf("%d",&pos);

    printf("Enter new value : ");
    scanf("%d",&value);

    if (pos <1 || pos > n)
    {
        printf("Invalid position");
        return;
    }
    pos = pos-1;

    for(i=n; i>pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = value;

    for(i=0; i<n+1; i++)
    {
        printf("%d ", a[i]);
    }
}


