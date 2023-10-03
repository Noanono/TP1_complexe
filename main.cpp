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

    std::cout << "c1 * c2 = ";
    c1.Multiplication(c2).affiche(); // On utilise la methode affiche directement sur l'objet temporaire

    std::cout << "mod(c1) = " << c1.module() << std::endl; // On test la methode module

    std::cout << "c1 + 3 = " << c1 + 3 << std::endl; // On test l'operateur + avec un reel
    std::cout << "3 + c1 = " << 3 + c1 << std::endl; // On test l'operateur + avec un reel dans l'autre sens

    // Test des operateurs exterieurs
    std::cout << "c1 + c2 = " << c1+c2 << std::endl;


    // Test du destructeur

    return 0;
}
