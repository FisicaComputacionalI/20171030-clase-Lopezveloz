/**Promedioo de edad en la que se graduan
un grupo de personas
Creado por Itzia Lopezveloz
Lunes 30 de Octubre **/
#include <iostream>
using namespace std;
int main()
{
  int edad[14]; 
  int suma=0;
  for(int i=0;i<14;i++)
  {
    cout<<"¿A que edad terminaste la carrera?"<<endl;
    cin>>edad[i];
    suma+=edad[i];
  }
  for (int j=0;j<14;j++){
     cout<<edad[j]<<"j"<<endl;
  }
suma=suma/14;
cout<<"La edad promedio esperada es: "<<suma<<endl;
  return 0;
}
    
  
