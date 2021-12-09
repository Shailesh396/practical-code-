#include<iostream>
using namespace std;
class addition
{
   int real ,image;
   public:
     void input()
     {
         cout<<"Enter the real and image part of number : ";
         cin>>real>>image;
     }
    friend void operator +(addition c,addition d)
     {
       real = c.real + d.real;
       image = c.image + d.image ;
     }
     void display()
     {
         cout<<"The addition of numbefr is : "<<endl<<real<<" + "<<image<<"i"<<endl;
     }
};
int main()
{
    addition c,d,e;
    c.input();
    d.input();
    e = c+ d ;
    e.display();
    return
}