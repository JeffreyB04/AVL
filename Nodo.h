//
// Created by jeffr on 29/8/2022.
//

#ifndef ARBOLBINARIOVINCULADO_NODO_H
#define ARBOLBINARIOVINCULADO_NODO_H
#include<iostream>
using namespace std;

class Nodo {
private:
    int elemento;
    Nodo *parent;
    Nodo *left;
    Nodo *right;
public:
    Nodo(int elemento=0, Nodo *parent = nullptr, Nodo *left = nullptr, Nodo *right = nullptr);

    virtual ~Nodo();

    int getElemento() const;

    void setElemento(int elemento);

    Nodo *getParent() const;

    void setParent(Nodo *parent);

    Nodo *getLeft() const;

    void setLeft(Nodo *left);

    Nodo *getRight() const;

    void setRight(Nodo *right);
};


#endif //ARBOLBINARIOVINCULADO_NODO_H
