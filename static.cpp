#include<iostream>
using namespace std;
class object
{
       public :
        static int  count ;
     object()
     {
         count++;
     }
    static int count_obj()
    {
       return count; 
    }
};
int object::count =0;
int main()
{   
    cout<<"before inlitlize object no of object : "<<object::count_obj()<<endl; 
    object obj1;
    object obj2;
    cout<<"After declare object no of object : "<<object::count_obj()<<endl;
    return 0;
}