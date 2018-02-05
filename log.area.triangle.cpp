//log

#include<iostream>
#include<string>
using namespace std;

class Nazs
{
	private:
		int x, y;
	
	public:
		void set_values(int, int);
		int area()
		{
			return (x*y)/2;
		}
		
};
void Nazs::set_values(int base, int height)
{
	x=base;
	y=height;
}
int main()
{
	Nazs omg;
	omg.set_values(6,12);
	cout<<"Area of Triangle: "<<omg.area();
	return 0;
}
