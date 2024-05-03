#include <iostream>

class Joueur {
private:
    int x;
    int y;
    std::string name;

public:
    Joueur() : x(0), y(0), name("Sans nom") {}
    Joueur(int x, int y) : x(x), y(y), name("Sans nom") {}
    Joueur(int x, int y, const std::string& name) : x(x), y(y), name(name) {}


    void setPosition(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }

    void afficherPosition() const {
        std::cout << "Joueur : " << name << ", Position : (" << x << ", " << y << ")" << std::endl;
    }

    void deplacer(int delta_x, int delta_y) {
        x += delta_x;
        y += delta_y;
    }
};
