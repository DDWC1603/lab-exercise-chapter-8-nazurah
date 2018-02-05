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
			return (x*y);
		}
		
};
void Nazs::set_values(int a, int b)
{
	x=a;
	y=b;
}
int main()
{
	Nazs omg;
	omg.set_values(3,4);
	cout<<"area: "<<omg.area();
	return 0;
}
