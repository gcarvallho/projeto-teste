#include <stdio.h>
#include <math.h>

//função que calcula a distancia
float calculaDistancia (int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1,2))+pow(y2-y1,2));
}

int main(){
	
	//definição das variaveis
	int x1,y1,x2,y2;
	float distancia;
	
	//Entrada de dados
	printf("Informe as coordendas para o primeiro ponto: ");
	scanf("%d %d", &x1,&y1);
	printf("Informe as coordendas para o segundo ponto: ");
	scanf("%d %d", &x2,&y2);	
	
	//calculo da distancia entre os pontos
	distancia = caulculoDistancia(x1,x1,x2,y2);
	
	//mostra o resultado
	printf("Distancia: %f", distancia);
} 
#include <stdio.h>
#include <math.h>

//função que calcula a distancia
float calculaDistancia (int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1,2))+pow(y2-y1,2));
}

int main(){
	
	
}