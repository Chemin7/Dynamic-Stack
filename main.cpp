#include <iostream>
#include "dynamicStack.h"
#include "validate.h"
using namespace std;

void menu() {
    Stack s;
    int opcion,num;
    string str_opcion,str_num;

    do {
        system("cls");
        s.showStack();
        cout<<"\n\n[1].ingresar numero\n[2].Eliminar tope\n[3].Mostrar tope\n[4].Mostrar pila\n[5].salir"<<endl;
        do {
            cout<<"Selecciona una opcion: ";
            cin>>str_opcion;

            }
        while( !(isInt(str_opcion) and str_opcion.length()==1 ));
        opcion=stoi(str_opcion);
        switch(opcion) {
            case 1:
                do {
                    cout<<"Ingresa un numero :";
                    cin>>str_num;
                    }
                while( !(isInt(str_num) and str_num.length()==1 ));
                num=stoi(str_num);
                s.push(num);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout<<s.getTop();
                break;
            case 4:
                s.showStack();
                break;
            default:
                cout<<"Opcion invalida "<<endl;
                system("pause");
            }
        }
    while(opcion!=5);
    }
int main() {
    menu();
    return 0;
    }
