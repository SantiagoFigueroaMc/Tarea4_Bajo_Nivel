import grafo
mapa1 = grafo.Grafo(20000)
mapa1.AddConexion(0,1,32)
mapa1.AddConexion(1,3,11)

if mapa1.hay_arco(0,1):
    print "Hay arco entre 0 y 1"