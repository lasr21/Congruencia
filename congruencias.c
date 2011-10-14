#include <stdio.h>

int gcd(int a, int b){
	int residuo = 1;

	while(residuo!=0){
		residuo = a%b;
		a=b;
		b=residuo;
	}
	return a;
}

int main (){
	
	printf("GCD:%i\n",gcd(48,18));


}