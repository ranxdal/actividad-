#include <iostream>
using namespace std;
main(){
	/*int matriz[2][3]={{10,20,30},{40,50,60}};	
	cout<<matriz[1][0]<<endl;*/
	
	int fil=0,col=0;
	cout<<"Ingrese filas: ";
	cin>>fil;
	cout<<"Ingrese columnas: ";
	cin>>col;
	int matriz[fil][col];
	cout<<"------------- INGRESAR -----------------"<<endl;
	for(int i=0;i<fil;i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": ";
			cin>>matriz[i][ii];
		}
		cout<<"________________"<<endl;
	}
	
	cout<<"------------- MOSTRAR -----------------"<<endl;
	for(int i=0;i<fil;i++){
		for(int ii=0; ii<col; ii++){
			cout<<i<<","<<ii<<": "<<matriz[i][ii]<<endl;
		}
		
	}
	system("pause");
}
