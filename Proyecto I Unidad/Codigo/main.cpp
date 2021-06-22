#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
 int opcion=0;
    system("color 06");
    cout<<"\n\n\t**************"<<endl;
    cout<<"\tMENU DE JUEGOS"<<endl;//Tema del menu
    cout<<"\t**************"<<endl;
    cout<<endl;
    cout<<"1-> StarShip"<<endl;//Opcion del juego Num1
    cout<<"2-> Snake "<<endl;//Opcion del juego Num2
    cout<<"Seleccione un juego: ";//pedimos al usuario que seleccione una opcion. 
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
    case 1:
    { 
        system("color B");
        starShip();
        break;
    }
    case 2:
    { 
        system ("color 5");
        snake();
        break;
    }
    }
    return 0;
}
