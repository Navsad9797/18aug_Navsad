#include <iostream>
using namespace std;
inline int multi(int a, int b)
	{
    	cout << "The Multiplication is: "<< a * b << endl;
	}
inline int cube(int a)
	{
    	cout << "The Cube is: " << a * a * a << endl;
	}
int main()
{
	multi(5, 2);
    cube(5);
}
