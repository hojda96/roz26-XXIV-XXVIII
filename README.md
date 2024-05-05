This exercise is taken from the book “Opus Magnum C++11” by J. Grebosz, as far as I know there is no English version. In his book author suggests using Polish variable names, so I did. Comments are also in Polish. 

 

The complete list of exercises can be found on author website: 

https://ifj.edu.pl/private/grebosz/opus_php/wybor_rozdzialu.php 

*******************************************************************************************
Napisz operator zdolny obsłużyć stałą dosłowną  reprezentującą temperaturę w stopniach
Celsjusza, zapisywaną  według takiego schematu: 36.6_stC.  Operator ten powinien zamieniać tę
stałą na  obiekt klasy Temperatura, gdzie zadana wartość  zostanie przechowana w składniku
stopnie_celsjusza.  Zdefiniuj także zaprzyjaźniony z klasą operator wypisywania  <<, który
pozwoli na ekranie wypisać zadaną temperaturę  za pomocą następującej instrukcji:  
cout << "Temperatura ciala: " << 36.6_stC << endl;  

Rozwijając poprzednie ćwiczenie, napisz operator zdolny  obsłużyć stałą dosłowną
reprezentującą  temperaturę w stopniach Fahrenheita. Operator ten ma wytwarzać  obiekt klasy
Temperatura, w którym  wartość przysłanej mu temperatury w stopniach Fahrenheita  będzie zapisana
w składniku fahrenheit_wart_bezwzgledna.  Klasa od razu ma przeliczyć tę wartość na wartość
 w stopniach Celsjusza według znanego wzoru c = (f – 32)  * 5 / 9.0, gdzie f jest temperaturą
podaną  w stopniach Fahrenheita, a wynik c – wartością  odpowiadającą jej temperaturze w
stopniach Celsjusza. Klasa  powinna schować wynik w składniku stopnie_celsjusza.  Skoro tak,
to instrukcja:  
	cout << "100.0_stF: " << 100.0_stF << " stopni Celsjusza" << endl;  
powinna wypisać następujący tekst: 100.0_stF:  37.7778 stopni Celsjusza.

W klasie Temperatura zdefiniuj funkcję  konwertującą, tak by możliwe były instrukcje:
 
	double x = 80.0_stF;
	cout << x << endl;			// ma wydrukować: 26.6667

 W rozwinięciu problemu z poprzednich ćwiczeń: spraw,  by następujące instrukcje:  
	cout << " –1.0_stF to w skali Celsjusza: " << –1.0_stF  <<  endl;
	cout << " 0.0_stF to w skali Celsjusza: " << 0.0_stF << endl;
	cout << " 1.0_stF to w skali Celsjusza: " << 1.0_stF << endl;
	//  Ważne sprawdzenie. Powinno być -40F ==  -40C
    cout << " -40.0_stF to w skali Celsjusza: "<< -40.0_stF <<  endl;  
drukowały pokazane poniżej rezultaty:  
 –1.0_stF to w skali Celsjusza: –18.3
 0.0_stF to w skali Celsjusza: –17.8
 1.0_stF to w skali Celsjusza: –17.2
 –40.0_stF to w skali Celsjusza: –40  


 Jeśli  poprzednie ćwiczenie udało Ci się rozwiązać,
 to upewnij się, że następujące instrukcje:  
	cout << "40.0_stF = " 			<< 40.0_stF 			<< endl;
	cout << "–40.0_stF = "			<< –40.0_stF 			<< endl;
	cout << "–(–40.0_stF) = " 		<< –(–40.0_stF) 		<<  endl;
	cout << "–(–(40.0_stF)) = " 		<< –(–(–40.0_stF))  		<< endl;
	cout << "–(–(–(–40.0_stF))) = "	<< –(–(–(–40.0_stF)))  	<< endl;  ...wydrukują
taki tekst:  
40.0_stF = 4.44
–40.0_stF = –40
–(–40.0_stF) = 4.44
–(–(–40.0_stF)) = –40
–(–(–(–40.0_stF))) = 4.44 
