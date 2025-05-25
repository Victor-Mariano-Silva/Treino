#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float calculo(float prova1, float tarefas, float prova2);

int main(){
	float prova1=0,tarefas=0,prova2=0;
	
	printf("Hora de decidir o seu destino!\n");
	printf("insira a nota do prova 1: \n");
	scanf("%f",&prova1);

	printf("insira a nota das tarefas: \n");
	scanf("%f",&tarefas);

	prova2 = calculo(prova1,tarefas,prova2);
	
	printf("voce teria que tirar isso na prova 2: %.2f",prova2);


}

float calculo(float prova1, float tarefas, float prova2){
	float temp,prova2_temp;
	
temp = (prova1 * 0.3) + (tarefas * 0.3);

prova2_temp = 7 - temp;

prova2 = prova2_temp / 0.4;

return prova2;
}
