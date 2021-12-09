#include<iostream>
using namespace std;
class student
{
    string name ;
    int roll;
    int mark[3];
    public:
       void insert()
       {
           cout<<"Enter the name : ";
           cin>>name;
           cout<<"Enter the roll no. :  ";
           cin>>roll;
           for(int i=0;i<3;i++)
             {
                 cout<<"Enter the mark in "<<i+1<<" subject : ";
                 cin>>mark[i];
             }
       }
       void display()
       {
         cout<<"Student name : ";
           cout<<name<<endl;
           cout<<" roll no. :  ";
           cout<<roll<<endl;
           for(int i=0;i<3;i++)
               cout<<"Enter the mark in "<<i+1<<" subject : "<<mark[i]<<endl;
       }
};
int main()
{
    student  x;
    x.insert();
    x.display();
    return 0;
}