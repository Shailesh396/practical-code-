#include<iostream>
using namespace std;
long int reverse(long int *ptr)
{
    long int rev=0;
    while(*ptr !=0)
    {
        rev =rev*10 + *ptr%10;
        *ptr /= 10;
    }
    return rev;
}
int main()
{   long int num;
    cout<<"Enter the digit to reverse : ";
    cin>>num;
    long int *ptr;
    ptr= &num;
    cout<<"After reverse the digit is : ";\
    cout<<reverse(&num)<<endl;
    return 0;
}