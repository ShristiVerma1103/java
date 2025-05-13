#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
void create();
void insert_at_end();
void insert_at_beg();
void insert_at_pos();
void traverse();
void deletion_at_end();
void deletion_at_beg();
void deletion_at_pos();


struct node *temp, *start=NULL;

int  main()
{ int Choice;
do{ 
  int purpose;
  printf("\n enter the purpose: \n 1. create \n 2. insert_at_beg \n 3. insert_at_end \n 4. insert_at_pos \n 5. traverse \n 6. deletion_at_beg \n 7. deletion_at_end \n 8. deletion_at_pos \n 9. exit\n");
  scanf("%d", &purpose);
  switch(purpose){
    case 1: create();      // crearing linked list
             break;
    case 2: insert_at_beg();       // inserting data in node at beginning
             break;
    case 3: insert_at_end();       // inserting data in node at end
             break;
    case 4: insert_at_pos();       // inserting data in node at specific position
             break;
    case 5: traverse();       // traversing the linked list
             break;
    case 6: deletion_at_beg();       // deleting data in node at beginning
             break; 
    case 7: deletion_at_end();       // deleting data in node at end
             break;
    case 8: deletion_at_pos();       // deleting data in node at specific position
             break;
    case 9: printf("exit");
             return 0;
    default : printf("purpose is not inavlid");
  }
  printf ("\n enter Choice if you want to continue 1 or exit 0 \n");
  scanf("%d",&Choice);
}while(Choice==1);
}

void create()
{  int ch;
    struct node* new; 
   do 
    {
    new = (struct node*)malloc (sizeof (struct node));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    if (start==NULL){
        start=temp=new;

    }
    else
    {
        temp->next= new;
        new->prev= temp;
        temp= temp->next;
    }
    printf("new node inserted");
    printf("\n this is create function choice do you want to continue 1 or exit 0\n");
    scanf("%d",&ch);
} while(ch==1);
}
void insert_at_beg()
{
    struct node* new;
    new = (struct node*)malloc (sizeof (struct node));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    new->next= start;
    start->prev=new;
    start= new;
    printf("new node inserted at beginning");
}

void insert_at_pos()
{
    struct node* new, *q;
    int pos;
    new = (struct node*)malloc (sizeof (struct node));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    printf("enter the position");
    scanf("%d",&pos);
    q= start;
    for (int i=1; i<pos-1; i++)
    {
        q= q->next;
    }

    new->next= q->next;
    new->prev= q;
    q->next= new;
    printf("new node inserted at position %d", pos);
}
void insert_at_end()
{
    struct node*new;
    new= (struct node*)malloc (sizeof (struct node));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    temp= start;
     while(temp->next!= NULL)
    {
        temp= temp->next;
    }
    temp->next= new;
    new->prev= temp;
    temp= temp->next;
    printf("new node inserted at end");
}
void deletion_at_beg()
{
    struct node* q;
    if (start== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start;
        start= start->next;
        start->prev= NULL;
        printf("deleted node is %d", q->data);
        free(q);
    }
}

void deletion_at_pos()
{
    struct node *q,*p;
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    q = start;
    for (int i=1; i<pos-1; i++)
    {
        q= q->next;
    }
    if (q->next== NULL)
    {
        printf("position is not valid");
        return;
    }
  
    else
    {
    p= q->next;
    q->prev->next = p->next;
    p->next->prev= q->prev;
    printf("deleted node is %d", p->data);
    free(p);
    }
}
void deletion_at_end()
{
    struct node* q;
    if (start== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start;
        while (q->next!= NULL)
        {
            q= q->next;
        }
        printf("deleted node is %d", q->next->data);
        q->prev->next= NULL;
        free(q->next);
        q->next= NULL;
    }
}

void traverse()
{ struct node *q;
    q= start;
printf(" forward linked list is: \n");

while (q->next!= NULL)               //forward traversal
{
    
    printf("%d\t ", q->data);
    q= q->next;
    
} 
printf("%d\t ", q->data);

printf("\n backward linked list is: \n");
while(q!= NULL)               //backward traversal
{
    
    printf("%d\t ", q->data);
    q= q->prev;

}
}