#include<iostream>
using namespace std;
class object 
{
    public: 
    int x;
    void input(int i)
    {
       x= i;
    }
    friend void com_obj(object o,object p);
};
void com_obj(object o,object p)
{
    if(o.x > p.x)
    cout<<"First object is larger ."<<endl;
          else 
    cout<<"Second object is larger ."<<endl;
}
int main ()
{
    object a,b;
    int i;
    cout<<"Enter the first number : ";
    cin>>i;
    a.input(i);
    cout<<"Enter the  second number : ";
    cin>>i;
    b.input(i);
    com_obj(a,b);
    return 0;
}