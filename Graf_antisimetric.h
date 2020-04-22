#ifndef GRAF_ANTISIMETRIC_H
#define GRAF_ANTISIMETRIC_H

#include "Graf.h"
#include "Matrice.h"

class Graf_antisimetric: virtual public Graf
{
        protected :
            Matrice adiacenta;
        public :
            explicit Graf_antisimetric(const Matrice& M = Matrice(), int nr = 0);
            Graf_antisimetric(const Graf_antisimetric& g);
            ~Graf_antisimetric() override;


            friend std::istream& operator >>(std::istream& read,Graf_antisimetric &g);
            friend std::ostream& operator <<(std::ostream& write, const Graf_antisimetric& g);

            Graf_antisimetric& operator =(const Graf_antisimetric& g);

            void afisare_arce() override;
};

#endif // GRAF_ANTISIMETRIC_H
