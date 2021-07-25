#ifndef OBMKDISK_H
#define OBMKDISK_H
#include <QString>
#include "string"
using namespace std;

class obmkdisk
{
public:
    obmkdisk();

    int size;
    string fit;
    string unidad;
    string path;
    string xd;

    void ejecutar(obmkdisk *disco);
    void mostrardatos(obmkdisk *disco);

};

#endif // OBMKDISK_H
