#include <iostream>
using namespace std;

class rect {
    public:
    void peri(int length, int breadth);
    void area(int length, int breadth);
    
    private:
    int peri_;
    int area_;
};

void rect :: peri(int length, int breadth) {
    peri_ = 2*(length + breadth);
    cout << "The perimeter is " << peri_ << endl;
}

void rect :: area(int length, int breadth) {
    area_ = length * breadth;
    cout << "The area is " << area_ << endl;
}

int main() {
    rect opr;
    
    int len, bread;
    cout << "Enter the length";
    cin >> len;
    cout << "Enter the breadth";
    cin >> bread;
    
    opr.peri(len,bread);
    opr.area(len,bread);

  return 0;
}