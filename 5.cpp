#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
    double x, y; 
public:
    Vector(double x_v = 0, double y_v = 0) : x(x_v), y(y_v) {}

    Vector add(const Vector &v) const {
        return Vector(x + v.x, y + v.y);
    }

    void print() const {
        cout << "Vector(" << x << ", " << y << ")" << endl;
    }

    void dir() const {
        double magnitude = sqrt(x * x + y * y);
        cout << magnitude << endl;
    }
};

int main() {
    double x,y；
    cout <<"请输入第一个向量的数据(x,y):" << endl;
    cin >> x >> y;
    Vector v1(x,y);
    cout<<x<<y;
    cout << "Vector v1: ";
    v1.print();
    return 0;
}
