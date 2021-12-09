#include<iostream>
using namespace std;
static int Gcd(int m,int n)
{
   static  int gcd=1,i=2;
     int small =m>n?n:m;
    while(i<=small)
     {  if(m%i==0 && n%i==0)
           {  gcd *= i;
           Gcd(m/i,n/i);
           }
            else i++;
           
    } 
   return gcd;    
}
int main()
{
    int m,n;
    cout<<"Enter two digits to find GCD : ";
    cin>>m>>n;
    cout<<"the gcd of digits is : "<< Gcd(m,n);
    return 0;
}