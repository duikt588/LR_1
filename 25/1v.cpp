#include <iostream>
using namespace std;

class Tree {
public:
    virtual void draw() {
        cout << "Base tree" << endl;
    }
};
class TreeType1 : public Tree {
public:
    void draw() {
        cout << " /\\" << endl;
        cout << "//\\\\" << endl;
    }
};
class TreeType2 : public Tree {
public:
    void draw() {
        cout << " /\\" << endl;
        cout << "/**\\" << endl;
    }
};
class TreeType3 : public Tree {
public:
    void draw() {
        cout << " /\\" << endl;
        cout << "/++\\" << endl;
    }
};
int main() {
    Tree* forest[3];
    forest[0] = new TreeType1();
    forest[1] = new TreeType2();
    forest[2] = new TreeType3();
    for (int i = 0; i < 3; i++) {
        cout << "Drawing " << i + 1 << ":" << endl;
        forest[i]->draw();
    }

    return 0;
}
