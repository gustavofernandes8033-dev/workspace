#include <stdio.h>
#include <stdlib.h>

struct Data{
   int dia,mes,ano;

};

void imprimirData(struct Data *x){
	printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}
void main(){
	struct Data data;
	struct Data *p;
	p = &data;

	data.dia = 29;
	data.mes = 12;
	data.ano = 1999;

	imprimirData(p);





}
