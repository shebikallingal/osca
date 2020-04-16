#include<stdio.h>
#include<math.h>
int main()
{
    int 
    queue[20],n,head,i,j,k,seek=0,diff;
    float avg;
    printf("max range");
    scanf("%d,"&n);
    printf("|the size of queue request");
    scanf("%d,"&n);
    printf("queue of disk positions to be read");
    for(i=1;i<=n;i++)
        scanf("%d",&n);
    printf("initial head position");
    scanf("%d",&head);
    queue[0]=head;
    for(j=0;j<=n;j++)
    {
        
    
        printf("initial head psotion");
    scanf("%d",&head);
        queue[0]=head;
        
        for(j=0;j<=n-1;j++)
        {
            diff=abs(queue[j+1]-queue[j]);
            seek+=diff;
            printf("Disk head moves from %d to %d with seek %d", queue[j],queue[j+1],diff);
            
        }
    printf("average seek time is %f", avg);
        return 0;
    }
    
    
}
