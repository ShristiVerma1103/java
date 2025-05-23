#include<stdio.h>
#include<stdlib.h>
struct node1
{
    int data;
    struct node1* next;

}* start1=NULL, *temp1=NULL;
struct node2
{
    int data;
    struct node2* next;
    struct node2* prev;
  
}* start2=NULL, *temp2=NULL;

int circular_SLL();
int  circular_DLL();
// doubly linked list fuctions
void dll_create();
void dll_insert_at_end();
void dll_insert_at_beg();
void dll_insert_at_pos();
void dll_traverse();
void dll_deletion_at_end();
void dll_deletion_at_beg();
void dll_deletion_at_pos();

// simple linked list fuctions
void sll_create();
void sll_insert_at_end();
void sll_insert_at_beg();
void sll_insert_at_pos();
void sll_traverse();
void sll_deletion_at_end();
void sll_deletion_at_beg();
void sll_deletion_at_pos();

void main()
{ 
    int choice;
    printf("enter the choice\n 1. for circular singly linked list \n 2. for circular doubly linked list\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: circular_SLL();
                break;
        case 2: circular_DLL();
                break;
        default: printf("invalid choice");
    }
}

int circular_SLL()
{
   int Choice;
do{ 
  int purpose;
  printf("\n enter the purpose: \n 1. create \n 2. insert_at_beg \n 3. insert_at_end \n 4. insert_at_pos \n 5. traverse \n 6. deletion_at_beg \n 7. deletion_at_end \n 8. deletion_at_pos \n 9. exit\n");
  scanf("%d", &purpose);
  switch(purpose){
    case 1: sll_create();      // crearing linked list
             break;
    case 2: sll_insert_at_beg();       // inserting data in node at beginning
             break;
    case 3: sll_insert_at_end();       // inserting data in node at end
             break;
    case 4: sll_insert_at_pos();       // inserting data in node at specific position
             break;
    case 5: sll_traverse();       // traversing the linked list
             break;
    case 6: sll_deletion_at_beg();       // deleting data in node at beginning
             break; 
    case 7: sll_deletion_at_end();       // deleting data in node at end
             break;
    case 8: sll_deletion_at_pos();       // deleting data in node at specific position
             break;
    case 9: printf("exit");
             return 0; // Return a valid integer value
    default : printf("purpose is not inavlid");
  }
  printf ("enter Choice if you want to continue 1 or exit 0 \n");
  scanf("%d",&Choice);
}while(Choice==1);

}
void sll_create()
{  int ch;
    struct node1* new; 
   do 
    {
    new = (struct node1*)malloc (sizeof (struct node1));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    if (start1==NULL){
        start1=temp1=new;

    }
    else
    {
        temp1->next= new;
        temp1= temp1->next;

    }
    printf("\ndo you want to continue 1 or exit 0\n");
    scanf("%d",&ch);
} while(ch==1);
}
void sll_insert_at_beg()
{
    struct node1* new;
    new = (struct node1*)malloc (sizeof (struct node1));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= start1;
    start1= new;
    printf("new node inserted at beginning");
}

void sll_insert_at_pos()
{
    struct node1* new, *q;
    int pos;
    new = (struct node1*)malloc (sizeof (struct node1));
    printf("enter the data in node");
    scanf("%d",&new->data);
    printf("enter the position");
    scanf("%d",&pos);
    q= start1;
    for (int i=1; i<pos-1; i++)
    {
        q= q->next;
    }

    new->next= q->next;
    q->next= new;
    printf("new node inserted at position %d", pos);
}
void sll_insert_at_end()
{
    struct node1*new;
    new= (struct node1*)malloc (sizeof (struct node1));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
     while(temp1->next!= NULL)
    {
        temp1= temp1->next;
    }
    temp1->next= new;
    temp1= temp1->next;
    printf("new node inserted at end");
}
void sll_deletion_at_beg()
{
    struct node1* q;
    if (start1== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start1;
        start1= start1->next;
        printf("deleted node is %d", q->data);
        free(q);
    }
}

