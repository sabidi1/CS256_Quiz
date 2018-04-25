/*
 * Circle.s
 *
 *  Created on: Apr 24, 2018
 *      Author: Zeeshan
 */


//
//  Circle.cpp
//
//
//  Created by Zeeshan Abidi on 4/24/18.
//

#include <stdio.h>
using namespace std;
class circle {
    private:
    double radius;
    const double pi = 3.14159

    public:
    Circle()
    {
        radius = 0.0;
        pi = 3.14159
    }
    void setRadius (double r){
        radius = r;
    }
    double getRadius()
        return radius;
    }
    double getArea(){
        double area;
        area = pi * (radius * radius);
        return area;
    }
    double getDiameter (){
        double dia;
        dia = 2 * radius;
        return dia;
    }
    double getCircumference (){
        double circum;
        circum = 2 * pi * radius;
        return circum;
    }

int main()
{
    double radius;
    //ask user for radius
    cout<< "Enter the radius of the circle: ";
    cin >> radius;



    //create circle object
    Circle c1;
    c1.setRadius(radius);

    //show area , diameter and circumference
    cout << " radius of the circle" << c1.getRadius() << endl;

    cout<< "area of the circle: "<< c1.getArea()<< endl;
    cout<< "Diameter of the circle: "<< c1.getDiameter()<< endl;
    cout <<"Circumference of the circle: "<< c1.getCircumference() << endl;


    Circle c2(radius);
    cout<<"radius of the circle: "<< c1.getRadius() << endl;

}



