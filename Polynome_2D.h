#ifndef POLYNOME_2D_H_INCLUDED
#define POLYNOME_2D_H_INCLUDED

class Polynome_2D
{
public:
    static void main();
    Polynome_2D();
    Polynome_2D(double, double, double);
    void Homothetie(double);
    Polynome_2D operator+(const Polynome_2D&);
    void Resolution();
    void afficher();
private:
    double a, b, c;
};



#endif // POLYNOME_2D_H_INCLUDED
