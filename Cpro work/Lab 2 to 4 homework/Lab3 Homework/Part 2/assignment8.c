#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter time in 24-hour format(hours:minutes):");
    scanf("%d:%d",&a,&b);
    c = (a*60 + b);
    if (c <= 531.5) printf("The closest separture time is 8:00am, arriving at 10:16am\n");
    
    else 
       if (c <= 631) printf("The closest separture time is 9:43am, arriving at 11:52am\n");
       
         else 
             if (c <= 723) printf("The closest separture time is 11:19am, arriving at 1:31pm\n");
                 
             else 
              if (c <= 803.5) printf("The closest separture time is 12:47pm, arriving at 3:00pm\n");
                 else 
                 if (c <= 892.5) printf("The closest separture time is 2:00pm, arriving at 4:08pm\n");
                  else
                  if (c <= 1042.5) printf("The closest separture time is 3:45pm, arriving at 5:55pm\n");
                    else 
                    if (c <= 1222.5) printf("The closest separture time is 7:00pm, arriving at 9:20pm\n");
                     else 
                     if (c > 1222.5) printf("The closest separture time is 9:00pm, arriving at 11:58pm\n");
                     
              


}