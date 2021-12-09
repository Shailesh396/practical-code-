#include<iostream>
using namespace std;
void even_odd(int a[],int n)
{  
     cout<<"Even number is : ";
    for(int i=0; i<n ; i++)
    if(a[i]%2==0 )
      cout<<a[i]<<"\t";
      cout<<endl;
      for(int i=0; i<n ; i++)
    if(a[i]%2!=0 )
      cout<<a[i]<<"\t";
      cout<<endl;
}
int main ()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element : ";
    int a[n];
    for(int i=0;i<n; i++)
    cin>>a[i];
    even_odd(a,n);
    
}