#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array : ";
    for(int i=0; i<n;i++)
       cin>>a[i];
    cout<<"Choose the option"<<endl<<"1.To right rotate\n2.to left rotate"<<endl;
    int o,shift,temp;
    cout<<"Enter the option : ";
    cin>>o;
    cout<<"Enter the step to shift : ";
    cin>>shift;
     cout<<"before sfiting  the array is : ";
        for (int j=0 ;j<n;j++)
        cout<<a[j]<<"  ";   
       for (int i=0;i<shift; i++)
       {
             if(o==1)
             { 
               temp = a[n-1];                     
               for(int j=n-1;j>0;j--)
                 a[j] = a[j-1];
                 a[0]=temp;
             }
           else  if (o==2)
            {
              temp =  a[0]; 
              for(int j=0;j<n-1;j++)
               a[j]= a[j+1];
               a[n-1]= temp;
             }             
       }
       cout<<endl<<"After sfiting  the array is : ";
        for (int j=0 ;j<n;j++)
        cout<<a[j]<<"  ";   
        return 0;
}