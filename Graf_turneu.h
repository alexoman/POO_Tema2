#ifndef GRAF_TURNEU_H
#define GRAF_TURNEU_H


#include "Graf_complet.h"
#include "Graf_antisimetric.h"

class Graf_turneu:public Graf_complet, public Graf_antisimetric
{
    public:
        explicit Graf_turneu(int nr=0, int mc = 0, const Matrice& M = Matrice());
        Graf_turneu(const Graf_turneu& g);
        ~Graf_turneu() override;


        friend std::istream& operator >>(std::istream& read, Graf_turneu& g);
        friend std::ostream& operator <<(std::ostream& write, const Graf_turneu& g);

        Graf_turneu& operator =(const Graf_turneu& g);

        void afisare_arce() override;
};

#endif // GRAF_TURNEU_H
