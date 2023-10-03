//
// Created by noah on 03/10/23.
//

#include "Complexe.h"

// Definition des methodes non inline

// Definition du constructeur
Complexe::Complexe(float sre, float sim) {
    re = sre;
    im = sim;
}

// Definition du destructeur
Complexe::~Complexe() {
    std::cout << "Destruction de ";
    affiche();
    std::cout << std::endl;
}

// Definition de la methode affiche
void Complexe::affiche() const {
    if(im == 0) {
        std::cout << re << std::endl;
        return;
    }else{
        if(re == 0) {
            std::cout << im << "j" << std::endl;
            return;
        }
    }
    if (im >= 0) {
        if(im == 1) {
            std::cout << re << " + j" << std::endl;
        }else {
            std::cout << re << " + " << im << "j" << std::endl;
        }
    }else {
        if(im == -1) {
            std::cout << re << " - j" << std::endl;
        }else {
            std::cout << re << " - " << -im << "j" << std::endl;
        }
    }
}
void Complexe::affiche(std::ostream& flux) const{
    if(im == 0) {
        flux << re << std::endl;
        return;
    }else{
        if(re == 0) {
            flux << im << "j" << std::endl;
            return;
        }
    }
    if (im >= 0) {
        if(im == 1) {
            flux << re << " + j" << std::endl;
        }else {
            flux << re << " + " << im << "j" << std::endl;
        }
    }else {
        if(im == -1) {
            flux << re << " - j" << std::endl;
        }else {
            flux << re << " - " << -im << "j" << std::endl;
        }
    }
}

// Definition de la methode Addition
Complexe Complexe::Addition(const Complexe &c) const {
    Complexe tmp;
    tmp.re = re + c.re;
    tmp.im = im + c.im;
    return tmp;
}

// Definition de la methode Multiplication
Complexe Complexe::Multiplication(const Complexe &c) const {
    Complexe tmp;
    tmp.re = re*c.re - im*c.im;
    tmp.im = re*c.im + im*c.re;
    return tmp;
}

// Definition des operateurs internes a la classe
/*Complexe Complexe::operator+(const Complexe &c) const {
    Complexe tmp;
    tmp.re = re + c.re;
    tmp.im = im + c.im;
    return tmp;
}
Complexe Complexe::operator*(const Complexe &c) const {
    Complexe tmp;
    tmp.re = re*c.re - im*c.im;
    tmp.im = re*c.im + im*c.re;
    return tmp;
} */

// Definition des operateurs exterieurs a la classe
Complexe operator+(const Complexe &c1, const Complexe &c2) {
    Complexe tmp;
    tmp.setRe(c1.getRe() + c2.getRe());
    tmp.setIm(c1.getIm() + c2.getIm());
    return tmp;
}
Complexe operator*(const Complexe &c1, const Complexe &c2) {
    Complexe tmp;
    tmp.setRe(c1.getRe()*c2.getRe() - c1.getIm()*c2.getIm());
    tmp.setIm(c1.getRe()*c2.getIm() + c1.getIm()*c2.getRe());
    return tmp;
}
std::ostream& operator<<(std::ostream& flux, const Complexe &c) {
    c.affiche(flux);
    return flux;
}
