#include<iostream>
using namespace std;
class Maximum {
	public:
   		int x,y;
   		friend void find(Maximum t);
		void input() 
		
	{
       	cout<<"Enter first number x=";
       	cin>>x;
       	cout<<"Enter second number y=";
       	cin>>y;
   	}

};

void find(Maximum t)
 {
   if (t.x>t.y) 
   {
       cout << "Largest is:"<<t.x;
   } 
   else 
   {
       cout << "Largest is:"<<t.y;
   }
}

int main() 
{

   Maximum t;
   t.input();
   find(t);
	return 0;
}
