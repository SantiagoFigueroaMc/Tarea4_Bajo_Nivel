#ifndef _VERTICE
#define _VERTICE
class Vertice {
private:
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