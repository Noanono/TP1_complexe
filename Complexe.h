//
// Created by noah on 03/10/23.
//
#include <iostream>
#include <cmath>

#ifndef TP1_COMPLEXE_COMPLEXE_H
#define TP1_COMPLEXE_COMPLEXE_H


class Complexe {
private:
    float re;
    float im;

public:
    Complexe(float =0, float =0);// Constructeur
    ~Complexe();// Destructeur

    // Methodes
    /*  Role    : Affiche le complexe au format a + bj ou a - bj selon le signe de b
    Entrees : vide
    Sortie  : vide
     */
    void affiche() const;
    void affiche(std::ostream&) const; // Surcharge de la methode affiche
    /*  Role    : Calcule le module du complexe
    Entrees : vide
    Sortie  : 1 reel, le module du complexe
     */
    float module() const{ return sqrt(re*re+im*im); };
    /*  Role    : Calcule de la somme de deux complexes
    Entrees : 1 complexe, le complexe a ajouter
    Sortie  : 1 complexe, la somme des deux complexes
     */
    Complexe Addition(const Complexe&) const;
    /*  Role    : Calcule du produit de deux complexes
    Entrees : 1 complexe, le complexe a multiplier
    Sortie  : 1 complexe, le produit des deux complexes
     */
    Complexe Multiplication(const Complexe&) const;
    /*  Role    : Calcule de la difference entre deux complexes
    Entrees : 1 complexe, le complexe a soustraire
    Sortie  : 1 complexe, la difference entre les deux complexes
     */
    Complexe Soustraction(const Complexe&) const;
    /*  Role    : Calcule de la division entre deux complexes
    Entrees : 1 complexe, le diviseur
    Sortie  : 1 complexe, la division entre les deux complexes
     */
    Complexe Division(const Complexe&) const;
    /*  Role    : Calculer l'argument du complexe peu importe les cas possibles
    Entrees : vide
    Sortie  : 1 reel, l'argument du complexe
     */
    float argument() const;
    /*  Role    : Calculer le conjuge du complexe
    Entrees : vide
    Sortie  : 1 Complexe, le conjuge du complexe
     */
    Complexe conjuge() const;
    /*  Role    : Calculer l'oppose du complexe
    Entrees : vide
    Sortie  : 1 Complexe, l'oppose du complexe
     */
    Complexe oppose() const;
    /*  Role    : Verification de l'egalite entre deux complexes
    Entrees : 1 Complexe, le complexe a comparer
    Sortie  : 1 booleen, vrai si les complexes sont egaux, faux sinon
    */
    bool egal(const Complexe&) const;


    // Getters
    float getRe() const { return re; };
    float getIm() const { return im; };

    // Setters
    void setRe(float sre) { re = sre; };
    void setIm(float sim) { im = sim; };

    // Operateurs internes
    //Complexe operator+(const Complexe&) const; // Surcharge de l'operateur +
    //Complexe operator*(const Complexe&) const; // Surcharge de l'operateur *

};

Complexe operator+(const Complexe&, const Complexe&); // Surcharge de l'operateur + exterieur a la classe
Complexe operator*(const Complexe&, const Complexe&); // Surcharge de l'operateur * exterieur a la classe
std::ostream& operator<<(std::ostream&, const Complexe&); // Surcharge de l'operateur << exterieur a la classe
bool operator==(const Complexe&, const Complexe&); // Surcharge de l'operateur == exterieur a la classe
Complexe operator-(const Complexe&, const Complexe&); // Surcharge de l'operateur - exterieur a la classe
Complexe operator/(const Complexe&, const Complexe&); // Surcharge de l'operateur / exterieur a la classe


#endif //TP1_COMPLEXE_COMPLEXE_H
