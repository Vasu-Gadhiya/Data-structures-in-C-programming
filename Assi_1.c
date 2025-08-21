// write the program in which element search from the list
#include<stdio.h>

void main()
{
    int a[20],i,n,flag=0,s;
    printf("Enter Limit : ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("Enter the Value %d : ", i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the value for search : ");
    scanf("%d",&s);

    for (i=0; i<n; i++)
    {
        if(s == a[i])
        {
            flag=1;
            printf("\nThe value found in the position : %d", i+1);
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n Value Not Founded!!!");
    }
}
