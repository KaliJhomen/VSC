#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> numeros;

int main(){
int cant;
int nums;
cout<<"Ingrese la cantidad de numeros a ingresar: "<<endl;
cin>>cant;
for (int i=0; i<cant; ++i){
    cout<<"Ingrese el numero "<<i+1<<":"<<endl;
    cin>>nums;
    numeros.push_back(nums);
}
sort(numeros.begin(), numeros.end());
cout<<"Los numeros ordenados son: "<<endl;
for(int i=0; i<cant; ++i){
    cout<< numeros[i]<<endl;
}
    return 0;
}