#include <iostream>

using namespace std;

int main() {
	int numeroLlamadas[3], duracionLlamadas[3], costoLlamadas[3];
	int local=0, distancia=1, celular=2, continuar=1;
	numeroLlamadas[local] =	duracionLlamadas[local] = costoLlamadas[local] = 0;
	numeroLlamadas[distancia] = duracionLlamadas[distancia] = costoLlamadas[distancia] = 0;
	numeroLlamadas[celular] = duracionLlamadas[celular] = costoLlamadas[celular] = 0;
			
	int opcion, duracionLlamada, costoLlamada, numeroTotalLlamadas, duracionTotalLlamadas, costoTotalLlamadas;
	float costoPromedioPorMinuto;
	while(continuar == 1) {
		cout<<"Digite una opcion: "<<endl;
		cout<<"1 para agregar una llamada"<<endl;
		cout<<"2 para visualizar la informacion de cada linea"<<endl;
		cout<<"3 para visualizar la informacion consolidada de todas las linea"<<endl;
		cout<<"4 para reiniciar la informacion de las linea"<<endl;	
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Agregando llamada"<<endl;
				cout<<"Seleccione el tipo de llamada"<<endl;
				cout<<"0 para local, 1 para Larga distancia, 2 celular"<<endl;
				cin>>opcion;
				
				switch(opcion){
					case 0:
						cout<<"Agregando llamada Local"<<numeroLlamadas[local]<<endl;
						numeroLlamadas[local]=numeroLlamadas[local]+1;
						cout<<"Agregar duracion de llamada"<<endl;
						cin>>duracionLlamada;
						duracionLlamadas[local]=duracionLlamadas[local]+duracionLlamada;
						costoLlamadas[local]=costoLlamadas[local]+duracionLlamada*35;
						break;
					case 1:
						cout<<"Agregando llamada Larga Distacia"<<endl;
						numeroLlamadas[distancia]=numeroLlamadas[distancia]+1;
						cout<<"Agregar duracion de llamada"<<endl;
						cin>>duracionLlamada;
						duracionLlamadas[distancia]=duracionLlamadas[distancia]+duracionLlamada;
						costoLlamadas[distancia]=costoLlamadas[distancia]+duracionLlamada*380;
						break;
					case 2:
						cout<<"Agregando llamada Celular"<<endl;
						numeroLlamadas[celular]=numeroLlamadas[celular]+1;
						cout<<"Agregar duracion de llamada"<<endl;
						cin>>duracionLlamada;
						duracionLlamadas[celular]=duracionLlamadas[celular]+duracionLlamada;
						costoLlamadas[celular]=costoLlamadas[celular]+duracionLlamada*999;
						break;
					default:
						cout<<"Opcion no es correcta"<<endl;
						break;						
				}
			break;	
			case 2:
				cout<<"Numero total de llamadas local: "<<numeroLlamadas[local]<<endl;
				cout<<"Duracion total de llamadas local: "<<duracionLlamadas[local]<<endl;
				cout<<"Costo total de llamadas local: $"<<costoLlamadas[local]<<endl;
				cout<<"Numero total de llamadas larga distancia: "<<numeroLlamadas[distancia]<<endl;
				cout<<"Duracion total de llamadas larga distancia: "<<duracionLlamadas[distancia]<<endl;
				cout<<"Costo total de llamadas larga distancia: $"<<costoLlamadas[distancia]<<endl;
				cout<<"Numero total de llamadas celular: "<<numeroLlamadas[celular]<<endl;
				cout<<"Duracion total de llamadas celular: "<<duracionLlamadas[celular]<<endl;
				cout<<"Costo total de llamadas celular: $"<<costoLlamadas[celular]<<endl;
				break;
			case 3:
				numeroTotalLlamadas = numeroLlamadas[local] + numeroLlamadas[distancia] + numeroLlamadas[celular];
				duracionTotalLlamadas = duracionLlamadas[local] + duracionLlamadas[distancia] + duracionLlamadas[celular];
				costoTotalLlamadas = costoLlamadas[local] + costoLlamadas[distancia] + costoLlamadas[celular];
				costoPromedioPorMinuto = costoTotalLlamadas / duracionTotalLlamadas;
				cout<<"Numero total de llamadas todas las lineas: "<<numeroTotalLlamadas<<endl;
				cout<<"Duracion total de llamadas todas las lineas: "<<duracionTotalLlamadas<<endl;
				cout<<"Costo total de llamadas todas las lineas: $"<<costoTotalLlamadas<<endl;
				cout<<"Costo promedio por minuto es: $"<<costoPromedioPorMinuto<<endl;
				break;
			case 4:
				numeroLlamadas[local] =	duracionLlamadas[local] = costoLlamadas[local] = 0;
				numeroLlamadas[distancia] = duracionLlamadas[distancia] = costoLlamadas[distancia] = 0;
				numeroLlamadas[celular] = duracionLlamadas[celular] = costoLlamadas[celular] = 0;
				break;
			default:
				cout<<"Opcion no es correcta"<<endl;
				break;
			
		}
		cout<<"Digite 1 si desea continuar"<<endl;
		cin>>continuar;			
	}
	
	
}
