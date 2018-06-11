import grafo as gra
from datetime import datetime

""" Crear un Grafo Vacio """
print(" Creando un Grafo Vacio ")
prueba = gra.Grafo(0)

""" agregando los nodos """
print(" agregando los nodos ")
c=0
while (c<101):
	numnodo=prueba.add_nodo()
	c+=1

""" Agregando Arcos """
print(" Agregando Arcos ")
prueba.add_arco(0,6,8)
prueba.add_arco(0,9,7)
prueba.add_arco(1,2,3)	
prueba.add_arco(2,1,2)	
prueba.add_arco(2,3,7)
prueba.add_arco(2,5,10)
prueba.add_arco(3,4,6)
prueba.add_arco(3,7,9)
prueba.add_arco(4,2,5)
prueba.add_arco(4,8,6)
prueba.add_arco(4,5,2)
prueba.add_arco(5,4,1)
prueba.add_arco(5,6,2)
prueba.add_arco(6,5,10)
prueba.add_arco(6,7,2)
prueba.add_arco(6,9,4)
prueba.add_arco(7,0,10)
prueba.add_arco(7,6,3)
prueba.add_arco(7,8,5)
prueba.add_arco(7,3,8)
prueba.add_arco(8,6,5)
prueba.add_arco(8,5,3)
prueba.add_arco(8,7,4)
prueba.add_arco(9,6,4)
prueba.add_arco(10,6,16)
prueba.add_arco(100,60,16)

""" Ver si hay un camino """
print " Ver si hay un camino entre "+str(1)+" y "+str(2)+":"+str(prueba.hay_arco(1,2))
"""solo v1"""
if prueba.hay_arco(1,2)==True:
	print "Hay un camino entre "+str(1)+" y "+str(2)+", es de:"+str(prueba.GetWeight(1,2))

print " Ver si hay un camino entre "+str(2)+" y "+str(1)+":"+str(prueba.hay_arco(2,1))
""" solo v1"""
if prueba.hay_arco(2,1)==True:
	print "Hay un camino entre "+str(2)+" y "+str(1)+", es de:"+str(prueba.GetWeight(2,1))


print " Ver si hay un camino entre "+str(0)+" y "+str(3)+":"+str(prueba.hay_arco(0,3))
""" solo v1"""
if prueba.hay_arco(0,3)==True:
	print "Hay un camino entre "+str(0)+" y "+str(3)+", es de:"+str(prueba.GetWeight(0,3))


print " Ver si hay un camino entre "+str(10)+" y "+str(3)+":"+str(prueba.hay_arco(10,3))
""" solo v1"""
if prueba.hay_arco(10,3)==True:
	print "Hay un camino entre "+str(10)+" y "+str(3)+", es de:"+str(prueba.GetWeight(10,3))


print " Ver si hay un camino entre "+str(100)+" y "+str(60)+":"+str(prueba.hay_arco(100,60))
""" solo v1"""
if prueba.hay_arco(100,3*20)==True:
	print "Hay un camino entre "+str(100)+" y "+str(3*20)+", es de:"+str(prueba.GetWeight(100,3*20))#viviendo la vida al limite

#comentario en python

