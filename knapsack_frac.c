#include<stdio.h>
#include<stdlib.h>
#define size 50

int get_next(int n, float ratio[])
{
   float largest = ratio[0];
   int index = -1;
   for(int i=0;i<n;i++)
   {
        if(ratio[i] >= largest){largest = ratio[i];index=i;}
   }
   ratio[index] = -1;
   return index;
}

void knapsack(int n, int c, int wt[], int profit[], float ratio[])
{
    int cw=0;
    double cp=0;
    while(cw < c)
    {   
        int item = get_next(n,ratio);
        // printf("%d" , item);
        if(item==-1) break;
        if(cw + wt[item] <= c)
        {
            cp += profit[item];
            cw += wt[item];
        }else{
            cp += (double)((double)(c-cw)/wt[item])*profit[item];
            break;
        }
    }
    printf("%.3lf\n" , cp);
}

int main()
{
    int n,wt[size],profit[size],c,i;
    float ratio[size];

    scanf("%d" , &n);
    for(i=0;i<n;i++)
    {
        scanf("%d" , &wt[i]);
    }
     for(i=0;i<n;i++)
    {
        scanf("%d" , &profit[i]);
    }
    scanf("%d" , &c);

    for(int i=0;i<n;i++)
    {
        float x = (float)profit[i]/wt[i];
        ratio[i] = x;
    }
    knapsack(n,c,wt,profit,ratio);
    return 0;
}