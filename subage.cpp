#include<iostream>
using namespace std;
class employee
{
    string name ,code;
    int age;
    public:
    void input(string n,int a,string c)
    {
        name = n;
        age= a;
        code= c;
    }
    void display()
    {
     cout<<"name : "<<name<<endl<<"code : "<<code<<endl<<"age : "<<age<<endl;
    }
    friend int operator -(employee, employee);
};
int operator -(employee c,employee d)
{
    int diff;
    diff = c.age -d.age;
    if (diff <0)
       diff= 0-diff;
    return diff;
}
int main ()
{
    employee x,y;
     x.input("Nitin", 25, "E001"); 
     y.input("Amit", 30, "E002"); 
     int diff = x-y;
     cout<<"The age difference is : "<<diff;
     return 0;
}