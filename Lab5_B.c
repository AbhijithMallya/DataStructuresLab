#include <stdio.h>
void tower(int n, char beg, char aux, char end)
{
    if (n == 1)
    {
        printf("Move disk 1 from pole %c to pole %c\n", beg, end);
        return;
    }
    tower(n - 1, beg, end, aux);
    printf("Move disk %d from pole %c to pole %c\n", n, beg, end);
    tower(n - 1, aux, beg, end);
}
main()
{
    int num;
    scanf("%d", &num);
    printf("Enter the number of disks : ");
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    tower(num, 'A', 'B', 'C');
}

