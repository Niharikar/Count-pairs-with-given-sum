#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_pair_count(int a[], int n, int sum)
{
  unordered_map <int,int> m;
 
  int count = 0;
  
  for(int j = 0;j<n;j++)
  {
    count += m[sum-a[j]];
    
    if(sum-a[j] == a[j])
      count--;
      
  }
  
  return count;
  
}

int main()
{
  int arr[] = {1,3,4,1,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = 4;
  cout << "No. of pairs with sum " << sum << "is" << get_pair_count(arr,n,sum);
}
