#include<stdio.h>

int get_sum(int a[],int n, int sum)
{
   int count = 0;
   for(int i = 0;i<n-1;i++)
   {
      for(int j = i+1;j<n;j++)
      {
        if((a[i] + a[j])==sum)
        {
          count++;
        }
      }
   }
   
   return count;
}

int main()
{
  int arr[] = {3,2,5,3,6};
  int sum = 5;
  int n = (sizeof(arr)/sizeof(arr[0]));
  print ("%s %d","count is ", get_sum(arr,n,sum));
}
