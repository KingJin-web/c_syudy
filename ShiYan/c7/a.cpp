
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int n;
     scanf("%d",&n);
     int arr[n-1];
     int ay[10000] = {0};
     int temp = 0;
     int i = 0,j;
     int number1 = 0;
     for(i = 0;i < n;i ++)
     {
         scanf("%d",&arr[i]);
     }
     int *amax = (int*)malloc(sizeof(int));
     *amax = arr[0];
     for(i = 0;i < n;i ++)
     {
         if(*amax < arr[i])
             *amax = arr[i];
     }
     for (i = 0; i< n;i ++)
     {
         temp = arr[i];
        
         ay[temp] ++;
         }
         int *max = (int*)malloc(sizeof(int));        
         *max = ay[0];
       
     for(j = 0;j <= *amax;j ++)
     {
         if(*max < ay[j])
            {
                *max = ay[j];
              number1=j;
           }
 
     }
     printf("%d\n",number1);
    return 0;
 }
