#include<stdio.h>

struct node
{
    int info;
    int priority;
    struct node *next;

};
 struct node *front, *newnode, *temp,n;
 void main()
    {


   int ch,c,p;
       front = NULL;
       while(1)
       {
           printf("\n 1.Insert 2.Delete 3.Exit");
           scanf("%d",&ch);
           switch (ch)
           {
           case 1:
               newnode=(struct node*)malloc(sizeof(n));
               scanf("%d,%d",&c,&p);
               newnode->info = c;
               newnode->priority = p;
               newnode->next=NULL;

               if
               (front==NULL)
               {
                   front = newnode;
               }

               if (newnode->priority<front->priority)
               {
                   newnode->next=front;
                   front = newnode;
               }
               else
               {
                   temp = front;
                   while (temp->next!=NULL && temp->next->priority<newnode->priority)
                        temp = temp->next;
                   newnode->next=temp->next;
                   temp->next=newnode;
                }
            }
        }
}
