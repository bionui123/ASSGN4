////////////////////////////////////////////////////////////////////////////////
//
//  point.cpp
//      Contains the class definition for a simple point class.
//
//      Written by Alexandri Zavodny, University of Notre Dame, for use in CSE40166/60166, Computer Graphics.
//
//  August 2010
//
////////////////////////////////////////////////////////////////////////////////

#ifndef __GLIDAR_POINT_H
#define __GLIDAR_POINT_H

class Point
{
public:

// CONSTRUCTORS / DESTRUCTORS

    Point()
    {x=y=z=0.0;}

    Point(double a, double b, double c)
    { x = a; y = b; z = c; }

// MISCELLANEOUS

    double magSq();
    double mag();
    void normalize();
    double at(int i);

    void glVertex();

Point& operator+=(Point rhs);
Point& operator-=(Point rhs);
Point& operator*=(float rhs);
Point& operator/=(float rhs);

// MEMBER VARIABLES

    double x,y,z;
};

// RELATED OPERATORS

Point operator*(Point a, float f);
Point operator/(Point a, float f);
Point operator/(float f, Point p);
Point operator*(float f, Point a);
Point operator+(Point a, Point b);
Point operator-(Point a, Point b);


Point cross(Point a, Point b);
double dot(Point a, Point b);

#endif
