#include<iostream>
using namespace std;
template <class T>


		
	    int swap(int x,int y)
		{
			
			x=x+y;
			y=x-y;
			x=x-y;
		
		}

int main()
{
	int x,y;
			cout<<"enter the first values:";
			cin>>x;
			cout<<"enter the second values:";
			cin>>y;
			swap(x,y);
			cout<<"first number x = "<<x;
			cout<<endl<<"second number y = "<<y;
			return 0;
	
}
