#include<iostream>
using namespace std;
class volume
{
    float vol;
    public: 
      volume(float side)
      {
        vol = side*side*side;
        cout<<"The volume of cube : "<<vol<<endl;   
      }
     volume(float r, float h) 
     {
         vol = 3.14*r*r*h ;
         cout<<"The volume of cylinder : "<<vol<<endl;  
     }
    volume(float len, float br, float hgt) 
    {
        vol = len*br*hgt;
        cout<<"The volume of Cubic : "<<vol<<endl;  
    }
 };
int main()
{
    float side, r,h,len ,br,hgt;
    cout<<"Enter the side of cube : ";
    cin>>side;
    cout<<"Enter the radius and length of cylinder : ";
    cin>>r>>h;
    cout<<"Enter the length breath and hight of cubic : ";
    cin>>len>>br>>hgt;
    volume cube(side),cylinder(r,h),cubic(len,br,hgt);
    return 0;
}