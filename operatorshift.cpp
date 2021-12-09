#include<iostream>
using namespace std;
class bitshift
{
    public:
    int i,j;
     void input()
    {
      cout<<"enter the value to right bitwise shifting : ";
      cin>>i;
      cout<<"Enter the value left bitwise shifting : ";
      cin>>j;
    }
    bitshift operator >>(bitshift x)
    {
             x.i = i ;
        return x;
    }
    bitshift operator <<(bitshift y )
    {
              y.j= j ;
             return y;
    }
    void display()
    {
        cout<<"After shifting the value is : ";
        cout<<i<<" "<<j<<endl;
    }
};
int main()
{
    bitshift x,y;
    x.input();

}