//Passing Arguemnt by value, reference

#include <iostream>
#include <cmath> //sin(), cos()

using namespace std;

void addOne (int &y)
{
	cout<<"In Function - "<<y<<" " <<&y <<endl;
}

void getSinCos(double degree, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592 /180.0; //1회만 호출
	const double radians = degree *pi; //계산값이 바뀌지 않는 것
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);

}

int main()
{
	int x= 3;

	cout<<"In main() - "<<x<<" " <<&x <<endl;
	//addOne(3);
	addOne(x);	


	//2
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);
	cout <<sin <<" "<<endl;



	return 0;
}