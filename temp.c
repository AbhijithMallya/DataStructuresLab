/*#include<stdio.h>
#include<stdlib.h>

void main()
{int i;
int a[5]={0};
printf("\n");
for(i=0;i<5;i++)
printf("%d-",a[i]);
}*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;
NODE first=NULL;

NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;

}

NODE create_new()
{
    NODE temp=getnode();
    printf("Enter ITEM :: ");
    scanf("%d",&temp->item);
    return temp;
}

void insert_front()
{
    NODE temp;
    temp = create_new();
    if(first == NULL)
    {
    first = temp;
    }
    else
    {
    temp->rlink = first;
    first->llink = temp;
    first = temp;
    }
}

void inser_rear()
{
    NODE temp,cur;
    temp = create_new();
    if(first == NULL)
        first = temp;
    else
    {
    cur = first;
    while(cur->rlink !=NULL)
        cur = cur->rlink;
    cur->rlink = temp;
    temp->llink = cur;
    }
}





void main()
{int option;
do{
    printf("Double Linked List\n---------------------\n\n");
    printf("\n1. Insert at front");
    printf("\n2. Insert at end");
    printf("\n3. Delete at front");
    printf("\n4. Delete at end");
    printf("\n5. Display list");
    printf("\n6. Exit");
    printf("\nEnter Choice :: ");
    scanf("%d",&option);
    switch(option)
    {
    case 1 : void insert_front();break;
    case 2 : void insert_end();break;
    case 3 : void delete_front();break;
    case 4 : void delete_end();break;
    case 5 : void display();break;
    case 6 : return;
    default: printf("Invalid Choice");return;
    }
 }while(1);

}
