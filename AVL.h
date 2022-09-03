//
// Created by jeffr on 3/9/2022.
//

#ifndef AVL_AVL_H
#define AVL_AVL_H
#include"Nodo.h"

class AVL {
private:
    int height(Nodo*);
    int difference(Nodo*);
    Nodo *rrRotation(Nodo*);
    Nodo *llRotation(Nodo*);
    Nodo *lrRotation(Nodo*);
    Nodo *rlRotation(Nodo*);
    Nodo *balance(Nodo*);
    Nodo *insert(Nodo*, int);
    void show(Nodo*, int);
    void inOrder(Nodo*);
    void preOrder(Nodo*);
    void postOrder(Nodo*);
    AVL();
};


#endif //AVL_AVL_H
