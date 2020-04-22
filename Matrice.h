#ifndef MATRICE_H
#define MATRICE_H

#include <iostream>

class Matrice
{
    private:
        int n, m, **a;

    public:
        explicit Matrice(int l=0, c=0, x=0);
        Matrice(const Matrice& mat);
        ~Matrice();

        friend std::istream& operator >>(std::istream& read, Matrice& mat);
        friend std::ostream& operator <<(std::ostream& write, const Matrice& mat);

        Matrice& operator =(const Matrice& mat);

        void setval(int i, int j, int k);
        int getval(int i, int j) const;

        int getn() const;
        int getm() const;

};

#endif // MATRICE_H
