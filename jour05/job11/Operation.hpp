#ifndef OPERATION_HPP
#define OPERATION_HPP

class Operation {
private:
    double valeur;
public:
    Operation(double val);
    Operation operator+(const Operation& other) const;
    Operation operator-(const Operation& other) const;
    Operation operator*(const Operation& other) const;
    Operation operator/(const Operation& other) const;
    void afficher() const;
};

#endif
