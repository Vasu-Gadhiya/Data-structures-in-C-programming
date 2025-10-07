// write a c program to perform the all operation of stack
#include<stdio.h>
#define MAX 5

int top=-1,stack[MAX];
void push();
int pop();
void peek();
void update(int,int);
void display();

void main()
{
    int op,x,i;
    do
    {
        printf("\n1. Push Value.");
        printf("\n2. Pop Value.");
        printf("\n3. Peek Value.");
        printf("\n4. Update Value.");
        printf("\n5. Display Value.");
        printf("\n6. Exit.");

        printf("Enter Your Choice : ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                push();
                break;

            case 2:
                x=pop();
                if (x!=-1)
                {
                    printf("\n Deleted value is : %d",x);
                }
                break;

            case 3:
                peek();
                break;

            case 4:
                printf("\n Enter Index : ");
                scanf("%d",&i);

                printf("\n Enter New value to be updated : ");
                scanf("%d",&x);
                update(i,x);
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting...");
                break;

            default:
                printf("\n Invalid Choice!!!");
        }
    }while(op!=6);
}

void push()
{
    int val;
    printf("\n Enter Value to Insert : ");
    scanf("%d",&val);

    if (top==MAX-1)
    {
        printf("\n Stack is Overflow, There is no space to insert value!!!");
        return;
    }
    top = top+1;
    stack[top]=val;
}
int pop()
{
    int val;
    if(top<=-1)
    {
        printf("\n Stack is Empty!!!");
    }
    val = stack[top];
    top = top-1;
    return val;
}
void peek()
{
    if(top<=-1){
        printf("\n Stack is Empty!!!");
        return;
    }
    printf("\n %d",top+1);
}
void update(int i, int val)
{
    if(top-i+1<=-1)
    {
        printf("\n Stack is Empty!!!");
        return;
    }
    stack[top-i+1]=val;
}
void display()
{
    if (top<=-1)
    {
        printf("\n Stack is Empty!!!");
        return;
    }
    for (int i=top; i>=0; i--)
    {
        printf("\n %d",stack[i]);
    }
}

