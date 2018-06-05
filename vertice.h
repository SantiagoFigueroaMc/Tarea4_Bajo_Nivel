#ifndef _VERTICE
#define _VERTICE
# include "node.h"
class Vertice {
protected:
    int name;
    static int n_vertice;
public:
    // Constructor:
    Vertice(int);

    // Metodos:
    int GetName();
    static int GetN_Vertice();
};

#endif
