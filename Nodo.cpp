//
// Created by jeffr on 29/8/2022.
//

#include "Nodo.h"

Nodo::Nodo(int elemento, Nodo *parent, Nodo *left, Nodo *right) : elemento(elemento), parent(parent), left(left),
                                                                  right(right) {}

Nodo::~Nodo() {

}

int Nodo::getElemento() const {
    return elemento;
}

void Nodo::setElemento(int elemento) {
    Nodo::elemento = elemento;
}

Nodo *Nodo::getParent() const {
    return parent;
}

void Nodo::setParent(Nodo *parent) {
    Nodo::parent = parent;
}

Nodo *Nodo::getLeft() const {
    return left;
}

void Nodo::setLeft(Nodo *left) {
    Nodo::left = left;
}

Nodo *Nodo::getRight() const {
    return right;
}

void Nodo::setRight(Nodo *right) {
    Nodo::right = right;
}
