#include <iostream>
using namespace std;

class Figure {
    public:
    
    int area(int h, int b) {
        return 0.5*b*h;
    }

    int area(int l, int b, int dummy) {
        return l*b;
    }

    float area(int r) {
        return 3.14*r*r; 
    }

    private:
    int h, b, l, r;

};

int main() {
    Figure AreaOp;
    int choice, height, base, length;
    
    cout << "Choose the Figure (0-Triangle, 1-Rectangle, 2-Circle):";
    cin >> choice;

    if (choice == 0) {
        cout << "Height:";
        cin >> height;
        cout << "Base:";
        cin >> base;
        cout << "Area of Triangle:" << AreaOp.area(height,base);
    }

    else if (choice == 1) {
        cout << "Length";
        cin >> length;
        cout << "Breadth";
        cin >> base;
        cout << "Area of Rectangle:" << AreaOp.area(length,base,0);
    }

    else if (choice == 2 ) {
        cout << "Radius";
        cin >> length;
        cout << "Area of Circle:" << AreaOp.area(length);
    }
    
    else {
        cout << "Enter a valid choice";
    }
}