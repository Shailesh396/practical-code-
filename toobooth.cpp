#include<iostream>
using namespace std;
class tollbooth
{
    unsigned int no_car;
    double total_money;
    public:
      void zero()
      {
          no_car =0;
          total_money =0;
      }
      void paying_car()
      {
          no_car++;
          total_money += 50;
      }
      void nopay_car()
      {
          no_car++ ;
      }
      void display()
      {
          cout<<"The number of cars is : "<<no_car<<endl;
          cout<<"the total collection is : "<<total_money<<endl;
      }
};
int main ()
{
    int option ;
    tollbooth details;
    cout<<"Choose the option \n1.To initilize zero\n2.for paying car\n3.for nonpayable car\n4.to display\n5.to exit\n";
    while(1)
    {
    cout<<"the option : ";
     cin>>option ;
     switch(option)
     {
         case 1: details.zero();
                 break;
        case 2 : details.paying_car();
                 break;
        case 3: details.nopay_car();
                break;
        case 4:  details.display();
                break;
        case 5 : return 0;
     }
    }
}