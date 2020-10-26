#include <iostream>
#include <fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
string Desencriptar(string binario);
string leer(string nombre_archivo);


int main()
{
    int opcion,contador,numero;
    string Acontrasena,contrasena,numeros,sacado,temp,p="sudo.txt";
    string enteros;
    ofstream Guardar;
    Guardar.open("../practica_tres_aplicacion/BD/usuarios.txt",ios::app);
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

        sacado=leer(p);



        for(unsigned int i=0;i<sacado.length();i++){
            if (sacado.at(i) == ' '){
                Acontrasena+=Desencriptar(temp);
                //cout<<Acontrasena<<endl;
                temp="";
            }else{
                temp+=sacado.at(i);
}
        }
        Acontrasena+=Desencriptar(temp);
        //cout<<Acontrasena<<endl;
        for(unsigned int i=0;i<=Acontrasena.length();i++){
            if (contador%8==0&&contador!=0){
                numero=std::stoi(enteros, nullptr, 2);
                numeros+=char(numero);
                enteros="";
            }if(i==Acontrasena.length()){
                break;
            }
            enteros+=Acontrasena.at(i);
            contador+=1;
        }
        //cout<<numeros<<endl;
        _sleep(1000);
        system("CLS");//borra todo lo que estree en la consola
        while(opcion!=2){
            if(contrasena==numeros){
                cout<<"********************************************"<<endl;
                cout<<"*             QUE QUIERE HECER             *"<<endl;
                cout<<"********************************************"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"*   1.CREAR USUARIO                        *"<<endl;
                cout<<"*   2.SALIR                                *"<<endl;
                cout<<"*                                          *"<<endl;
                cout<<"********************************************"<<endl;
                cin>>opcion;
                _sleep(1000);
                system("CLS");
                if(opcion==1){
                    cout<<"********************************************"<<endl;
                    cout<<"*      INGRESE EL NUEVO USUARIO ASI        *"<<endl;
                    cout<<"********************************************"<<endl;
                    cout<<"*                                          *"<<endl;
                    cout<<"*      <CEDULA>,<CONTRASENA>,<SALDO>       *"<<endl;
                    cout<<"*                                          *"<<endl;
                    cout<<"********************************************"<<endl;

                    cin>>contrasena;


                    Guardar << contrasena<< endl;
                    _sleep(3500);
                    system("CLS");
                }
                system("CLS");//borra todo lo que estree en la consola
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
string Desencriptar(string binario){
    string l;
    unsigned int contador=0;
    for (unsigned int i=0;i<binario.length();++i){
        if (contador==binario.length()-1){
            l+=binario.at(0);

        }
        if (i+1<binario.length()){
            l+= binario.at(i+1);
        }
        contador+=1;
    }
    //cout<<l<<endl;
    return l;
}

string leer(string nombre_archivo){
    string data;
    string texto;
    // Abre el archivo en modo lectura
    ifstream infile;
    string direccion="../practica_tres_aplicacion/BD/";
    direccion+=nombre_archivo;
    // Se pone de manera explicita la ruta relativa donde se encuentra el archivo
    infile.open(direccion);

    // Se comprueba si el archivo fue abierto exitosamente
    if (!infile.is_open())
    {
        cout << "Error abriendo el archivo" << endl;
        exit(1);
    }
    while(!infile.eof()){
        infile>>data;
        if (texto==""){
            texto= data;
        }
        else{
            texto= texto+ " " + data;
        }
        //cout<<texto<<"-"<<endl;
    }
    //cout << "Leyendo el archivo" << endl;
    //cout<<texto<<"#"<<endl;
    //    infile >> data;

    // Se escribe el dato en la pantalla
    //cout << data << endl;
    //cout << "longitud: " << data.length() << endl;

    //cout << "Impresion caracter a caracter" << endl;
    //    for (unsigned int i = 0; i < data.length(); i++) {
    //        cout << data.at(i) << endl;
    //    }

    // Se cierra el archivo abierto
    infile.close();
    //cout << texto << endl;
    return texto;
}
