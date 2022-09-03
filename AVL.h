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
};


#endif //AVL_AVL_H
