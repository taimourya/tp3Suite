#include <iostream>
#include <math.h>
#include "Polynome_2D.h"

using namespace std;

void Polynome_2D::main()
{
    Polynome_2D p1(3, 6, 2);
    Polynome_2D p2(2, 6, 4);
    cout << "--------polynome------" << endl;
    cout << "p1 = "; p1.afficher(); cout << endl;
    cout << "p2 = "; p2.afficher(); cout << endl;
    cout << "p1+p2 = ";(p1+p2).afficher(); cout << endl;
    cout << "resolution:" << endl;
    p1.Resolution();



}
Polynome_2D::Polynome_2D(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
Polynome_2D::Polynome_2D()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
}
void Polynome_2D::Homothetie(double coef)
{
    this->a *= coef;
    this->b *= coef;
    this->c *= coef;
}
Polynome_2D Polynome_2D::operator+(const Polynome_2D& p)
{
    Polynome_2D s;
    s.a = this->a + p.a;
    s.b = this->b + p.b;
    s.c = this->c + p.c;
    return s;
}
void Polynome_2D::Resolution()
{
    float delta, r1, r2;
    if(a==0)
    {
        if(b==0)
        {
            cout << "impos" << endl;
        }
        else
        {
            r1 = -c/b;
            cout << "1 res : " << r1 << endl;
        }
    }
    else
    {
        delta = (b*b) - (4*a*c);
        if(delta < 0)
            cout << "impos" << endl;
        else
        {
            if(delta == 0)
            {
                r1 = -b/2*a;
                cout << "1 resultat : " << r1 << endl;
            }
            else
            {
                r1 = (-sqrt(delta)-b)/2*a;
                r2 = (+sqrt(delta)-b)/2*a;
                cout << "r1 : " << r1 << endl;
                cout << "r2 : " << r2 << endl;
            }
        }
    }
}

void Polynome_2D::afficher()
{
    cout << a << "X^2 + " << b << "X + " << c << endl;
}



