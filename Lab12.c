/*
Given a File of N employee records with a set K of Keys(4-digit) which uniquely
determine therecords in file F. Assume that file F is maintained in memory by a
Hash Table(HT) of m memory
locations with L as the set of memory addresses (2- digit) of locations in HT.
Let the keys in K and addresses in L are Integers. Design and develop a Program
in C that uses Hash function H:
K → L as H(K)=K mod m (remainder method), and implement hashing technique to map
a given key K to the address space L. Resolve the collision (if any) using
linear probing.

*/
#include<stdio.h>
#include<stdlib.h>
int key,n,m,*ht,hi,elec,flag;
void createht()
{
    int i;
    ht = (int*)malloc(m*sizeof(int));
    if(m==0)
    {
    printf("Unable to create the hash table\n");
    exit(0);
    }
    else
    for(i=0; i<m; i++)
    ht[i] = -1;
}
void insertht(int key)
{
    hi = key % m;
    while(ht[hi] != -1)
    {
    hi = (hi+1)%m;
    flag = 1;
    }
    if(flag)
    {
    printf("Collision Detected and avoided by Linear Probing!\n");
    flag = 0;
    }
    ht[hi] = key;
    elec++;
}
void displayht()
{
    int i;
    if(elec == 0)
    {
    printf("Hash Table is empty\n");
    return;
    }
    printf("Hash Table contents are:\n");
    for(i=0; i<m; i++)
    printf("[%d] --> %d\n", i, ht[i]);

}
void main()
{
int i;
printf("\n%d\n",elec);
printf("Enter the number of employee records: ");
scanf("%d", &n);
printf("Enter the two digit memory locations: ");
scanf("%d", &m);
createht();
printf("Enter four digit key values of Employee records\n");
for(i=0; i<n; i++)
{
    scanf("%d", &key);
    if(elec == m)
    {
    printf("Hash table is full.\n");
    break;
    }
    insertht(key);
}
displayht();
}