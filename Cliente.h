//
// Created by xicaosimoes on 11/10/21.
//

#ifndef TPSO_CLIENTE_H
#define TPSO_CLIENTE_H
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
typedef struct Clientedata ClData,*pcldata;
struct Clientedata{
    char nome[20];
    char sintomas[50];

};
void addutente(pcldata c,int i);
void ObtemCliente(pcldata C,int n);
void printaCliente(pcldata C,int i);
#endif //TPSO_CLIENTE_H
