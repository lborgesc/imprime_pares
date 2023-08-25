#include<iostream>
#include"PrintPares.h"

using namespace std; 

PrintPares::PrintPares( int tam, int nums[] ){
    setTamanho( tam );
    listaNum = new int[ tam ];
    for ( int i = 0; i < tam; i++ ){
        listaNum[i] = nums[i];
    }   
}

PrintPares::~PrintPares() {
    delete[] listaNum; 
}

void PrintPares::setTamanho( int tam ){
    tamanho = tam;
}

int PrintPares::getTamanho ( ) {
    return tamanho; 
}

void PrintPares::setListaNumeros( int nums[] ){
    listaNum = new int[tamanho];
    for (int i = 0; i < tamanho; i++) {
        listaNum[i] = nums[i];
    }
}


int* PrintPares::getListaNumeros() {
    return listaNum;
}

void PrintPares::printPares( ) {

    for(int i = 0; i < tamanho; i++){
        if( listaNum[i] % 2 == 0 ){
            cout << listaNum[i] << endl;
        }
    }
}

