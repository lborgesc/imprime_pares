#include<iostream>

using namespace std; 


class PrintPares { 
    public: 
        PrintPares( int , int[] );
        ~PrintPares();

        void setTamanho( int );
        int getTamanho ( );

        void setListaNumeros( int[] );
        int* getListaNumeros ( );

        void printPares( ); 

    private: 
    int tamanho;
    int* listaNum;  
};
