#include <iostream>
using namespace std;

void mostrarAsientos(bool asientos[10][10]){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout<< (asientos[i][j] ? "[x]":"[ ]" );
        }
        std::cout<<std::endl;
    }
}
void reservarAsientos(bool *p){
  *p = true;
}
int main(){
    const int filas=10, columnas=10;
    bool asientos[filas][columnas];
    asientos[filas][columnas] = true;

    std::cout<<"estado de los asientos" << std::endl;
    mostrarAsientos(asientos);

    int fila, columna;
    std::cout<<" en que fila quieres reservar (1-"<< filas << ")" << std::endl;
    std::cin>> fila;
    std::cout<<" en que columna quieres reservar (1-"<< columnas << std::endl;
    std::cin>> columna;
    if(fila>0 && fila<=filas && columna>0 && columna<=columnas){

        reservarAsientos(&asientos[fila-1][columna-1]);
        mostrarAsientos(asientos);
    }
    else{ std::cout<< "el asiento  no existe" << std::endl;

    }
}

