#include <iostream>
using namespace std;
//clase pila que contiene un entero llamado sp=0
//push es para añadir datos y pop es para sacar datos
class pila{
private:
    int sp;
    int datos[100];

public:
    pila ();
    void push(int);
    void pop();
    void mostrarelementos(){
    for ( int i=0; i<sp; i++)
        cout << datos[i]<<" "; 
        cout <<endl<<"--------------------------"<<endl;
    };
};
pila :: pila (){
sp=0;
}
void pila :: push(int x){
    if (sp<20){
        datos[sp]=x;
    sp++;
    }else{
        cout<<"La pila esta llena"<<endl;
    }
}
void pila :: pop (){
    if (sp<0){
    cout<<"Pila vacia"<<endl;
    }else{
    sp--;
    } 
}

int main (){
pila p;
int cont=0, i=0;
for (;true;){
    if(cont==20){
        break;
    }
    else if (i%2==0){
        p.push(i);
        cont++;
    }
    i++;
}
p.mostrarelementos();
p.pop();
p.pop();
p.mostrarelementos();
return 0;
}