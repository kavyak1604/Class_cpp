#include <iostream>
using namespace std;
class rectangle{
    private:
    double length=3;
    double width=4;
    public:
double area();
};
double rectangle::area()
{
	return length*width;
}
class cuboid:public rectangle{
	private:
		double height=3;
	public:
		double volume();
};
	double cuboid::volume()
		{
			return area()*height;
			
		}
main()
{
    rectangle R;
    cuboid C;
    cout<<"area of rectangle is:"<<R.area()<<endl;
    cout<<"volume of cuboid is:"<<C.volume()<<endl;
    cout<<"area is:"<<C.area()<<endl;
}
/*area of rectangle is:12
volume of cuboid is:36
area is:12/*
