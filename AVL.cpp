//
// Created by jeffr on 3/9/2022.
//

#include "AVL.h"

int AVL::height(Nodo *t) {
    int h = 0;
    if (t != nullptr) {
        int l_height = height(t->getLeft());
        int r_height = height(t->getRight());
        int max_height = max(l_height, r_height);
        h = max_height + 1;
    }
    return h;
}

int AVL::difference(Nodo *t) {
    int l_height = height(t->getLeft());
    int r_height = height(t->getRight());
    int b_factor = l_height - r_height;
    return b_factor;
}

Nodo *AVL::rrRotation(Nodo *parent) {
    Nodo *t;
    t = parent->getRight();
    parent->setRight(t->getLeft());
    t->setLeft(parent);
    return t;
}

Nodo *AVL::llRotation(Nodo *parent) {
    Nodo *t;
    t = parent->getLeft();
    parent->setLeft(t->getRight());
    t->setRight(parent);
    return t;
}

Nodo *AVL::lrRotation(Nodo *parent) {
    Nodo *t;
    t = parent->getLeft();
    parent->setLeft(rrRotation(t));
    return llRotation(parent);
}


Nodo *AVL::rlRotation(Nodo *parent) {
    Nodo *t;
    t = parent->getRight();
    parent->setRight(llRotation(t));
    return rrRotation(parent);
}

Nodo *AVL::balance(Nodo *t) {
    int bal_factor = difference(t);
    if (bal_factor > 1) {
        if (difference(t->getLeft()) > 0)
            t = llRotation(t);
        else
            t = lrRotation(t);
    } else if (bal_factor < -1) {
        if (difference(t->getRight()) > 0)
            t = rlRotation(t);
        else
            t = rrRotation(t);
    }
    return t;
}

Nodo *AVL::insert(Nodo *nodo, int v) {
    if (nodo == nullptr) {
        nodo = new Nodo;
        nodo->setElemento(v);
        return nodo;
    } else if (v < nodo->getElemento()) {
        nodo->setLeft(insert(nodo->getLeft(), v));
        nodo = balance(nodo);
    } else if (v >= nodo->getElemento()) {
        nodo->setRight(insert(nodo->getRight(), v));
        nodo = balance(nodo);
    }
    return nodo;
}

void AVL::show(Nodo *p, int l) {
    int i;
    if (p != nullptr) {
        show(p->getRight(), l + 1);
        cout << " ";
        if (p == root)
            cout << "Root: ";
        for (i = 0; i < l && p != root; i++)
            cout << " ";
        cout << p->getElemento();
        show(p->getLeft(), l + 1);
    }
}

void AVL::inOrder(Nodo *t) {
    if (t == nullptr) return;
    inOrder(t->getLeft());
    cout << t->getElemento() << " ";
    inOrder(t->getRight());
}

void AVL::preOrder(Nodo *t) {
    if (t == nullptr) return;
    cout << t->getElemento() << " ";
    preOrder(t->getLeft());
    preOrder(t->getRight());

}

void AVL::postOrder(Nodo *t) {
    if (t == nullptr) return;
    preOrder(t->getLeft());
    preOrder(t->getRight());
    cout << t->getElemento() << " ";
}

AVL::AVL() {
    root = nullptr;
}
