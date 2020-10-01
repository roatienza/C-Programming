include<stdio.h>
#include<stdlib.h>
#define max 6
int a[max], top=-1, i;
void push();
void pop();
void display();

void push()
{
    int num;
    if(top == max - 1)
    {
        printf("\nThe stack is full");
    }
    else
    {
        printf("\nEnter the element: ");
        scanf("%d",&num);
        top++;
        a[top] = num;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("The delete number is : %d", a[top]);
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nThe stack is empty");
    }
    else
    {
        printf("\nThe elements are: ");
        for (i = top; i>=0; i--)
        {
            printf("\t%d", a[i]);
        }
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:exit(0);
        default:printf("Wrong choice");
        }
    }
    
}
