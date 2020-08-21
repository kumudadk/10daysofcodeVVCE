#include <stdio.h>
#include <stdlib.h>
#define MAX 100010

long int queue_arry[MAX];
long int front=-1;
long int rear=-1;
void Enqueue();
void Dequeue();
void display();

void Enqueue()
{
    
    if (front == -1) 
    front = 0;

    long int x;
    scanf("%ld", &x);
    rear = rear + 1;
    queue_arry[rear] = x;    
}
void Dequeue()
{
    front = front+1;
}

void display()
{
    printf("%ld \n",queue_arry[front]);
}

int main()
{
    int c,i;
    long int n;
    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        if(c==1)
        {
            Enqueue();
        }
        else if(c==2)
        {
            Dequeue();
        }
        else if(c==3)
        {
         display();
        }
        else
        {}
    }
}