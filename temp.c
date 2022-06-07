#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
typedef struct node *NODE;
NODE first = NULL, temp;

NODE get_node()
{
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    return x;
}

NODE create_new()
{
    temp = get_node();
    scanf("%d", &temp->data);
    temp->link = NULL;
    return temp;
}

void insert_front()
{
    temp = create_new();
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        temp->link = first;
        first = temp;
    }
}

void insert_rear()
{
    NODE cur = first;
    temp = create_new();
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        while (cur->link != NULL)
        {
            cur = cur->link;
        }
        cur->link = temp;
    }
}

void delete_front()
{
    if (first == NULL)
    {
        printf("\nLinked List Empty");
    }
    else if (first->link == NULL)
    {
        printf("\nElement deleted = %d ", first->data);
        free(first);
    }
    else
    {
        temp = first;
        printf("\nElement deleted = %d ", temp->data);
        first = first->link;
        free(temp);
    }
}

void delete_rear()
{
    NODE cur = first;
    if (first == NULL)
    {
        printf("\nLinked List Empty");
    }
    else if (first->link == NULL)
    {
        printf("\nElement deleted = %d ", first->data);
        free(first);
    }
    else
    {
        while (cur->link != NULL)
        {
            temp = cur;
            cur = cur->link;
        }
        temp->link = NULL;

        printf("\nElement deleted = %d ", cur->data);
        free(cur);
    }
}

void display()
{
    if (first == NULL)
    {
        printf("\nLinked List Empty");
    }
    else
    {
        NODE cur = first;
        printf(" %d ", cur->data);
        while (cur->link != NULL)
        {
            cur = cur->link;
            printf(" %d ", cur->data);
        }
        //printf(" %d ", cur->data);
        
    }
}

void main()
{
    int ch = 1;
    while (ch)
    {

        printf("\n\nSingly Linked List\n");
        printf("------------------\n");
        printf("1.Insert front\n");
        printf("2.Insert rear\n");
        printf("3.Delete front\n");
        printf("4.Delete rear\n");
        printf("5.Display\n6.Exit\n\nEnter Choice :: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_rear();
            break;
        case 3:
            delete_front();
            break;
        case 4:
            delete_rear();
            break;
        case 5:
            display();
            break;
        case 6:
            ch = 0;
            break;
        }
    }
}