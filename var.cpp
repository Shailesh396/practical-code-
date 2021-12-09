#include<iostream>
using namespace std;
class A
{
public:
static int count ;
    A()
      {  count++;
      }
 };
int  A::count =0;
int main ()
{
   A b,c,d;
cout<<d.count;
}