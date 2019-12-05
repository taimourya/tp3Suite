#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

using namespace std;

class Date
{
public:
    static void main();

    Date();
    Date(int, int, int);
    bool bissextile();
    int nombreDeJoursqui();
    bool estValide();
    void afficher();
private:
    int j, m, a;
};




#endif // DATE_H_INCLUDED
