#include <stdio.h>

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
	
	int NUM=0;
	int solucion=0;
	int i,m;
	m=1;

	printf("Cuantas ecuaciones se van a resolver?\n");
	scanf("%d",&NUM);

	int a[NUM];
	int b[NUM];
	int mx[NUM];

	printf("Ingresar las ecuaciones de la forma x = a mod b:\n");

	while (i<NUM){
		
		printf("a%i: ",i);
		scanf("%d",&a[i]);
		printf("b%i: ",i);
		scanf("%d",&b[i]);
		printf("x = %d mod %d\n", a[i],b[i]);
		printf("========\n");
		i++;


	}

	//obtenemos m
	for(i=0;i<NUM;i++){
		m*=b[i];
	}
	
	//obtenemos m1, m2, m3...mx
	for(i=0;i<NUM;i++){
		mx[i]=m/b[i];
	}
	for(i=0;i<NUM;i++){
		solucion += a[i]*mx[i]*probarDiv(mx[i],b[i]); 
	}
	
	solucion = probarSol(solucion,m);
	printf("Solucion: %d\n",solucion);


	


}