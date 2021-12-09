#include<iostream>
using namespace std;
int search(int *a,int n,int x,int i)
{        if(i<n)
          { 
             if(a[i]== x)
             {
                cout<<x<<"is present in array at "<<i+1<<"th position ."<<endl;
                return 0;
             }
             search(a,n,x,++i);
          }
          else
            cout<<x<<"  is absent in array "<<endl ;
          return 0;       
}
int main ()
{
    int n;
    cout<<"Enter the range the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array : ";
    for(int i=0; i<n;i++)
       cin>>a[i];
   cout<<"Enter the number to search : ";
   int x,i=0;
   cin>>x;
   search(a,n,x,i);
   return 0;
}