#include <iostream>

using namespace std; 
class animal{
protected: 
    string especie;
    int edad;
    int peso;
public: 
    animal(string, int, int); //constructor de la clase animal
    void mostrarAnimal(){
        cout<<"Especie: "<<especie<<endl<<"Edad: "<<edad<<" meses"<<endl<<"Peso: "<<peso<<" kg"<<endl;
    }
};
animal :: animal (string _especie, int _edad, int _peso){
    especie= _especie;
    edad= _edad;
    peso= _peso;
}
//subclase mamifero
class mamifero : public animal{
private: 
    int npezones;
public: 
    mamifero(string, int, int, int); //constructor de la subclase mamifero
    void mostrarMamifero(){
        mostrarAnimal();
        cout<<"Numero de pezones: "<<npezones<<endl;
    }
};
mamifero :: mamifero (string _clase, int _edad, int _peso, int _npezones) : animal (_clase, _edad, _peso){
    npezones= _npezones;
}

int main(){
    //prueba con datos preespecificados
    mamifero mamifero1("Gato", 5, 18, 8);   
    mamifero1.mostrarMamifero();

    char esmamifero;
    string especie;
    int edad;
    int peso;
    cout<<"Ingrese la especie: "<<endl;
    cin>>especie;
    cout<<"Ingrese la edad: (en meses)"<<endl;
    cin>>edad;
    cout<<"Ingrese el peso: (en kg)"<<endl;
    cin>>peso;
    cout<<"Es mamifero?: (Y/N)"<<endl;
    cin>>esmamifero;
    if (esmamifero== 'Y'|| esmamifero=='y'){
        int npezones;
        cout<<"Ingrese el numero de pezones: "<<endl;
        cin>>npezones;
        mamifero mamifero2(especie, edad, peso, npezones);
        mamifero2.mostrarMamifero();
    }
    else {
    animal animal1(especie, edad, peso);
    animal1.mostrarAnimal();
    }
    return 0; 
}