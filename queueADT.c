#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
    int *p;
};
int main()
{ 
    struct queue q,s;

    int x,data,b;
    printf("enter the size of queue\n");
    scanf("%d",&q.size);
    q.p=(int *)malloc(sizeof(int)*q.size);
    q.f=q.r=-1;
    s.p=(int *)malloc(sizeof(int)*q.size);
    s.f=s.r=-1;
    while(1)
    {
        printf("enter the operation to be performed\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:printf("enter the data to be added\n");
               scanf("%d",&data);
               enqueue(&q,data);
               break;
        case 2:b=dequeue(&q);
               printf("the number removed form queue is %d\n",b);
               break;
        case 3:printf("the q is \n");
               display(q);
               break;
        case 4:reverse(&q);
               display(q);
               break;
        default:exit(0);
        }
    }
    return 0;
}
void enqueue(struct queue *q,int data)
{
    if(q->r==q->size-1)
    {
        return;
    }
    else
    {


if(q->r==-1&&q->f==-1)
    {
        q->r++;
        q->f++;
        q->p[q->r]=data;

    }
    else
    {
        q->r++;
        q->p[q->r]=data;
    }
}
}
int dequeue(struct queue *q)
{
    int b;
    if(q->f>q->r)
    {
        printf("the list is empty");
        exit(0);
    }
    else
    {
       b=q->p[(*q).f];
       q->f++;
       return b;
    }
}
void display(struct queue q)
{
     if((q).f>(q).r)
     {
         return;
     }
     else
     {
         int d=dequeue(&q);

         printf("%d\n",d);
         display(q);
     }
}
void reverse(struct queue *q)
{
if((*q).f>(*q).r)
    {
        (*q).f=(*q).r=-1;
        return;
    }
    else
    {
         int d=dequeue(q);
         reverse(q);
         enqueue(q,d);

    }
}