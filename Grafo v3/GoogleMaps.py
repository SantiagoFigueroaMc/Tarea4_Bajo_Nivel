import grafo
mapa1 = grafo.Grafo(20000)
mapa1.add_arco(0,1,32)
mapa1.add_arco(1,3,11)

if mapa1.hay_arco(0,1):
    print "Hay arco entre 0 y 1"

nodo_prueba = mapa1.GetNodo(19999)
print nodo_prueba.GetId()