#include <iostream>
using namespace std;

main(){
	/*
	int notas[4];
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i=0;i<4;i++){
		cout<<i<<":"<<notas[i]<<endl;	
	}
	
	for(int i : notas){
		cout<<i<<endl;
	}
	
	cout<<notas[0]<<endl;
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	
	notas[2] = 70;
	cout<<"valor modificado (2) "<<notas[2]<<endl;
	
	
	
	int tam = 0, suma = 0, promedio = 0;
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"Ingrese nota "<<i+1<<" : ";
		cin>>notas[i];
	}
	
	for(int i=0;i<tam;i++){
		suma += notas[i]; 
	
	}
	promedio = suma / tam;
	cout<<"el promedio es: "<<promedio<<endl;
	
	
	int tam = 0, suma = 0, promedio = 0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<" : ";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota (s/n): ";
		cin>>res;
	}while(res == 's' || res == 'S');
	
	for(int i=0;i<tam;i++){
		suma += notas[i];
	}
	promedio = suma / tam;
	cout<<"El promedio es: "<<promedio<<endl;
	
	char nombre[30];
	string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,nombre);
	cin.get(nombre,30);
	cout<<nombre<<endl;*/
	
	
	string semana[7]={"lunes","martes","miercoles","jueves","vienes","sabado","domingo"};
		
		semana[3] = "jueves";
		for(int i=0; i<7; i++){
			cout<<semana[i]<<endl;
		}
	
	
	system("pause");
}
