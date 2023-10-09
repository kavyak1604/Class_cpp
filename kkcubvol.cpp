#include <iostream>
using namespace std;

class Cuboid {
private:
    double height;
    double width;
    double length;

public:
    Cuboid(double height, double width, double length) {
        this->height = height;
        this->width = width;
        this->length = length;
    }

    double volume() {
        return height * width * length;
    }
};

int main() {
    double height, width, length;
    cout<<"enter the height:";
    cin >> height;
    cout<<"enter the weight:";
    cin>>width;
    cout<<"enter the length:";
    cin>>height;
    
    Cuboid cuboid(height, width, length);
    double volume = cuboid.volume();

    cout << volume << endl;

    return 0;
}
/*enter the height:34
enter the weight:26
enter the length:12
1.54148e-321/*
