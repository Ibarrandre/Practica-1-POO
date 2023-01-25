#include<iostream>
#include<cstdlib>

using namespace std;

class Materia{

 int clave;
 string nombre;
 string ProfesorTit;
 string LibroTex;


public:

 void Imprimir(){
      cout<<"la clave del curso es     "<<clave<<endl;
      cout<<"el nombre es    " <<nombre<<endl;
      cout<<"el Profesor Titular es "<<ProfesorTit<<endl;
      cout<<"el Libro de Texto es    " <<LibroTex<<endl;

 }
 void Cambiaclave(){
    cout<<"ingrese la nueva clave:"<<endl;
    cin>>clave;
    cout<<"la nueva clave es:"<<clave<<endl;
 }

 void CambiaProfesor(){
      cout<<"ingrese el nuevo Profesor:"<<endl;
      cin>>ProfesorTit;
      cout<<"el nuevo Profesor es:"<<ProfesorTit<<endl;
 }

//constructor
Materia(int,string,string,string);
};
//constructor
Materia::Materia(int _clave,string _nombre,string _ProfesorTit,string _LibroTex){

    clave=_clave;
    nombre=_nombre;
    ProfesorTit=_ProfesorTit;
    LibroTex=_LibroTex;


}

int main(){
  do{
    Materia Programacion (15,"Programacion","Pepe","introduccion a POO");
    Materia BasesDatos(11,"Bases de datos","Jose","introduccion a BD");


    int x,salir;
    int res1,res2,res3,res4,r;
    cout<<endl<<"    MENU"<<endl;
    cout<<"1.Cambiar Cambiar clavede materias"<<endl;
    cout<<"2.Cambiar Profesor"<<endl;
    cout<<"3.Imprimir los datos de las materias"<<endl;
    cout<<"4.salir"<<endl;
    cout<<"elige una opcion:"<<endl;
    cin>>x;

    switch(x)
    {
    case 1:
        cout<<"ingrese la materia a modificar"<<endl<<"1.programacion 2.BD:"<<endl;
        cin>>res1;
        if(res1==1){
            Programacion.Cambiaclave();
            Programacion.Imprimir();
        }
        else if(res1==2){
             BasesDatos.Cambiaclave();
             BasesDatos.Imprimir();
        }
    break;

    case 2:
         cout<<"ingrese la materia del profesor a modificar"<<endl<< "1.programacion 2.BD:"<<endl;
         cin>>res2;
          if(res2==10){
          Programacion.CambiaProfesor();

         }
         else if(res2==20){
            BasesDatos.CambiaProfesor();
         }

    break;

    case 3:
         cout<<"seleccione la materia a imprimir"<<endl<< "1.programacion 2.BD:"<<endl;
         cin>>res3;

          if(res3==10){
          Programacion.Imprimir();
         }
         else if(res3==20){
            BasesDatos.Imprimir();
         }

    break;

    case 4:
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
} while('x'!=4);
system("pause");
return 0;
}

