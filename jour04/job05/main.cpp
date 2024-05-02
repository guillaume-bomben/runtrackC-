#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p1;
    p1.x = 5;
    p1.y = 10;
    Point* ptrPoint = &p1;
    ptrPoint->x = 15;
    ptrPoint->y = 20;
    std::cout << "Nouvelles valeurs de x et y : " << std::endl;
    std::cout << "x = " << ptrPoint->x << ", y = " << ptrPoint->y << std::endl;

    return 0;
}
