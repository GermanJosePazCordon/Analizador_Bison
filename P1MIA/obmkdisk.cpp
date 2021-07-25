#include "obmkdisk.h"
#include "iostream"

using namespace std;

obmkdisk::obmkdisk()
{

}

void obmkdisk::ejecutar(obmkdisk *disco){

    mostrardatos(disco);
}

void obmkdisk::mostrardatos(obmkdisk *disco){

    printf("\n\n---------DATOS----------\n\n");
    cout<<"El tamaño es "<<disco->size<<endl;
}
