#include<iostream>
using namespace std;
int sum(int n)
{  
   static int s=0;
    if(n==0)
        return s;
    else 
    {
        s += n%10;
        n /= 10;
        sum(n);
    }
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The sum of digits : "<<sum(n)<<endl;
    return 0;
}