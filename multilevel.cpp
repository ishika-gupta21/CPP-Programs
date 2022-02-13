#include<iostream>
using namespace std;
class A
{
    protected: 
                string x;
    public:    
                void AS()
                {
                cout<<"Enter name:"<<endl;
                getline(cin,x);
                }

};
class B:public A
{
    protected:
                int y;
    public:
                void BS()
                {
                cout<<"Enter roll number:"<<endl;
                cin>>y;
                }
};
class C:public B
{
    protected: 
                int z;
    public:
                void CS()
                {
                cout<<"Enter year of course:"<<endl;
                cin>>z;
                }
                void Display()
                {
                    cout<<"Name = "<<x<<endl;
                    cout<<"Roll Number = "<<y<<endl;
                    cout<<"Year = "<<z<<endl;
                }
};
int main()
{
    C ob1;
    ob1.AS();
    ob1.BS();
    ob1.CS();
    ob1.Display();
    return 0;

}