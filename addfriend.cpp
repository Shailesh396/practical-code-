#include<iostream>
using namespace std;
  
class Complex {
private:
    int real, imag;
public:
    Complex(int r, int i) 
     {
       real = r; 
       imag = i;
       }
    void print()
     { 
         cout << real << " + i" << imag << endl;
     }
  friend Complex operator + (Complex , Complex );
};  
Complex operator + (Complex c, Complex d)
{
     return Complex(c.real + d.real, c.imag + d.imag);
}  
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; 
    c3.print();
    return 0;
}