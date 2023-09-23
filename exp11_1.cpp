#include<iostream>
using namespace std;

class Cube {
    public:
    float l=3.0, w=5.0, h=7.0;
};

int main() {
    Cube c1;
    float vol=c1.l*c1.w*c1.h;
    cout<<"Volume of cuboid = "<<vol;
}