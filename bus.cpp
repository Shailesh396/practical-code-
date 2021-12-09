#include<iostream>
using namespace std;
class bus
{
    int busno,fare,distance;
    string to,from;
    char type;
    public:
    bus()
    {
        cout<<"Enter the bus no. : ";
        cin>>busno;
        cout<<"Enter the Sourse and destination : ";
        cin>>from>>to;
        cout<<"Enter the distace : ";
        cin>>distance;
         cout<<"Enter type of veicle (e,o,l) : ";
        cin >>type;
        cal_fare();
    }
    void cal_fare()
    {
       
        if(type== 'o'||type =='O')
            fare = distance*15;
        else if(type == 'e'|| type =='E')
           fare = distance*20;
        else if(type == 'l'|| type =='L')
           fare = distance*24;
    }
    ~bus()
    {
       cout<<busno<<"\t"<<from<<"\t"<<to<<"\t"<<distance<<"\t"<<type<<"\t"<<fare<<endl;
    }
};
int main()
{
    cout<<"Enter the no of Buses : ";
    int n;
    cin>>n;
    bus  obj[n];
    cout<<"bus__no\tsourse \tdestination \tdistance \ttype \tfare"<<endl;
    return 0; 
}