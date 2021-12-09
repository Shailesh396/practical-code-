#include<iostream>
using namespace std;
int main()
{
    int m ,n ;
    cout<<"Enter the serial of month : ";
    cin>>m;
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
         n=1;
    else if (m==4||m==6||m==9||m==11)
           n = 3;
    else if (m==2)
         n =2;
        switch(n)
    {
        case 1:   cout<< "Number of days is 31 "<<endl;
                  break;
        case 2:  cout<<"NUmber of days is 28 ,but in leap year, number of is days is 29"<<endl;
                 break;
        case 3:   cout<< "NUmber of days is 30 "<<endl;
                 break;
        default : cout<<"invalid input "<<endl;
                  return 0;
    }
}