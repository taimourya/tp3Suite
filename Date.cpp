#include <iostream>
#include "Date.h"


void Date::main()
{
    Date d(19, 11, 2020);
    cout << "-----Date-------" << endl;
    d.afficher();
    cout << "nombre de jours : " << d.nombreDeJoursqui() << endl;
    if(d.estValide())
        cout << "valide";
    else
        cout << "pas valide";
    cout << endl;
    if(d.bissextile())
        cout << "bise";
    else
        cout << "pas bise";
    cout << endl;
}

Date::Date()
{
    j=19;
    m=11;
    a=1998;
}
Date::Date(int j, int m, int a)
{
    this->j = j;
    this->m = m;
    this->a = a;
}
bool Date::bissextile()
{
    if((a%4 == 0 && a%100!=0) || a%400==0)
        return true;
    return false;
}

int Date::nombreDeJoursqui()
{
    if(m==2)
        return 28;
    if((m%2==0 && m<7) || (m%2!=0 && m>7))
        return 30;
    return 31;
}

bool Date::estValide()
{
    if(a<0)
        return false;
    if(m<0 || m>12)
        return false;
    if(j<0 || j> nombreDeJoursqui())
        return false;
    return true;
}
void Date::afficher()
{
    cout << j << "/" << m << "/" << a << endl;
}









