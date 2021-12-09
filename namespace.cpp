#include<iostream>
using namespace  std;
namespace name1
{
    int x = 2;
    int flow()
    {
        cout<<"using the first namespace \n";
        return x;
    }
}
namespace name2
{
    int x = 4;
    int flow()
    {   
        cout<<"using the second namespace \n";
        return x;
    }
}
int main()
{
    int x; 
    x= name1::flow();
    cout<<"The value of x : "<<x<<endl;
    x= name2::flow();
    cout<<"The value of x : "<<x<<endl;
    return 0;
}