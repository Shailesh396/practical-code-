#include<iostream>
using namespace std;
void insert(int a[],int n)
{  
    while(1){
     cout<<"choose the option to add  a element : ";
     cout<<"1.at first\n 2.at a particular position \n3.at end\n4.to display ";
     int o;
     cin>>o;
     int num ;
     cout<<"Enter the number to insert : ";
     cin>>num; 
     n++; 
     int b[n];
     if (o==1)
     {
         b[0]= num ;
         for(int i=1 ; i<n;i++)
         b[i]= a[i-1];
     }
     else if(o==2)
     {
         cout<<"Enter the position : ";
         int pos;
         cin>>pos;
         for(int i=0 ; i<pos-1;i++)
           b[i]= a[i];
           b[pos-1]= num ;
          for (int i= pos-1; i< n;i++)
           b[i+1]= a[i];
     }
    else if(o==3)
    {
        for (int i=0;i<n;i++)
        b[i]= a[i];
        b[n]= num ;
    }
    else
    {
        cout<<"The elements are : ";
        for(int i =0 ;i<n ; i++)
           cout<<b[i];
    }
}}

int main()
{
     int n;
     cout<<"Enter the size of array  : ";
     cin>>n;
     int a[n];
     cout<<"Enter the elements : ";
     for(int i=0;i<n;i++)
     cin>>a[i];
     insert(a,n);
     return 0;             
}