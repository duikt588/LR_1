#include <iostream>
using namespace std;

class AdHocSquare {
public:
    AdHocSquare(double s) { side = s; }
    void set_side(double s) { if (s >= 0) side = s; }
    double get_area() { return side * side; }
private:
    double side;
};
class LazySquare {
public:
    LazySquare(double s) {
        side = s;
        area = s * s;
        side_changed = false;
    }
    void set_side(double s) {
        if (s >= 0) {
            side = s;
            side_changed = true;
        }
    }
    double get_area() {
        if (side_changed) {
            area = side * side;
            side_changed = false;
        }
        return area;
    }
private:
    double side;
    double area;
    bool side_changed;
};
int main() {
    double Size;
    cout << "Size: ";
    cin >> Size;
    AdHocSquare sq1(Size);
    LazySquare sq2(Size);
    cout << "AdHoc area: " << sq1.get_area() << endl;
    cout << "Lazy area: " << sq2.get_area() << endl;
    cout << "New size: ";
    cin >> Size;
    sq1.set_side(Size);
    sq2.set_side(Size);
    cout << "New Area (AdHoc): " << sq1.get_area() << endl;
    cout << "New Area (Lazy): " << sq2.get_area() << endl;
    return 0;
}
