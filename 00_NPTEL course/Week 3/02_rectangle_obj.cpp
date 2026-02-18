# include <iostream>

using namespace std;

class Point{
    public:
    int x, y;
};

class Rect{
    public:
    Point TL, BR;
};

int main(){
    Rect r = {{0,2}, {5,7}};
    cout << "Top Left Point (TL): ("<< r.TL.x << ", " << r.TL.y << ")" << endl;
    
    cout << "Bottom Right Point (BR): ("<< r.BR.x << ", " << r.BR.y << ")" << endl;

    return 0;
}