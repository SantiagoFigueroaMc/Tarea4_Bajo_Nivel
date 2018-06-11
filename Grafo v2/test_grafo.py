import grafo as gra
from datetime import datetime

""" Crear un Grafo Vacío """
print(" Creando un Grafo Vacío ")
prueba = gra.Grafo()

""" agregando los nodos """
print(" Agregando los nodos ")
c=0
while (c<101):
	numnodo=prueba.add_nodo()
	c+=1

""" Agregando Arcos """
print(" Agregando Arcos ")
prueba.add_arco(waze,0,6,8);
prueba.add_arco(waze,0,9,7);
prueba.add_arco(waze,1,2,3);	
prueba.add_arco(waze,2,1,2);	
prueba.add_arco(waze,2,3,7);
prueba.add_arco(waze,2,5,10);
prueba.add_arco(waze,3,4,6);
prueba.add_arco(waze,3,7,9);
prueba.add_arco(waze,4,2,5);
prueba.add_arco(waze,4,8,6);
prueba.add_arco(waze,4,5,2);
prueba.add_arco(waze,5,4,1);
prueba.add_arco(waze,5,6,2);
prueba.add_arco(waze,6,5,10);
prueba.add_arco(waze,6,7,2);
prueba.add_arco(waze,6,9,4);
prueba.add_arco(waze,7,0,10);
prueba.add_arco(waze,7,6,3);
prueba.add_arco(waze,7,8,5);
prueba.add_arco(waze,7,3,8);
prueba.add_arco(waze,8,6,5);
prueba.add_arco(waze,8,5,3);
prueba.add_arco(waze,8,7,4);
prueba.add_arco(waze,9,6,4);
uncionadd_narcos(waze,10,6,16);
funcionadd_narcos(waze,100,60,16);

""" Ver si hay un camino """
print(" Ver si hay un camino entre "+str(1)+" y "+str(2)+":"+str(prueba.hay_arco(1,2)))
"""solo v1
if (prueba.hay_arco(1,2)==True)
	print ("Hay un camino entre "+str(1)+" y "+str(2)+", es de:"+str(prueba.GetWeight(1,2)))
"""
print(" Ver si hay un camino entre "+str(2)+" y "+str(1)+":"+str(prueba.hay_arco(2,1)))
""" solo v1
if (prueba.hay_arco(2,1)==True)
	print ("Hay un camino entre "+str(2)+" y "+str(1)+", es de:"+str(prueba.GetWeight(2,1)))
"""

print(" Ver si hay un camino entre "+str(0)+" y "+str(3)+":"+str(prueba.hay_arco(0,3)))
""" solo v1
if (prueba.hay_arco(0,3)==True)
	print ("Hay un camino entre "+str(0)+" y "+str(3)+", es de:"+str(prueba.GetWeight(0,3)))
"""

print(" Ver si hay un camino entre "+str(10)+" y "+str(3)+":"+str(prueba.hay_arco(10,3)))
""" solo v1
if (prueba.hay_arco(10,3)==True)
	print ("Hay un camino entre "+str(10)+" y "+str(3)+", es de:"+str(prueba.GetWeight(10,3)))
"""

print(" Ver si hay un camino entre "+str(100)+" y "+str(60)+":"+str(prueba.hay_arco(100,60)))
""" solo v1
if (prueba.hay_arco(100,3*20)==True)
	print ("Hay un camino entre "+str(100)+" y "+str(3*20)+", es de:"+str(prueba.GetWeight(100,3*20)))#viviendo la vida al limite
"""
#comentario en python

