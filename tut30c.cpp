#include <iostream>
#include <math.h>
using namespace std;
class point
{
    friend void difference(point, point);
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
void difference(point o1, point o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.x - o1.y;
    double dist = sqrt((x_diff * x_diff)) + ((y_diff * y_diff));
    cout << "Distance is: " << dist << "units";
}

int main()
{
    point p1(1, 2);
    p1.display();

    point p2(4, 3);
    p2.display();

    difference(p1, p2);

    return 0;
}