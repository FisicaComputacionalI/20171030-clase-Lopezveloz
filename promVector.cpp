/**Promedioo de edad en la que se graduan
un grupo de personas
Creado por Itzia Lopezveloz
Lunes 30 de Octubre **/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  size_t talla; 
  int suma=0;
  cout<<"¿Cuantos datos vas a ingresar?"<<endl;
  cin>>talla;
  vector<int> edad(talla);
  for(int i=0;i<talla;i++)
  {
    cout<<"¿A que edad terminaste la carrera?"<<endl;
    suma+=edad[i];
  }
  for (int j=0;j<talla;j++){
     cout<<edad[j]<<"j"<<endl;
  }
suma=suma/talla;
cout<<"La edad promedio esperada es: "<<suma<<endl;
  return 0;
}
    
  
