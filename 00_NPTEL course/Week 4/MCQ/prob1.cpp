#include <iostream>
using namespace std;

class Point_2D {
    int x, y;

public:
    Point_2D(int r = 0, int i = 0) : x(r), y(i) {}

    // Line-1
    Point_2D& operator <<(const Point_2D& c) {
        cout << x + c.x << ", " << y + c.y << endl;
        return *this;
    }

    // Friend declaration
    friend Point_2D& operator<<(ostream& os, Point_2D& c);
};

// Line-2
Point_2D& operator<<(ostream& os, Point_2D& c) {
    cout << c.x << ", " << c.y << endl;
    return c;
}

int main() {
    Point_2D c1(2,5), c2(4,6);
    cout << c1 << c2;
    return 0;
}
