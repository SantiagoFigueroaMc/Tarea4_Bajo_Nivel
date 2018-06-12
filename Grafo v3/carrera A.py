#-*- coding:utf-8 -*-
"""
Esquema general:
	Clase Grafo:
		vecotr
		static int
		Grafo()
		Grafo(int)
		add_arco
		add_nodo
		hay_arco
		hay_camino //por hacer
		
	Clase Nodo:
		
"""

#Grafo::hay_camino(int I,int F){}
nodo0 = [ [int("1"),20,"B","desde A"] ]
nodo1 = [ [int("2"),50,"C","desde B"],[int("0"),58,"A","desde B"],[int("3"),5,"D","desde B"] ]
nodo2 = [ [int("1"),30,"B","desde C"],[int("3"),48,"D","desde C"] ]
nodo3 = [ [int("1"),14,"B","desde D"],[int("2"),32,"C","desde D"] ]
caminos=[]
graf=[nodo0,nodo1,nodo2,nodo3,caminos]#clase grafo

"""The new and hackerman version"""
MAX_iterations=50
def cambiodenodoactual(nodoactual,stack,caminos,F,iteracion,grafo=graf):
	""" -- -- o -- -- """
	newlen=len(nodoactual)
	c3=0		#empeiza el recorrido
	while (c3<newlen):#parte cambiandose de nodo
		newnodo=grafo[nodoactual[c3][0]]#nuevo nodo actual
		stack.append(newnodo)			#agrega el nuevo nodo al camino
		if (newnodo==grafo[F]):			#se termino el camino
			caminos+=stack				#se agrega el camino correcto
			stack.pop(-1)				#debo cambiar la ista de nodos por los que he pasado
										#cambio newnodo a traves de nodoactual
		else:	# Seccion:"¿cambio de nodo?")
			c2=0
			newlenstack=len(stack)-1
			cond=True
			while (c2<newlenstack):
				if (newnodo==stack[c2]):#reviso que no haya pasado por aqui
					stack.pop(-1)		#estaba repetido en el camino
					cond=False			#no debo recursear
					break
				c2+=1
			if cond:	#llamate de nuevo
				iteracion+=1
				if iteracion==MAX_iterations+1:
					break
				stack,caminos,iteracion=cambiodenodoactual(newnodo,stack,caminos,F,iteracion,grafo=graf)#comienza de nuevo
		c3+=1	 #si no me cambie de nodo, avanzo a revisar la siguiente seccion
	stack.pop(-1)#debo sacar del camino el ultimo al ultimo newnodo que se uso
	return stack,caminos,iteracion	#como finzlizar la recursividad :D

def hay_camino( I, F,grafo=graf):#int I, int F
	caminos=[]
	if I==F:#si se busca a si mismo, no se encontrara...no esta listo para saber 0_0
		return False
	#Condiciones iniciales
	nodoActual=grafo[I]
	stack=[nodoActual]
	iteracion=1#contador de iteraciones, aaaalgo de worries por la memoria
	stack,caminos,iteracion=cambiodenodoactual(nodoActual,stack,caminos,F,iteracion,grafo=graf)#entero hackerman
	#por ser recursivo, lo limitaré a 50 o 100 llamadas (valor MAX_iterations)
	if iteracion>MAX_iterations:
		print ("No se puede hacer un camino mas largo")
	return caminos!=[]#la funcion debe retornar un bool jiji
#fin del def
""" En tan solo 71-26 lineas (46 lineas...es menos que 50 sabes?) """
"""
nodo0 = [ [int("1"),20,"B","desde A"] ]
nodo1 = [ [int("2"),50,"C","desde B"],[int("0"),58,"A","desde B"],[int("3"),5,"D","desde B"] ]
nodo2 = [ [int("1"),30,"B","desde C"],[int("3"),48,"D","desde C"] ]
nodo3 = [ [int("1"),14,"B","desde D"],[int("2"),32,"C","desde D"] ]
"""
print ("desde el nodo 0")
print (hay_camino(0,0))
print (hay_camino(0,1))
print (hay_camino(0,2))
print (hay_camino(0,3))
print ("desde el nodo 1")
print (hay_camino(1,0))
print (hay_camino(1,1))
print (hay_camino(1,2))
print (hay_camino(1,3))
print ("desde el nodo 2")
print (hay_camino(2,0))
print (hay_camino(2,1))
print (hay_camino(2,2))
print (hay_camino(2,3))
print ("desde el nodo 3")
print (hay_camino(3,0))
print (hay_camino(3,1))
print (hay_camino(3,2))
print (hay_camino(3,3))




