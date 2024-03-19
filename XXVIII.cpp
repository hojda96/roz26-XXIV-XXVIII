#include <iostream>
using namespace std;

class Temperatura
{
public:
	


	friend ostream& operator<< (ostream& wypisz, Temperatura Temp);
	friend Temperatura operator"" _stC(long double Cels);
	friend Temperatura operator"" _stF(long double Fahr);

	operator double() {
		return stopnie_Celsujsza;
	}

	Temperatura operator-() {
		Temperatura kopia = *this;
		if (kopia.czyPodanoWCels) {
			kopia.stopnie_Celsujsza = -kopia.stopnie_Celsujsza;
		}
		else
		{
			kopia.fahrenheit_wart_bewzgledna = -kopia.fahrenheit_wart_bewzgledna;
			kopia.stopnie_Celsujsza = 5.0 / 9.0 * (kopia.fahrenheit_wart_bewzgledna - 32);
		}

		return kopia;
	}
private:
	double stopnie_Celsujsza;
	double fahrenheit_wart_bewzgledna;
	bool czyPodanoWCels;		

};


Temperatura operator"" _stC(long double Cels) {
	Temperatura temp;
	temp.stopnie_Celsujsza = Cels;
	temp.czyPodanoWCels = true;
	return temp;

}


Temperatura operator"" _stF(long double Fahr) {
	Temperatura temp;
	temp.fahrenheit_wart_bewzgledna = Fahr;
	temp.czyPodanoWCels = false;
	temp.stopnie_Celsujsza = 5.0 / 9.0 * (Fahr - 32);
	return temp;
}



ostream& operator<< (ostream& wypisz, Temperatura Temp) {

	return wypisz << Temp.stopnie_Celsujsza;
}

int main()
{	

				// XXIV
	cout << "Temperatura ciala: " << 36.6_stC << endl<<endl;
				// XXV
	cout << "100.0_stF: " << 100.0_stF << " stopni Celsjusza" << endl << endl;
				//XXVI
	double x = 80.0_stF;
	cout << x << endl << endl;
				//XXVII
	cout << " –1.0_stF to w skali Celsjusza: " << -1.0_stF << endl;
	cout << " 0.0_stF to w skali Celsjusza: " << 0.0_stF << endl;
	cout << " 1.0_stF to w skali Celsjusza: " << 1.0_stF << endl;
	//  Ważne sprawdzenie. Powinno być -40F ==  -40C
	cout << " -40.0_stF to w skali Celsjusza: " << -40.0_stF << endl << endl;

    
	cout << "40.0_stF = " << 40.0_stF << endl;
	cout << "–40.0_stF = " << -40.0_stF << endl;
	cout << "–(–40.0_stF) = " << -(-40.0_stF) << endl;
	cout << "–(–(40.0_stF)) = " << -(-(-40.0_stF)) << endl;
	cout << "–(–(–(–40.0_stF))) = " << -(-(-(-40.0_stF))) << endl << endl;

	cout << "-2stC = " << -2.0_stC << endl;

}
