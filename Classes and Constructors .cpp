#include <iostream>    // using IO functions
#include <string>      // using string
#include<math.h>
using namespace std;
#define _USE_MATH_DEFINES
 class Circle
 {
 private:
     /* data members */
    double radius; 
    string color;
 public:
 /*Circle(double r , string c): radius(r),color(c){ } Member Initializer List Provides no logic options */
 Circle(double r=1.5,string c="Red") {
 radius=r;
 color=c;
 }
    //double getRadius() const { return radius; } getters must be const  
	//string getColor() const { return color; } getters must be const
    double setRadius(double RadiusSetter) { radius=RadiusSetter;return 0;};
    string setColor(string ColorSetter) {color=ColorSetter;return 0;};

    string getColor() {

        return color;
    }
     double getRadius(/* args */){
         return radius;
     }
     double getArea() {

         //return radius*radius*3.1416; 
         return radius*radius*M_PI; // Including PI using math.h
     }

     

 };
 

int main() {
 // Construct a Circle instance
 Circle c;
 c.setRadius(2.5);
 c.setColor("RED");
 cout<<"Setters Test=" <<c.getRadius()<<endl;
   Circle c1(1.2, "blue");
   cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
        << " Color=" << c1.getColor() << endl;
 
   // Construct another Circle instance
   Circle c2(3.4); // default color
   cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
        << " Color=" << c2.getColor() << endl;
 
   // Construct a Circle instance using default no-arg constructor
   Circle c3;      // default radius and color
   cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
        << " Color=" << c3.getColor() << endl;


   return 0;
}
