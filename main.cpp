#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int opcion;
    char contrasena [100];
    char enter;


    cout<<"****** BIENBENIDO A SU CAJERO VIRTUAL ******"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"*        INGRESE COMO QUIERE ENTRAR        *"<<endl;
    cout<<"********************************************"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"*   1.ADMINISTRADOR                        *"<<endl;
    cout<<"*   2.USUARIO                              *"<<endl;
    cout<<"*   3.SALIR                                *"<<endl;
    cout<<"*                                          *"<<endl;
    cout<<"********************************************"<<endl;
    cin>>opcion;
    system("CLS");//borra todo lo que estree en la consola
    switch (opcion) {
    case 1:
        cout<<"********************************************"<<endl;
        cout<<"*           INGRESE SU CONTRASENA          *"<<endl;
        cout<<"********************************************"<<endl;
        cin>>contrasena;
        system("CLS");//borra todo lo que estree en la consola
        while(opcion!=2){
            if(contrasena==contrasena){
                cout<<"********************************************"<<endl;
                cout<<"*             QUE QUIERE HECER             *"<<endl;
                cout<<"********************************************"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"*   1.CREAR USUARIO                        *"<<endl;
                cout<<"*   2.SALIR                                *"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"********************************************"<<endl;
                cin>>opcion;
            }
            system("CLS");//borra todo lo que estree en la consola
            if(opcion==1){
                cout<<"********************************************"<<endl;
                cout<<"*      INGRESE EL NUEVO USUARIO ASI        *"<<endl;
                cout<<"********************************************"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"*      <CEDULA>,<CONTRASENA>,<SALDO>       *"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"********************************************"<<endl;
                cin>>contrasena;
            }
            system("CLS");//borra todo lo que estree en la consola
        }
        break;
    case 2:
        cout<<"********************************************"<<endl;
        cout<<"*  INGRESE SU CEDULA Y SU CONTRASENA ASI   *"<<endl;
        cout<<"********************************************"<<endl;
        cout<<"*                                          *"<<endl;
        cout<<"*         <CEDULA>,<CONTRASENA>            *"<<endl;
        cout<<"*                                          *"<<endl;
        cout<<"********************************************"<<endl;
        cin>>contrasena;
        system("CLS");//borra todo lo que estree en la consola
        while(opcion!=3){
            if(contrasena==contrasena){
                cout<<"********************************************"<<endl;
                cout<<"*             QUE QUIERE HECER             *"<<endl;
                cout<<"********************************************"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"*   1.CONSULTAR SALDO                      *"<<endl;
                cout<<"*   2.RETIRAR DINERO                       *"<<endl;
                cout<<"*   3.SALIR                                *"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"********************************************"<<endl;
                cin>>opcion;
            }
            system("CLS");//borra todo lo que estree en la consola
            if(opcion==1){
                cout<<"********************************************"<<endl;
                cout<<"*              SU SALDO ES                 *"<<endl;
                cout<<"********************************************"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"*                <SALDO>                   *"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"********************************************"<<endl;
            }
            system("CLS");//borra todo lo que estree en la consola
            if(opcion==2){
                cout<<"********************************************"<<endl;
                cout<<"*          CUANTO DESEA RETIRAR            *"<<endl;
                cout<<"********************************************"<<endl;
                cin>>contrasena;
            }
            system("CLS");//borra todo lo que estree en la consola
        }
        system("CLS");//borra todo lo que estree en la consola
        break;
    case 3:
        cout<<"********************************************"<<endl;
        cout<<"* GRACIAS POR CONTAR CON NUESTRO SERVICIO  *"<<endl;
        cout<<"********************************************"<<endl;
        _sleep(3500);
        system("CLS");//borra todo lo que estree en la consola
        break;

    }


    return 0;
}
