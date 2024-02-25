#include <iostream>

using namespace std; 
class animal{
protected: 
    string clase;
    int edad;
    int peso;
public: 
    animal(string, int, int); //constructor de la clase animal
    void mostrarAnimal(){
        cout<<"Clase: "<<clase<<endl<<"Edad: "<<edad<<endl<<"Peso: "<<peso<<endl;
    }
};
animal :: animal (string _clase, int _edad, int _peso){
    clase= _clase;
    edad= _edad;
    peso= _peso;
}
class mamifero : public animal{
private: 
    int npezones;
public: 
    animal(string, int, int. int); //constructor de la subclase mamifero
}
mamifero :: mamifero (string _clase, int _edad, int _peso, int _npezones) : animal (_clase, _edad, _peso)
int main(){

    
    return 0; 
}