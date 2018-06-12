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
"""Grafo contiene la foto de grafos google maps"""
prueba.add_arco(0,1,20)
prueba.add_arco(1,2,50)
prueba.add_arco(1,0,58)
prueba.add_arco(1,3,5)
prueba.add_arco(2,1,30)
prueba.add_arco(2,3,48)
prueba.add_arco(3,1,14)
prueba.add_arco(3,2,32)

""" Ver si hay un arco """
print " Ver si hay un arco entre "+str(1)+" y "+str(2)+":"+str(prueba.hay_arco(1,2))
"""solo v1"""
if prueba.hay_arco(1,2)==True:
	print "Hay un arco entre "+str(1)+" y "+str(2)+", es de:"+str(prueba.GetWeight(1,2))

print " Ver si hay un arco entre "+str(2)+" y "+str(1)+":"+str(prueba.hay_arco(2,1))
""" solo v1"""
if prueba.hay_arco(2,1)==True:
	print "Hay un arco entre "+str(2)+" y "+str(1)+", es de:"+str(prueba.GetWeight(2,1))


print " Ver si hay un arco entre "+str(0)+" y "+str(3)+":"+str(prueba.hay_arco(0,3))
""" solo v1"""
if prueba.hay_arco(0,3)==True:
	print "Hay un arco entre "+str(0)+" y "+str(3)+", es de:"+str(prueba.GetWeight(0,3))


print " Ver si hay un arco entre "+str(10)+" y "+str(3)+":"+str(prueba.hay_arco(10,3))
""" solo v1"""
if prueba.hay_arco(10,3)==True:
	print "Hay un arco entre "+str(10)+" y "+str(3)+", es de:"+str(prueba.GetWeight(10,3))


print " Ver si hay un arco entre "+str(100)+" y "+str(60)+":"+str(prueba.hay_arco(100,60))
""" solo v1"""
if prueba.hay_arco(100,3*20)==True:
	print "Hay un arco entre "+str(100)+" y "+str(3*20)+", es de:"+str(prueba.GetWeight(100,3*20))#viviendo la vida al limite
def print_camino(nodo1,nodo2):
	print ("Camino de nodo \""+str(nodo1)+"\" y \""+str(nodo2)+"\"")	

print ("desde el nodo 0")
print_camino(0,0)
print (prueba.hay_camino(0,0))
print_camino(0,1)
print (prueba.hay_camino(0,1))
print_camino(0,2)
print (prueba.hay_camino(0,2))
print_camino(0,3)
print (prueba.hay_camino(0,3))
print ("desde el nodo 1")
print_camino(1,0)
print (prueba.hay_camino(1,0))
print_camino(1,1)
print (prueba.hay_camino(1,1))
print_camino(1,2)
print (prueba.hay_camino(1,2))
print_camino(1,3)
print (prueba.hay_camino(1,3))
print ("desde el nodo 2")
print_camino(2,0)
print (prueba.hay_camino(2,0))
print_camino(2,1)
print (prueba.hay_camino(2,1))
print_camino(2,2)
print (prueba.hay_camino(2,2))
print_camino(2,3)
print (prueba.hay_camino(2,3))
print ("desde el nodo 3")
print_camino(3,0)
print (prueba.hay_camino(3,0))
print_camino(3,1)
print (prueba.hay_camino(3,1))
print_camino(3,2)
print (prueba.hay_camino(3,2))
print_camino(3,3)
print (prueba.hay_camino(3,3))

#comentario en python

