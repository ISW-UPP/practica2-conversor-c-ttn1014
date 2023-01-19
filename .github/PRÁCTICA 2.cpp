#include <iostream>
using namespace std;

int main()
{
 float eur, lib, fra, rbr, par, ter, mic, libr, onz, ton, ly, nm, cm, ft, in;
	int opcion, tm, temp, dis;

	cout<< "Seleccione la opcion que desee realizar\n";
	cout << "1-Conversion de monedas, 2-Conversion de distancia, 3-Conversion de peso\n";
	cin >> opcion;
	
	switch (opcion)
	{
		case 1: cout << "Seleccione el tipo de moneda" << endl;
		cout << "4-Euros, 5-Libras, 6-Francos Suizos, 7-Reales brasileños, 8-Peso argentino\n";
		cin >> tm;
		switch (tm)
		{
		    case 4: cout << "Ingrese la cantidad de pesos MXN" << endl;
		    cin >> eur;
		    cout << "Usted tiene " << eur*0.49 << " euros" << endl;
            break;
		    case 5: cout << "Ingrese la cantidad de pesos MXN" << endl;
		    cin >> lib;
		    cout << "Usted tiene " << lib*0.043 << " libras" << endl;
		    break;
		    case 6: cout << "Ingrese la cantidad de pesos MXN" << endl;
		    cin >> fra;
		    cout << "Ustred tiene " << fra*0.049 << " francos suizos" << endl;
		    break;
		    case 7: cout << "Ingrese la cantidad de pesos MXN" << endl;
		    cin >> rbr;
		    cout << "Usted tiene " << rbr*0.27 << " reales brasileños" << endl;
		    break;
		    case 8: cout << "Ingrese la cantidad de pesos MXN" << endl;
		    cin >> par;
		    cout << "Usted tiene " << par*9.67 << " pesos argentinos" << endl;
		    break;
		}
		
		return 0;
		case 2: cout << "Seleccione un tipo de distancia" << endl;
		cout << "9-Pulgadas, 10-Pies, 11-Centimetros, 12-Nanometro, 13-Años Luz" << endl;
		cin >> dis;
		switch (dis)
		{
		    case 9: cout << "Ingrese la distancia que desee calcular" << endl;
		    cin >> in;
		    cout << "La distancia es: " << in*39370 << " pulgadas" << endl;
            break;
		    case 10: cout << "Ingrese la distancia que desee calcular" << endl;
		    cin >> ft;
		    cout << "La distancia es: " << ft*3281 << " pies" << endl;
		    break;
		    case 11: cout << "Ingrese la distancia que desee calcular" << endl;
		    cin >> cm;
		    cout << "La distancia es: " << cm*100000 << " centimetros" << endl;
		    break;
		    case 12: cout << "Ingrese la distancia que desee calcular" << endl;
		    cin >> nm;
		    cout << "La distancia es: " << nm*1000000000000  << " nanometros" << endl;
		    break;
		    case 13: cout << "Ingrese la distancia que desee calcular" << endl;
		    cin >> ly;
		    cout << "La distancia es: " << ly*0.00000000000010570 << " años luz" << endl;
		    break;
		}
		return 0;
		case 3: cout << "Seleccione la escala de temperatura" << endl;
		    cout << "14-Toneladas, 15-Onzas, 16-Libra, 17-Microgramo, 18-Teragramo" << endl;
		    cin >> temp;
		    switch (temp)
		  {
		    case 14: cout << "Ingrese el peso a calcular" << endl;
		    cin >> ton;
		    cout << "El peso es: " << ton/1000 << " toneladas" << endl;
            break;
		    case 15: cout << "Ingrese el peso a calcular" << endl;
		    cin >> onz;
		    cout << "El peso es: " << onz*35.274 << " onzas" << endl;
		    break;
		    case 16: cout << "Ingrese el peso a calcular" << endl;
		    cin >> libr;
		    cout << "El peso es: " << libr*2.205 << " libras" << endl;
		    break;
		    case 17: cout << "Ingrese el peso a calcular" << endl;
		    cin >> mic;
		    cout << "El peso es: " << mic*1000000000 << " microgramos" << endl;
		    break;
		    case 18: cout << "Ingrese el peso a calcular" << endl;
		    cin >> ter;
		    cout << "El peso es: " << ter/1000000000 << " teragramos" << endl;
		    break;
		  }
		  
		  return 0;
	}
}
