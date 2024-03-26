#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
    string classe;
    int dias,valordiaria;
    double kmrodados,valorkm;
      cin>>classe>>dias>>kmrodados;
    if (classe=="ECONOMICO"){
      valordiaria=88.00;
      valorkm=1.15;
      cout<<"R$ "<<(valordiaria*dias)+(valorkm*kmrodados)<<endl<<"Carros a disposição: Fiat Uno 1.0, Fiat Mobi 1.0, Renault Kwid 1.0, VW Gol 1.0, Ford Ka 1.0, Renault Sandero 1.0, Onix Joy 1.0";
  }
    else if (classe=="INTERMEDIARIO"){
      valordiaria=197.00;
      valorkm=1.56;
      cout<<"R$ "<<(valordiaria*dias)+(valorkm*kmrodados)<<endl<<"Carros a disposição: HB20 1.6, VW Gol 1.6, Renault Sandero 1.0, Fiat Cronos 1.3, Onix 1.0 Turbo, Nissan Versa FAST";
    }
    else if (classe=="PRIME"){
      valordiaria=265.00;
      valorkm=2.89;
      cout<<"R$ "<<(valordiaria*dias)+(valorkm*kmrodados)<<endl<<"Carros a disposição: Ford Ecoesport 1.5, Renault Duster 1.6, Nissan Kicks 1.6, VW Nivus 1.6, Fiat Pulse 1.6, Chery Tiggo 3X Turbo";
    }
    else if (classe=="ESPECIAIS"){
      valordiaria=335.00;
      valorkm=3.40;
      cout<<"R$ "<<(valordiaria*dias)+(valorkm*kmrodados)<<endl<<"Carros a disposição: Jeep Compass 4x4 Diesel, Mitsubishi Pajero 2.4 Diesel, Mercedes C180, Toyota Corola Cross, VW Taos Highline, Mitsubishi Eclipse Cross";
}

    return 0;
    
    }
