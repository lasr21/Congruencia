
def gcd(a,b):
	residuo = 1
	while(residuo!=0):
		residuo = a%b
		a=b
		b=residuo
	return a

#realiza la prueba de divisibilidad para encontrar x
def probar(m,a):

	i = 0
	divisible = 1
	while(divisible != 0):
		i=i+1
		divisible = (m*i-1)%a
	return i
def probar2(m,a):
	i = 0
	divisible = 1
	while(divisible != 0):
		i=i+1
		divisible = (m-i)%a
	return i	
	

a = [2,3]
b = [3,5]
c = [2,7]
#d = [4,11]

m = a[1]*b[1]*c[1]
#*d[1]
print("M:"+str(m))
m1 = m/a[1]
m2 = m/b[1]
m3 = m/c[1]
#m4 = m/d[1]
print("M1:"+str(m1))
print("M2:"+str(m2))
print("M3:"+str(m3))
#print("M4:"+str(m4))

print probar(m1,a[1])
print probar(m2,b[1])
print probar(m3,c[1])
#print probar(m4,d[1])

solucion = a[0]*m1*probar(m1,a[1])+b[0]*m2*probar(m2,b[1])+c[0]*m3*probar(m3,c[1])
#+d[0]*m4*probar(m4,d[1])

print ("Solucion final:"+str(probar2(solucion,m)))
