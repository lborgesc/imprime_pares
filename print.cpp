#include<iostream>
#include"PrintPares.h"

using namespace std; 


int main ( ) {
    int listaNum[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int tamanho = sizeof(listaNum)/sizeof(int);

    PrintPares list( tamanho, listaNum );
    list.printPares( );

    return 0;
}