#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std; 

	void juego_dados(){
		char r;
		do{
		srand((unsigned)time(0));
		int lanzar_dados, dado_1, dado_2;
		cout << "Ingrese 1 para lanzar los dados (Tiene 2 lanzamientos): ";
		cin >> lanzar_dados;
		if(lanzar_dados==1){
		dado_1 = (rand()%6)+1;
		dado_2 = (rand()%6)+1;
		cout << "\nREGLAS" << endl;
		cout << "El usuario gana cuando los dos dados son iguales" << endl;
		cout << "El usuario gana cuando los dos dados suman 11" << endl;
		cout << "El usuario pierde cuando no se cumplen estas dos opciones" << endl;
		cout << "\nDADO #1: ";
		for (int x=1; x<=dado_1; x++){
			cout << "*"; 
		}
		cout << "\nDADO #2: ";
		for (int i=1; i<=dado_2; i++){
			cout << "*"; 
		}

		if (dado_1+dado_2==11){
			cout << "\nUsted ha ganado porque sus dados suman 11" << endl;
		} else if (dado_1==1 && dado_2==1){
			cout << "\nUsted ha ganado porque sus dados son par de unos" << endl;
		} else if (dado_1==2 && dado_2==2){
			cout << "\nUsted ha ganado porque sus dados son par de dos" << endl;
		} else if (dado_1==3 && dado_2==3){
			cout << "\nUsted ha ganado porque sus dados son par de tres" << endl;
		} else if (dado_1==4 && dado_2==4){
			cout << "\nUsted ha ganado porque sus dados son par de cuatro" << endl;
		} else if (dado_1==5 && dado_2==5){
			cout << "\nUsted ha ganado porque sus dados son par de cinco" << endl;
		} else if (dado_1==6 && dado_2==6){
			cout << "\nUsted ha ganado porque sus dados son par de seis" << endl;
		} else{
			cout << "\nUSTED HA PERDIDO" << endl;
		}
		cout << "\nGracias por jugar :) " << endl;
	}
		 else{
			cout << "\nUsted no ha iniciado el juego" << endl;
		}
	cout << "\nDesea volver a jugar? (s/n)" << endl;
	cin >> r; 
	cout << endl;
	} while (r=='s');
		
	}
	
	main (){
		
		juego_dados();
		 
	}

