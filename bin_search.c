#include<stdio.h>
#include<stdlib.h>

int bisearch(int arr[],int l, int r, int x)
{
    if (r>=1)
    {
      int mid = l + (r-l)/2;
      if(arr[mid]==x)
      return mid;
      if (arr[mid]>x)
      return bisearch(arr,l,mid-1,x);
     
      return bisearch(arr,mid+1,r,x);
    }
    return -1;
}

int main()
{
    int arr[] =  {1,6,7,10,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 11;
    int result = bisearch(arr,0,n-1,x);
    (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
    
}

 