#include <stdio.h>
/*Comentario
Diseñar programa que imprima los datos (Nombre,Apellido,Edades)de los varones
nacidos entre dos fechas desde el teclado.
Fecha:18-11-17
Elaborado por:Leyder Londoño Mejia*/
struct fecha{
	int dia,mes,anio;
};
struct persona{
	char nombre[20],apellido[20];
	bool sexo;
	int edad;
	fecha nacimiento;
};
int personitas[100];
void referencia(persona v[],longt);
void cuenta_dias(int dia,int mes,int anio,int dia_fin,int mes_fin,int anio_fin,int &numDias_inicio,int &numDias_fin);
void imprimir(personav[],int personitas[],int longt,int numDias_inicio,int numDias_fin);
int main() {
	persona v[100];
	int longt=0;
	referencia(v,longt);
	return 0;
}
void referencia(persona v[],longt,int personitas[]){
	int i;
	int numDias_inicio=0,numDias_fin=0;
	int dia,mes,anio,anio_actual;
	int dia_fin,mes_fin,anio_fin,opcion;
	printf("Ingrese la cantidad de personas \n");
	scanf("%d",&longt);
	printf("Ingrese año actual \n");
	scanf("d",&anio_actual);
	for (i=0;i<longt;i++){
		printf("Nombre \n ");
		fflush(stdin);
		fgets(v[i].nombre,30,stdin);
		printf("Apellido \n ");
		gets(v[i].apellido);
		printf("Sexo \n ");
		gets(v[i].sexo);
		printf("\n Ingrese su genero: 1.Masculino o 2.Femenino \n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			v[i].sexo=false;
			break;
		case 2:
			v[i].sexo=true;
			break
		}
		printf("Ingrese la fecha a buscar \n");
		scanf("%d",&v[i],nacimiento.dia);
		printf("Mes \n");
		scanf("%d",&v[i],nacimiento.mes);
		printf("Año \n");
		scanf("%d",&v[i],nacimiento.anio);
		v[i].edad=anio_actual-v[i].nacimiento.anio;
		personitas[i]=v[i].nacimiento.dia+(v[i].nacimiento.mes*30)+(v[i].nacimiento.anio*365);
}
	printf("Ingrese fecha a buscar \n");
	printf("Fecha inicial: Dia \n");
	scanf("%d",&dia);
	printf("Mes \n");
	scanf("%d",&dia);
	printf("Año \n);
	scanf("%d",&anio);
	printf("Fecha Final: Dia \n");
	scanf("%d",&dia_fin);
	printf("Mes \n");
	scanf("%d",&mes_fin);
	printf("Año \n");
	scanf("%d",&anio_fin);
	cuenta_dias(dia,mes,anio,dia_fin,mes_fin,anio_fin,numDias_inicio,numDias_fin);
	imprimir(v,personitas,longt,numDias_inicio,numDias_fin);
}	
void cuenta_dias(int dia,int mes,int anio,int dia_fin,int mes_fin,int anio_fin,int &numDias_inicio,int &numDias_fin){
	numDias_inicio=dia+(mes*30)+(anio_fin*365);
	numDias_fin=dia_fin+(mes_fin*30)+(anio_fin*365);
}
void imprimir(personav[],int personitas[],int longt,int numDias_inicio,int numDias_fin){
	for(int i=0;i<longt;i++){
		if(numDias_inicio<=personitas[i]&& numDias_fin >= personitas[i]){
			if(v[i].sexo==true){
				printf("Nombre %s Apellido %s Edad %d \n",v[i].nombre,v[i].apellido,v[i].edad);
			}
		}
	}
}
	
