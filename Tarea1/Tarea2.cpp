#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main() 
{
	
	int marcador;
	int partidos = 0;
    int conteo = 0;
    int puntos = 0;
    int goles = 0;
    int finalgoles = 0;
    int finalpuntos = 0;
	srand(time(NULL));
	
	
	cout << "Cuanto partidos desea simular: ";
	cin >> partidos;
	system("cls");
	cout << "\n\t\tTabla F.C. Barcelona" << "\n     Partido\t\tGoles\t\tMarcador\n\n";
	
	
	do
	{
		conteo++;
		switch(conteo)
		{
			case 1:
				cout << "FCB - Valencia CF  ";
			break;
			case 2:
				cout << "FCB - Atle. Madrid ";
			break;
			case 3:
				cout << "FCB - Levante      ";
			break;
			case 4:
				cout << "FCB - Celta de Vigo";
			break;
			case 5:
				cout << "FCB - Eibar        ";
			break;
			default:
				cout << "Por confirmar      ";
		}
		
		
		if(conteo <= 5)
		{
			goles = rand()%5;
    		cout << "\t  " << goles;
    		finalgoles += goles;
    		marcador = 1+rand()%3;
    	if(goles == 0)
		{
			if(marcador == 1)
   		{
        	cout << "\t\tPerdio";
   		}
    	else
    	{	
      		cout << "\t\tEmpato";
      		puntos += 1;
    	}
		}else
		{
    	if(marcador == 1)
   		{
        	cout << "\t\tPerdio";
   		}
    	else if(marcador == 2)
    	{	
      		cout << "\t\tEmpato";
      		puntos += 1;
    	}
    	else
		{
			cout << "\t\tGano";
			puntos += 3;
		}
		}
		cout << endl;
		}
		else
		{
			cout << "\tS/N\t\tS/N" << endl;
		}
	}
	while(conteo < partidos);
	cout << endl;
	cout << "FC Barcelona tendria " << puntos << " puntos en total con " << finalgoles << " goles a favor" << endl;
}

