#include<iostream>
using namespace std;
class time_add
{
   public : 
        int h=0,m=0,s=0;
        void entertime()
        {
            cout<<"Enter the time in HH MM SS form : ";
            cin>>h>>m>>s;
        }
        void addtime(time_add c)
        {   
            s += c.s;
            if(s>=60)
            {
                m++;
                s-=60;
            }
            m +=c.m;
            if(m>=60)
            {
                h++;
                m-=60;
            }
            h += c.h;
            while(h<12)
            {
                h-=12;
            }
            }
            void display()
            {  
                cout<<"After addition of time : ";
                cout<<"HOUR : MINUTE :SECOND   "<<h<<":"<<m<<":"<<s<<endl;
            }
};
int main()
{
   time_add t1,t2;
    t1.entertime();
    t2.entertime();
    t2.addtime(t1);
    t2.display();
    return 0;
}
