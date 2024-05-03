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

    void setPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getPositionX() const {
        return this->x;
    }

    int getPositionY() const {
        return this->y;
    }

    void deplacer(int delta_x, int delta_y) {
        this->x += delta_x;
        this->y += delta_y;
    }

    std::string getNom() const {
        return this->name;
    }

    void setNom(const std::string& name) {
        this->name = name;
    }

    void afficherPosition() const {
        std::cout << "Joueur : " << this->name << ", Position : (" << this->x << ", " << this->y << ")" << std::endl;
    }
};
