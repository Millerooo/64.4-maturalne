#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
        string wiersz[21];
        string obrazek;
        struct korekta{
 int wiersz;
 int kolumna;}; 
       
        public:
                file();
                ~file();
                void loop(); 
                void sprawdzObraz();
};


file::file()
{
        inFile.open("dane_obrazki.txt"); 
        if (!inFile.good())
        {
                cerr << "Błąd pliku";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}

void file::loop()
{
        string data; 
        while (!inFile.eof())
        {
        	for (int i=0; i<=20; i++){
        		inFile >> wiersz[i];
			}
                inFile >> data;
                cout << data <<" ";
        }
}

void file::sprawdzObraz()
{
 struct korekta (obrazek pobraz){
 int parzw,parzk;	
 
 struct korekta wynik;
 
 wynik.wiersz=ROZM+1;
 wynik.kolumna=ROZM+1;
 
 	for(int i=0; i<RZM; i++){
 		parzw=parzk=0;
 	
 	for(int j=0; j<RZM; j++){
 		parzw=parzw+pobraz[i][j];  //sprawdzenie wierszaaa
 		parzk=parzk+pobraz[j][i];  //sprawdzenie kolumny
 }
 
 if ((parzw%2)!=pobraz[i][ROZM])
 wynik.wiersz=i+1;
 
 if ((parzk%2)!=pobraz[ROZM][i])
 wynik.kolumna=i+1;
 }
 
 return wynik;
} 
}
int main()
{
        file f;
        f.loop();
        f.sprawdzObraz();
        return 0;
}

