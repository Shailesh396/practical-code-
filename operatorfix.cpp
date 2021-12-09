#include<iostream>
using namespace std;
class object
{
    public:
    int i,j;
     void input()
    {
      cout<<"Enter the value to pre increment : ";
      cin>>i;
      cout<<"Enter the value to  decrement : ";
      cin>>j;
     }
     int operator ++(int x)
    {
              int plus;
              plus= ++x;
              return plus;
    }
     int operator--(int y)
    {         int minus;
             minus= --y;
             return minus;
    }
    void display()
    {
        cout<<"After increment : ";
        cout<<i<<endl;
        cout<<"After decrement : ";
        cout<<j<<endl;
    }
};
int main()
{   
   object change,after;  
     change.input();
    after.i=  ++change.i;
    after.j=  --change.j;
    after.display();
        return 0;
}