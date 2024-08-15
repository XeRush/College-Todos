#include <iostream>
using namespace std;

class Circle {
    public:
    void peri(int rad);
    void area(int rad);

    private:
    int rad;
    const float pi = 3.1415926535897932;
};

void Circle :: peri(int rad) {
    int peri;
    peri = 2*pi*rad;

    cout << "The Perimeter of the Circle is " << peri << "\n";
}

void Circle :: area(int rad) {
    int area;
    area = pi*rad*rad;

    cout << "The Area of the Circle is " << area << "\n";
}

int main() {
    Circle opr;
    int r;
    
    cout << "Enter the Radius Value:";
    cin >> r;

    opr.peri(r);
    opr.area(r);

}