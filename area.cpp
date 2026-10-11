#include <iostream>
using namespace std;

class Rectangle

private:

double width = 0;
double length = 0;

public:
double get_width() const{
    return width;
}
double get_length() const{
    return length;
}
void set_width(double w){
    width = w;
}
void set_length(double l){
    length = l;
}
double get_perimeter() const{
return 2 * (width + length);
}
double get_area() const{
    return width * length;
}

int main(){

Rectangle rectangle1;
rectangle1.set_width(4);
rectangle1.set_length(8);

cout << "Rectangle 1 \n" << "Width:" << rectangle1.get_width() << "\n" << "Length:" << rectangle1.get_length() << "\n";

cout << "Area:" << rectangle1.get_area() << "Perimeter:" <<  rectangle1.get_perimeter() << "\n";
    return 0;
}
