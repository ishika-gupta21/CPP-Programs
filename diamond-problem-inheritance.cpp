#include<iostream>
using namespace std;
class Person 
{
    public:
             void Per1()  
            { 
                cout << "Person called" << endl; 
            }
};
 
class Father : virtual public Person 
{ 
    public:
            void Fat1()
            {
                cout << "Father called" << endl;
            }
};
 
class Mother : virtual public Person 
{ 
    public:
            void Mot1() 
            {
                cout << "Mother called" << endl;
            }
};
 
class Child : public Father, public Mother  
{ 
    public:
            void Chi1()   
            {
                cout << "Child called" << endl;
            }
};
 
int main() 
{
    Child ob;
    ob.Chi1();
    ob.Fat1();
    ob.Mot1();
    ob.Per1();
    return 0;
}