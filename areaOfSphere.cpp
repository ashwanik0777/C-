#include <iostream>
using namespace std;
class Sphere
{
private:
    double radius;

public:
    Sphere(double radius)
    {
        this->radius = radius;
    }
    double surfaceArea()
    {
        return 4 * 3.14159 * radius * radius;
    }
    double volume()
    {
        return (4 / 3) * 3.14159 * radius * radius * radius;
    }
};

int main()
{
    Sphere sphere(5);
    cout << "Surface Area: " << sphere.surfaceArea() << endl;
    cout << "Volume: " << sphere.volume() << endl;
    
    return 0;
}