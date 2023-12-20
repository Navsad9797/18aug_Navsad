#include <iostream>
using namespace std;

class Cal
{
    int a,b;

public:
    void setData(int x,int y)
        {
            a = x;
            b = y;
        }
        void Addition()
        {
            cout<<"The Addition of: "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
        void Subtraction()
        {
            cout<<"The Subtraction of: "<<a<<" and "<<b<<" is "<<a-b<<endl;
        }
        void Multiplication()
        {
            cout<<"The Multiplication of: "<<a<<" and "<<b<<" is "<<a*b<<endl;
        }    
        void Division()
        {
            cout<<"The Division of: "<<a<<" and "<<b<<" is "<<a/b<<endl<<endl;
        }      
};
int main()
{
    Cal n1, n2, n3, n4;
	n1.setData(10,20);
    n1.Addition();
    n1.Subtraction();
    n1.Multiplication();
    n1.Division();
    return 0;
}