void sll_deletion_at_pos()
{
    struct node1 *q,*p;
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    q = start1;
    for (int i=1; i<pos-1; i++)
    {
        q= q->next;
    }
  
    p= q->next;
    q->next= p->next;
    printf("deleted node is %d", p->data);
    free(p);

}
void  sll_deletion_at_end()
{
    struct node1* q;
    if (start1== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start1;
        while (q->next->next!= NULL)
        {
            q= q->next;
        }
        printf("deleted node is %d", q->next->data);
        free(q->next);
        q->next= NULL;
    }
}

void sll_traverse()
{ struct node1 *q;
    q= start1;
    printf("linked list is: \n");
while (q!= NULL)
{
    
    printf("%d\t ", q->data);
    q= q->next;
    
} 

}

int circular_DLL()
{ int Choice;

do{ 
  int purpose;
  printf("\n enter the purpose: \n 1. create \n 2. insert_at_beg \n 3. insert_at_end \n 4. insert_at_pos \n 5. traverse \n 6. deletion_at_beg \n 7. deletion_at_end \n 8. deletion_at_pos \n 9. exit\n");
  scanf("%d", &purpose);
  switch(purpose){
    case 1: dll_create();      // crearing linked list
             break;
    case 2: dll_insert_at_beg();       // inserting data in node at beginning
             break;
    case 3: dll_insert_at_end();       // inserting data in node at end
             break;
    case 4: dll_insert_at_pos();       // inserting data in node at specific position
             break;
    case 5: dll_traverse();       // traversing the linked list
             break;
    case 6: dll_deletion_at_beg();       // deleting data in node at beginning
             break; 
    case 7: dll_deletion_at_end();       // deleting data in node at end
             break;
    case 8: dll_deletion_at_pos();       // deleting data in node at specific position
             break;
    case 9: printf("exit");
             return 0;
    default : printf("purpose is not inavlid");
  }
  printf ("enter Choice if you want to continue 1 or exit 0 \n");
  scanf("%d",&Choice);
}while(Choice==1);
 
}
void dll_create()
{  int ch;
    struct node2* new; 
   do 
    {
    new = (struct node2*)malloc (sizeof (struct node2));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    if (start2==NULL){
        start2=temp2=new;
    }
    else
    {
        temp2->next= new;
        new->prev= temp2;
        temp2= temp2->next;
    }
    printf("new node inserted");
    printf("\n this is create function choice do you want to continue 1 or exit 0\n");
    scanf("%d",&ch);
} while(ch==1);
}
void dll_insert_at_beg()
{
    struct node2* new;
    new = (struct node2*)malloc (sizeof (struct node2));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    new->next= start2;
    start2->prev=new;
    start2= new;
    printf("new node inserted at beginning");
}

void dll_insert_at_pos()
{
    struct node2* new, *q;
    int pos;
    new = (struct node2*)malloc (sizeof (struct node2));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    printf("enter the position");
    scanf("%d",&pos);
    q= start2;
    for (int i=1; i<pos-1; i++)
    {
        q= q->next;
    }
    new->next= q->next;
    new->prev= q;
    q->next= new;
    q->next->prev= new;
    printf("new node inserted at position %d", pos);
}
void dll_insert_at_end()
{
    struct node2*new;
    new= (struct node2*)malloc (sizeof (struct node2));
    printf("enter the data in node");
    scanf("%d",&new->data);
    new->next= NULL;
    new->prev= NULL;

    temp2= start2;
     while(temp2->next!= NULL)
    {
        temp2= temp2->next;
    }
    temp2->next= new;
    new->prev= temp2;
    temp2= temp2->next;
    printf("new node inserted at end");
}
void dll_deletion_at_beg()
{
    struct node2* q;
    if (start2== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start2;
        start2= start2->next;
        start2->prev= NULL;
        printf("deleted node is %d", q->data);
        free(q);
    }
}

void dll_deletion_at_pos()
{
    struct node2 *q,*p;
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    q = start2;
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
void dll_deletion_at_end()
{
    struct node2* q;
    if (start2== NULL)
    {
        printf("list is empty");
    }
    else
    {
        q= start2;
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

void dll_traverse()
{ struct node2 *q;
    q= start2;
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