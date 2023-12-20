#include <iostream>
using namespace std;
class Standard10th
{
    int Eng,Maths;

public:
    Standard10th() {}
    Standard10th(int Eng, int Maths)
    {
        this->Eng = Eng;
        this->Maths = Maths;
    }
    void display()
    {
        cout << Eng << " " << Maths << endl;
    }
	Standard10th operator+(Standard10th studs)
    {
        Standard10th temp;
        temp.Eng = Eng + studs.Eng;
        temp.Maths = Maths + studs.Maths;
		return temp;
    }
};
int main()
{
    Standard10th stud1(80, 70), stud2(60, 50);
    Standard10th stud3 = stud1 + stud2;
    stud3.display();
}
