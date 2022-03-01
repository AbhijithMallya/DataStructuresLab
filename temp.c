#include<stdio.h>
#include<conio.h>
#define MAX 5 //create a array of size 5*5

// Pass adjacency matrix , vistied array and the start element

void bfs(int adj[][MAX], int visited[] , int start)
{
    /*BFS has queue . it follows FIFO*/
    int queue[MAX];int rear,front;
    rear=front=-1;

    // Make Visited array 0

    int i,k;
    for (k=0;k<MAX;k++)
        visited[k]=0;
    
    queue[++rear] = start; // for dfs change quque to stack. Also varaible should be top
    ++front;
    visited[start]=1;

    // General Traversing through the queue
    while(front<=rear) // for dfs top!=1
    {
        // Pop from queue and give to start
        start = queue[front++]; // for dfs starts = stack[top--]
        printf("- %d -",start);
        for(i=0;i<MAX;i++)
        {
            // adjacent and not visited
            if(adj[start][i] && visited[i]==0)
            {
                //Push i to queue and make visited 1
                queue[++rear]=i; // for dfs stack[++top] = 1;
                visited[i]=1;



            }


        }






    }





}
