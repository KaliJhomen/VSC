#include <iostream>
using namespace std; 
class humano {
protected:
    string nombre;
    bool come;
    bool duerme;
    bool estudia;
public: 
    humano(string, bool, bool, bool); //constructor de la clase humano
    void mostrarHumano(){
        string comeS = come ? "Si" : "No";
        string duermeS = duerme ? "Si" : "No";
        string estudiaS = estudia ? "Si" : "No";
        cout<<"Nombre: "<<nombre<<endl<<"Come?: "<<comeS<<endl<<"Duerme?: "<<duermeS<<endl<<"Estudia?: "<<estudiaS<<endl;
    }
};
humano :: humano (string _nombre, bool _come, bool _duerme, bool _estudia= false){
    nombre= _nombre;
    come= _come;
    duerme= _duerme;
}
class universitario : public humano{
public: 
    universitario(string, bool, bool, bool);
    void mostrarUniversitario(){
        mostrarHumano();
    }
};
universitario :: universitario (string _nombre, bool _come, bool _duerme, bool _estudia) : humano (_nombre, _come, _duerme, _estudia ){
}

int main(){
    universitario universitario1 ("Soberbio", 0, 0, 1);
    cout <<"Universitario:"<<endl;
    universitario1.mostrarUniversitario();

    humano humano1 ("Luchito", 1, 1);
    cout<<endl<<"Persona:"<<endl;
    humano1.mostrarHumano(); 

    return 0;
}