#include<iostream>
#include"PrintPares.h"

using namespace std; 

PrintPares::PrintPares( int tamanho, int listaNum[] ){
    setTamanho( tamanho );
    setListaNumeros( listaNum );
}

void PrintPares::setTamanho( int Tamanho ){
    tamanho = tamanho;
}

int PrintPares::getTamanho ( ) {
    return tamanho; 
}

void PrintPares::setListaNumeros( int listaNum[] ){
    listaNum = listaNum;
}


int* PrintPares::getListaNumeros() {
    return listaNum;
}

int PrintPares::printPares( ) {

    for(int i = 0; i < this->tamanho; i++){
        if( this->listaNum[i] % 2 == 0 ){
            cout << this->listaNum[i] << endl;
        }
    }
}

