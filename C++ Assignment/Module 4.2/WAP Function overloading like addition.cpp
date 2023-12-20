#include <iostream>
using namespace std;
class Cal
{
    int a,b,c,d;
public:
    void Maths(int a,int b,int c);
    void Maths(int a,int b);
    void Maths(int a,int b,int c,int d);
};
void Cal::Maths(int a, int b, int c)
	{
    	cout << "The Addition is " << a + b + c << endl;
	}
	void Cal::Maths(int a, int b)
	{
    	cout << "The Subtraction is " << a - b << endl;
	}
	void Cal::Maths(int a, int b, int c, int d)
	{
    	cout << "The Multipication is "<<a*b*c*d<<endl;
	}
	
int main()
{
    Cal ques1, q2 , q3;
    ques1.Maths(1, 2, 3);   
    q2.Maths(5,4);         
    q3.Maths(2,5,1,2);   
}
