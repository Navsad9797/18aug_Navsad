#include <iostream>
using namespace std;
class Swap
{
 	public:   

    // variable declaration
    int a,b;
    friend int data(Swap & s1);
    void display()
    {
		cout << "Enter the first number : ";
    	cin >> a;
    	cout << "Enter the second number : ";
    	cin >> b;
	


 
    	// without using any extra variable
    	a = a + b;
    	b = a - b;
    	a = a - b;

    	cout << "\nFirst Number = " <<a;
    	cout << "\nSecond Number = " <<b; 
	}
};
int main()
{
	Swap s1 ;
	s1.display();
}

