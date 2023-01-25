#include<iostream>
#include<cstdlib>

using namespace std;

class Empleado{

 int claveempleado;
 string nombre;
 int domicilio;
 double sueldo;
 int reportaA;

public:

 void Imprimir(){
      cout<<"la clave del empleado es     "<<claveempleado<<endl;
      cout<<"el nombre del empleado es    " <<nombre<<endl;
      cout<<"el domicilio del empleado es "<<domicilio<<endl;
      cout<<"el sueldo del empleado es    " <<sueldo<<endl;
      cout<<"el empleado se reporta a     " <<reportaA<<endl;
 }
 void Cambiadomic(){
    cout<<"ingrese el nuevo domicilio:"<<endl;
    cin>>domicilio;
    cout<<"el nuevo domicilio es:"<<domicilio<<endl;
 }

 void CambiaReportaA(){
      cout<<"ingrese el nuevo encargado es:"<<endl;
      cin>>reportaA;
      cout<<"el nuevo encargado es:"<<reportaA<<endl;
 }
 void Sueldoactual(){
     double x,nuevo;
      cout<<"ingrese el porcentaje de incremento:"<<endl;
      cin>>x;
      nuevo=x/100*sueldo+sueldo;
      cout<<endl;

      cout<<"el nuevo sueldo es:"<<nuevo<<endl;

 }
//constructor
Empleado(int,string,int,double,int);
};
//constructor
Empleado::Empleado(int _claveempleado,string _nombre,int _domicilio, double _sueldo,int _reportaA){

    claveempleado=_claveempleado;
    nombre=_nombre;
    domicilio=_domicilio;
    sueldo=_sueldo;
    reportaA=_reportaA;

}


int main(){
  do{
    Empleado Jefeplanta(10,"jose",1301,20000,01);
    Empleado JefePersonal(20,"Jose",1201,12000,01);


    int a,salir;
    int res1,res2,res3,res4,res5;
    cout<<endl<<"    MENU"<<endl;
    cout<<"1.Cambiar el domicilio"<<endl;
    cout<<"2.Actualizar el sueldo"<<endl;
    cout<<"3.Imprimir los datos"<<endl;
    cout<<"4.Cambiar encargado"<<endl;
    cout<<"5.salir"<<endl;
    cout<<"elige una opcion:"<<endl;
    cin>>a;

    switch(a)
    {
    case 1:
        cout<<"ingrese la clave del usuario a modificar:"<<endl;
        cin>>res1;
        if(res1==10){
            Jefeplanta.Cambiadomic();
        }
        else if(res1==20){
            JefePersonal.Cambiadomic();
        }
    break;

    case 2:
         cout<<"ingrese la clave del usuario a modificar:"<<endl;
         cin>>res2;
          if(res2==10){
          Jefeplanta.Sueldoactual();
         }
         else if(res2==20){
            JefePersonal.Sueldoactual();
         }

    break;

    case 3:
         cout<<"ingrese la clave del usuario a imprimir:"<<endl;
         cin>>res3;

          if(res3==10){
          Jefeplanta.Imprimir();
         }
         else if(res3==20){
            JefePersonal.Imprimir();
         }

    break;
    case 4:
         cout<<"ingrese la clave del usuario a modificar:"<<endl;
         cin>>res4;

          if(res4==10){
          Jefeplanta.CambiaReportaA();
         }
         else if(res4==20){
            JefePersonal.CambiaReportaA();
         }

    break;

    case 5:
        cout<<"Deseas salir?  1.Si/2.No:"<<endl;
        cin>>salir;
        if(salir==1){
            cout<<"Gracias por visitar"<<endl;
            return 0;
        }
        else if(salir==2){

            return main();
        }
    break;
    default:
        cout<<"opcion invalida"<<endl;
    break;
    }
} while('a'!=5);
system("pause");
return 0;
}
