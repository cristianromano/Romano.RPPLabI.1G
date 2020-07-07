#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "cliente.h"
#include "notebook.h"



void hardcodeoCliente(eCliente clientes[])
{

int i;

    int id [] = { 501 , 502 , 503 , 504 , 505};
    char nombre [] [20] = { "CRISTIAN" , "ANDRES" , "MIGUEL" , "JORGE" , "PEDRO"};
    char sexos [] = { 'M' , 'M' , 'M' , 'M', 'M'};


    for(i=0 ; i<5 ; i++)
    {


        clientes[i].id = id[i];
        limpiarBuffer();
        strcpy(clientes[i].nombre,nombre[i]);
        limpiarBuffer();
        clientes[i].sexo = sexos[i];
        limpiarBuffer();

    }

}

int cargarDescripcionCliente(char descripcion[] , eCliente clientes[] , int id , int tamCliente)
{

    int i , retorno;

    retorno = -1;

    for(i=0;i<tamCliente;i++)
    {
        if(clientes[i].id == id)
        {
            strcpy(descripcion,clientes[i].nombre);
            retorno = 1;
        }

    }

    return retorno;





}
