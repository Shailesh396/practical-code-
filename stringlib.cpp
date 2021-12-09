#include<iostream>
using namespace std;
int main()
{
    string str,rev;
    cout<<"Enter the string : ";
   cin>>str;
   int i=0,length =0 ;
   while(str[i++]!='\0')
   length++;
        for(i=0;i<length ;i++)
         rev[i]= str[length-i-1];
         rev[length]= '\0';
 cout<<"The length of string is : "<<length<<endl;
 cout<<"The reverse string is : "<<endl;
   for(i=0;i<length ;i++)
       cout<<rev[i];
   return 0;
}