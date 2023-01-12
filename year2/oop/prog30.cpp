#include<iostream>
#include<math.h>

using namespace std;

class Point {
private:
double x;
double y;

public:
Point(double x = 0, double y = 0) : x(x), y(y) {}
double getX() { return x; }
double getY() { return y; }
void setX(double x) { this->x = x; }
void setY(double y) { this->y = y; }
double distance(Point other) {
double xDiff = x - other.x;
double yDiff = y - other.y;
return sqrt(xDiff * xDiff + yDiff * yDiff);
}
friend Point operator-(Point p1, Point p2) {
return Point(p1.getX() - p2.getX(), p1.getY() - p2.getY());
}

};

int main() {
Point p1(2, 3);
Point p2(3,4);
Point dif = p1-p2;
cout<<dif.getX()<<dif.getY();

}
