import grafo
mapa1 = grafo.Grafo()
for a in range(5):
    mapa1.add_nodo()
mapa1.add_arco(0,1,10)
mapa1.add_arco(1,0,10)
mapa1.add_arco(1,2,10)
mapa1.add_arco(2,1,10)
mapa1.add_arco(1,3,10)
mapa1.add_arco(3,1,10)
mapa1.add_arco(2,3,10)
mapa1.add_arco(3,2,10)
if mapa1.hay_camino(4, 4):
    print "Hay camino de 4 a 4"
if mapa1.hay_camino(1,4):
    print "Hay camino de 1 a 4"