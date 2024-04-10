/* Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. 
Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. 
Each shape should have methods for calculating area and perimeter specific to its geometry.
*/

#include<iostream>

using namespace std;

//Changes made by Nehal
class Shape{
	float area, perimeter;
	public: 
	void Enclosed()
	{
		cout<<"All shape are enclosed\n"<<endl;
	}
	void Area()
	{
		cout<<"\n------------Area-----------"<<endl;
	}
	void Perimeter()
	{
		cout<<"\n------------Perimeter-----------"<<endl;
	}
};

class Circle: public Shape{
	int radius=15;
	public: 
	void displaycircle()
	{
		cout<<"Circle nhaving radius "<<radius<<" have"<<endl;
	}
	float a_circle(){
		
		return 3.14*radius*radius;
	}
	float p_circle(){
		return 2*3.14*radius;
	}
};

class Triangle: public Shape{
	
	float base=20, height=30;
	public:
		
			void displaytriangle()
	{
		cout<<"Traingle having base and height "<<base<<" "<<height<<" have"<<endl;
	}
		
	float a_triangle(){
		return 0.5*base*height;
	}
	float p_triangle(){
		return 3*base;
	}
};
class Rectangle: public Shape{
	float length=10, breadth=50;
		public:
			void displayrectangle()
	{
		cout<<"Rectangle having length and breadth "<<length<<" "<<breadth<<" have"<<endl;
	}
			
	float a_rectangle(){
		return length*breadth;
	}
	float p_rectangle(){
		return 2*length*breadth;
	}
};
int main()
{
	Shape s;
	s.Enclosed();
	
	Circle c;
	c.displaycircle();
	c.Area();
	cout<<"Area of Circle: "<<c.a_circle()<<endl;
	c.Perimeter();
	cout<<"Perimeter of Circle: "<<c.p_circle()<<endl;
	
	Triangle t;
	t.displaytriangle();
	t.Area();
	cout<<"Area of Triangle: "<<t.a_triangle()<<endl;
	t.Perimeter();
	cout<<"Perimeter of Triangle: "<<t.p_triangle()<<endl;
	
	Rectangle r;
	r.displayrectangle();
	r.Area();
	cout<<"Area of Rectangle: "<<r.a_rectangle()<<endl; 
	r.Perimeter();
	cout<<"Perimeter of Rectangle: "<<r.p_rectangle()<<endl;
	
	return 0;
}
