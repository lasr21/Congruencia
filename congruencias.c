#include <stdio.h>
#define NUM 3

int probarDiv(int m, int a){
	
	int i = 0;
	int divisible = 1;

	while(divisible != 0){
		i++;
		divisible = (m*i-1)%a;
	}
	return i;

}

int probarSol(int m, int a){
	int i = 0;
	int divisible = 1;

	while(divisible != 0){
		i++;
		divisible = (m-i)%a;
	}
	return i;
}


int main (){
	
	//meter el input queda pendiente:


	//resuelve sistemas de ecuaciones de la forma x = a mod b
	int a[NUM];
	int b[NUM];
	int mx[NUM];
	int solucion;

	a[0]=2;
	a[1]=3;
	a[2]=2;

	b[0]=3;
	b[1]=5;
	b[2]=7;

	int i,m;
	m=1;
	//obtenemos m
	for(i=0;i<NUM;i++){
		m*=b[i];
	}
	printf("m:%d\n",m);
	//obtenemos m1, m2, m3...mx
	for(i=0;i<NUM;i++){
		mx[i]=m/b[i];
		printf("m%d:%d\n",i,mx[i]);
	}
	for(i=0;i<NUM;i++){
		solucion += a[i]*mx[i]*probarDiv(mx[i],b[i]); 
	}
	printf("Solucion parcial: %d\n",solucion);
	solucion = probarSol(solucion,m);
	printf("Solucion final: %d\n",solucion);


	


}