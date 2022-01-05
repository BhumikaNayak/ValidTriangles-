#include <stdio.h>

int main(void) 
{
    int T;
    scanf("%d",&T);
    int A,B,C;  
    while(T)
    {
        scanf("%d %d %d",&A,&B,&C);
        if(A+B+C==180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        T--;
        
    }
             return 0;
    }