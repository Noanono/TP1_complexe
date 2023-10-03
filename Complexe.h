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


#endif //TP1_COMPLEXE_COMPLEXE_H