"""posible implementacion:
nodo0 = [ ((["1",20]),caminos=[...]) ]
nodo1 = [ ((["2",50],["0",58],["3",5]),caminos=[...]) ]
nodo2 = [ ((["1",30],["3",48]),caminos=[...]) ]
nodo3 = [ ((["1",14],["2",32]),caminos=[...]) ]
nodo_sin_conexion = [ ((),caminos=[]) ]
"""

""" old version
#como nodo es una clase, una opcion es agregar los caminos dentro del nodo
contadorexterno=0
def cambiodenodo(caminos,nActual,stack,F,contadorexterno,grafo=graf):
	#print ("camino en cambio de nodo:\t"+str(contadorexterno)+"--------")
	#print (stack)
	#print ("caminos hasta ahora")
	#print (caminos)
	a=0
	lenactual=len(nActual)
#	print ("condicion fin del while en addnode:"+str(lenactual))
	#print ("nodo actual dentro de cambiodenodo:\t"+str(contadorexterno)+"------")
	#print (nActual)
	while (a<lenactual):
		print ("a:"+str(a))
		print ("nActual:")
		print(nActual)
		nActual=graf[nActual[a][0]]#nActual[a][0] #c recorre; [0] numero del nodo
		stack.append(nActual)
		#ya llegue
		if (nActual==graf[F]):
			caminos.append(stack)
			#nActual=stack[-2]
			#stack.pop(-1)
			#print ("\tsi lluegue :O\t")
		
		#fin del if ya llegue
		#es nuevo nodo
		else:
			#print ("no llegue :(")
			_lenstack=len(stack)-1
			contador=0
			suif=True
			while (contador < _lenstack):
				if (stack[contador]==nActual):
					#nActual=stack[-2]
					#stack.pop(-1)
					#print ("\twhen cuando ya estuviste aqui\t")
					suif=False
					break
				contador+=1
			#print ("juguetes nuevos :o")
			#fin revisar si es nuevo nodo
			if suif:
			#	print ("entrando a reiterar :O O:")
			#	print ("contadorreiteraciones:"+str(contadorexterno))
				contadorexterno+=1
				if contadorexterno>10:
					break#rompe el ciclo total, fuerza la salida
				caminos,stack,contadorexterno=cambiodenodo(caminos,nActual,stack,F,contadorexterno)
#		print("si llega hasta aca, y el a llego como:"+str(a)+", strlen="+str(lenactual))
		a+=1#termina el while del nodo
	stack.pop(-1)
	return caminos,stack,contadorexterno

def hay_camino(I,F,grafo=graf):#return bool
	if I==F:
		return 0
	stack=[]#==camino
	contadorexterno=0

	nActual=graf[I]
	stack.append(nActual)
	lenactual=len(nActual)
	c=0
	#print ("nodo actual:")
	#print (nActual)
	#print ("nodo final:")
	#print (graf[F])
	#print ("camino(stack):")
	#print (stack)
	#print ("condicion cierre del while:"+str(lenactual))
	while (c<lenactual):
		nActual=graf[nActual[c][0]]#nActual[c][0] #c recorre; [0] numero del nodo
		stack.append(nActual)
		#print ("cambio de nodo "+str(c)+":")
		#print (nActual)
		#print ("camino(stack) va en ("+str(c)+"):")
		#print (stack)
		
		#ya llegue
		if (nActual==graf[F]):
			graf[4].append(stack)
			#nActual=stack[-2]
			#stack.pop(-1)
#			print ("llegue :D")
#			print ("camino pasa a ser:")
#			print (stack)
		#fin del if ya llegue
		#es nuevo nodo
		else:
#			print ("no he llegadou")
			_lenstack=len(stack)-1
			contador=0
			suif=True
#			print ("len del stack:"+str(_lenstack))
			while (contador<_lenstack):
				if (stack[contador]==nActual):
					#nActual=stack[-2]
					#stack.pop(-1)
#					print ("oye oy oye, ya estuviste aqui, dewuelvete")
#					print ("camino pasa a ser:")
#					print (stack)
					suif=False
					break
				contador+=1
			#fin revisar si es nuevo nodo
			#incio cambio de nodo Actual
			if suif:
				contadorexterno+=1
#				print ("numero de iteracionnn:"+str(contadorexterno))
				graf[4],stack,contadorexterno=cambiodenodo(graf[4],nActual,stack,F,contadorexterno)
			#fin cambio new nodo
		c+=1
		satck.pop(-1)
		#fin del while inicial
	print ("los caminos de la funcion:")
	print(graf[4])
	return graf[4]!=[]
	#fin del def
#frogging indentation

old version """

