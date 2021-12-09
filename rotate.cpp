#include<iostream>
using namespace std;
class obj
{
    public : 
       int i ,j;
       void input(int x,int y)
       {
        i= x;
        j= y;
       }
       obj operator ++(obj key)
       {    obj k;
          k.i= key.i++ ;
          k.j= key.j++ ;
          return  k;
       }
       void display()
       {
           cout<<"The values are : "<<i<<"  "<<j;
       }
};
int main()
{
    obj obj1,obj2;
    obj1.input(2,5);
    
}