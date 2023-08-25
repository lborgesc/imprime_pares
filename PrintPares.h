#include<iostream>

using namespace std; 


class PrintPares { 
    public: 
        PrintPares( int , int[] );

        void setTamanho( int );

        int getTamanho ( );

        void setListaNumeros( int[] );

        int* getListaNumeros ( );

        int printPares( ); 

    private: 
    int tamanho;
    int* listaNum;  
};
