#include<stdio.h>
#include<stdlib.h>

int search(int arr[],int n,int x)
{
  int k;
  for(k=0;k<n;k++)
   {
       if(x == arr[k])
        return k;
   }
   return -1;
}

int main ()
{
    int arr[10];
    int n=10,x;
    scanf("%d", &x);
    int i = 0;
    for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);    
    }
    
  int p = search(arr,n,x); 
  printf("%d", p);
    

    
    return 0;
}

 