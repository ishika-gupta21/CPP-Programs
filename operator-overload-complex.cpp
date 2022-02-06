#include<iostream>
using namespace std;
class complex
{
 int real,img;
 public:
 complex(){ }
 complex(int r, int i)
 {
 real=r;
 img=i;
 }
 void operator +(complex c2)
 {
 complex c3;
 c3.real=real+c2.real;
 c3.img=img+c2.img;
 cout<<c3.real<<"+ ("<<c3.img<<") i"<<endl;
 }
 void operator -(complex c2)
 {
 complex c3;
 c3.real=real-c2.real;
 c3.img=img-c2.img;
 cout<<c3.real<<"+ ("<<c3.img<<") i"<<endl;
 }
 void operator ==(complex c2)
 {
 if(real==c2.real && img==c2.img)
 cout<<"Both are equal\n";
 else
 cout<<"Both are not equal\n"<<endl;
 }
};
int main()
{
 int a,b,c,d;
 cout<<"Enter the real and imaginary part of first complex number: ";
 cin>>a>>b;
 cout<<"Enter the real and imaginary part of second complex number: ";
 cin>>c>>d;
 complex c1(a,b),c2(c,d);
 c1+c2;
 c1-c2;
 c1==c2;
 return 0;
}
