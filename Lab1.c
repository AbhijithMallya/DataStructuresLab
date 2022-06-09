#include <stdio.h>
#include <stdlib.h>
int a[20], n, elem, i, pos;
void create();
void display();
void insert();
void delete ();
main()
{
    int choice;
    while (1)
    {
        choice = 0; /* to select default option of switch when non-integer */
        printf("\n--------MENU----------\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. EXIT\n");
        printf("-----------------------\n");
        printf("ENTER YOUR CHOICE:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            delete ();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice:\n");
            return;
        }
    }
}
void create()
{
    printf("Enter the size of the array elements:\t");
    scanf("%d", &n);
    printf("Enter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insert() // inserting an element into an array
{
    printf("Enter the position for the new element:\t");
    scanf("%d", &pos);
    pos--; /*actual position is one more than array index*/
    if (pos >= 0 && pos <= n)
    {
        printf("Enter the element to be inserted :\t");
        scanf("%d", &elem);
        for (i = n - 1; i >= pos; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos] = elem;
        n = n + 1;
    }
    else
    {
        printf("Invalid position\n");
    }
}
void delete () // deleting an array element
{
    printf("Enter the position of the element to be deleted:\t");
    scanf("%d", &pos);
    pos--;
    if (pos >= 0 && pos < n)
    {
        elem = a[pos];
        for (i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n = n - 1;
        printf("The deleted element is =%d", elem);
    }
    else
    {
        printf("Invalid position\n");
    }
}