#include<iostream>
using namespace std;
#include<stdlib.h>
class employee
{  public: 
      string name ;
      int  id;
      int salary ;
      void insert(){
          cout<<"Enter the details: ";
          cout<<"NAME: ";
          cin>>name;
          cout<<"ID : ";
          cin>>id;
          cout<<"SALARY : ";
          cin>>salary;
      }
      void search(string n)
      {
        if (n== name)
         display();
      }
      void searchid(int search_id )
      {
         if (search_id == id)
         display();
      }
      void display()
      {
          cout<<"Name : "<<name<<"\tID : "<<id<<"\tSalary : "<<salary<<endl;
      }
};
int main ()
{  
    int n;
    cout<<"Enter the no of emplyee : ";
    cin>>n;
    employee e[n];
    for (int i=0 ; i< n; i++)
             e[i].insert();
             int o, search_id ;;
              string emp ;
             while(1)
             {
    cout<<"choose  the option : "<<endl<<"1.Search by name : "<<endl<<"2.search by id "<<endl<<"3.Display the list : "<<endl ;
    cin>>o;
  switch(o)
      {
       case 1 :     
                    cout<<"Enter the name to search : ";
                   cin>>emp;
                    for(int i=0 ; i<n;i++)
                    e[i].search(emp);
                           break;
      case 2:       cout<<"Enter the id to search : ";
                    cin>>search_id;
                    for(int i=0;i<n;i++)
                    e[i].searchid(search_id);
                    break;
    case 3:         cout<<"the detailes are : "<<endl;   
                    for(int i=0;i<n;i++)
                    e[i].display();
                    break ;
    defalt:         return 0;    
   }
}
}