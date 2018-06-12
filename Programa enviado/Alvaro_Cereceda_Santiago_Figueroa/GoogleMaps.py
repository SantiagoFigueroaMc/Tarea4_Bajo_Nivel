import grafo
#Iniciar un grafo vacio:
mapa1 = grafo.Grafo()

#Agregar nodos:
for a in range(5):
    mapa1.add_nodo()

#Agregar arcos:
mapa1.add_arco(0,1,10)
mapa1.add_arco(1,0,10)
mapa1.add_arco(1,2,10)
mapa1.add_arco(2,1,10)
mapa1.add_arco(1,3,10)
mapa1.add_arco(3,1,10)
mapa1.add_arco(2,3,10)
mapa1.add_arco(3,2,10)

#Funcion hay_arco:
if mapa1.hay_arco(1,3):
    print "Hay arco entre 1 y 3"

#Funcion hay_camino:
if mapa1.hay_camino(4, 4):
    print "Hay camino de 4 a 4"
else:
    print "No hay camino de 4 a 4"
if mapa1.hay_camino(0, 3):
    print "Hay camino de 0 a 3"
else:
    print "No hay camino de 0 a 3"
if mapa1.hay_camino(1,4):
    print "Hay camino de 1 a 4"
else:
    print "No hay camino de 1 a 4"