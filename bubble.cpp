// Bubble Sort
#include<iostream.h>
using namespace std;
int main()
{
  int a[100],i,j,n,t; // variable deceleration
  cin>>n;             // accepting value from user
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)   // loop that will sort the Array
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
      }
    }
  }
  return 0;
}
