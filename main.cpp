#include <iostream>
using namespace std;
class Shape{
    public: 
    virtual double perimeter() const = 0;
    };
class Rectangle: public Shape{
    private:
    double width;
    double height;
    public:
    Rectangle(double w,double h):
    width(w), height(h){}
    double perimeter()const override{
        return 2*(width+height);
        }
    };
int main(){
    Rectangle rect(5,3);
    cout<<"Perimeter rectangle: "<<rect.perimeter()<<endl;
    return 0;
    }
