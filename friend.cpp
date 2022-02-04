#include<iostream>
using namespace std;
class square
{
    private:
            int n;
    public:
            square(int n)
            {
                this->n=n;
            }
            friend int find(square);
            void display(int s)
            {
                cout<<"The area of the square is: "<<s;

            }

};
int find(square ob)
{
    int s;
    s=ob.n*ob.n;
    return s;
}
int main()
{
    int n;
    cout<<"Enter the side of the square: ";
    cin>>n;
    square obj(n);
    int s=find(obj);
    obj.display(s);
    return 0;
}