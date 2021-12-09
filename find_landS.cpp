#include<iostream>
using namespace std;
int small(int a[],int n)
{   int s = a[0];
    for (int i=0;i<n;i++)
      if (s>a[i])
      s = a[i];
    return s;
}
int large(int a[],int n)
{
    int l =a[0];
    for(int i=0;i<n;i++)
     if (l<a[i])
      l = a[i];
      return l;
}
int main()
{
    int  n ;
    cout<<"Enter the number of array  : ";
    cin>>n;
    cout<<"Enter the element of array : ";
    int a[n] ;
    for(int i = 0; i<n;i++)
     cin>>a[i];
     cout<<"The smallest element  is : "<<small(a,n)<<endl;
     cout<<"The largest element is :  "<<large(a,n)<<endl;
     return 0;   
}