// write a c program to perform the fectorial in stack
#include<stdio.h>
#define MAX 10

int top=-1,stack[MAX];
void push();
int pop();

void main()
{
    int fact=1,n,i;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        push(i);
    }

    while(top!=-1)
    {
        fact = fact*pop();
    }
    printf("Factorial of the Numbers %d is : %d ",n,fact);
}

void push(int val)
{
    top = top+1;
    stack[top]=val;
}
int pop()
{
    int val;

    val = stack[top];
    top = top-1;
    return val;
}
