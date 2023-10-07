#include <iostream>

#include "Complexe.h"

int main() {
    // Test du constructeur
    Complexe c1(1, -1), c2(3, 4), c3;

    // Test des operateurs
    c3 = c1.Addition(c2);

    std::cout << "c1 = ";
    c1.affiche(); // On test la methode affiche

    std::cout << "c2 = ";
    c2.affiche();

    std::cout << "c3 = c1 + c2 = ";
    c3.affiche();

    // On test l'operateur + sur plusieurs objets
    c3 = c1 + c2 + c3; // On calcule c1 + c2 puis on ajoute c3
    std::cout << "c3 = c1 + c2 + c3 = ";
    c3.affiche();

    // On test l'operateur * et + sur plusieurs objets
    std::cout << "c1 * c2 + c3 = " << c1 * c2 + c3 << std::endl;
    std::cout << "c1 + c2 * c3 = " << c1 + c2 * c3 << std::endl; // La multiplication est prioritaire

    std::cout << "c1 * c2 = ";
    c1.Multiplication(c2).affiche(); // On utilise la methode affiche directement sur l'objet temporaire

    std::cout << "mod(c1) = " << c1.module() << std::endl; // On test la methode module

    std::cout << "c1 + 3 = " << c1 + 3 << std::endl; // On test l'operateur + avec un reel
    std::cout << "3 + c1 = " << 3 + c1 << std::endl; // On test l'operateur + avec un reel dans l'autre sens

    std::cout << "Complexe forcee (3, 4) = " << (Complexe)(3, 4) << std::endl; // On test le forcage de type
    // On remarque que deux complexes sont crees et que le premier est detruit et n'est pas affiche

    // Test des operateurs exterieurs
    std::cout << "c1 + c2 = " << c1+c2 << std::endl;

    // Test de la methode argument
    std::cout << "arg(c1) = " << c1.argument() << std::endl;

    // Test de la methode conjuge
    std::cout << "conj(c1) = " << c1.conjuge() << std::endl;

    // Test de la methode egal
    std::cout << "c1 == c2 ? " << (c1.egal(c2) ? "oui" : "non") << std::endl;

    // Test du destructeur

    /* Question 4 */
    Complexe z1(1, 1), z2(2, -1), z3(3, -6), z4(3, -4), z5;

    z5 = z1/z2;
    z5 = z5 * z5;
    z5 = z5 + z3.conjuge()/z4;

    std::cout << "z5 = " << z5 << std::endl;

    std::cout << "Le module de z5 est " << z5.module() << " et son argument vaut " << z5.argument() << std::endl;

    return 0;
}
