#include<iostream>
using namespace std;
class S1
{
    protected: 
                string x;
    public:
                void Grandfather()
                {
                    cout<<"Enter Grandfather's name: "<<endl;
                    getline(cin,x);
                }

};
class S2:public S1
{
    protected: 
                string y;
    public:
                void Father()
                {
                   
                    cout<<"Enter Father's name"<<endl;
                    getline(cin,y);
                    cout<<"Son of: "<<x<<endl;
                }

};
class S3:public S1
{
    protected:
                string z;
    public:
                void Grandson()
                {
                    cout<<"Enter the name of the son"<<endl;
                    getline(cin,z);
                    cout<<"son of: "<<x<<endl;
                }
};
int main()
{
    S2 ob1;
    S3 ob2;
    ob1.Grandfather();
    ob1.Father();
    ob2.Grandfather();
    ob2.Grandson();
    return 0;
}