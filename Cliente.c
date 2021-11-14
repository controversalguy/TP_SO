#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "Cliente.h"
#include "medico.h"
#include "balcao.h"

// Created by xicaosimoes on 11/10/21.
//
int main(int argc, char **argv) {

printf("Ola sou cliente");


    pid_t pid = 0;
    pid = getpid();
    printf("PID[%d]\n", pid);
    setbuf(stdout, NULL);
    printf("nome:%s", argv[1]);
    if (argc != 2) {
        printf("SINTAXE <NOME>");
        exit(1);
    } else {
        pcldata c;
        c = malloc(sizeof(ClData));
        strcpy(c[0].nome, argv[1]);
        char s;

        printf("\nDigite sintomas:");//pede sintomas pois nome indicado no argv[1]
        gets(c[0].sintomas);

        int ccount = 1;
        do {
            ccount++;

            for (int i = 1; i < ccount; i++) {


                c = realloc(c, sizeof(ClData) * (i + 1));

                addutente(&c[i], i);//adiciona um utente pedindo nome e sintomas

                execl("home/xicaosimoes/CLionProjects/tpSO/medico.c",NULL);
            }



    }while (ccount != 3);
    for (int i = 0; i < ccount; i++) {
        printaCliente(&c[i], i); // mostra os dados do utente
    }

    free(c);
}

    return 0;
}
void addutente(pcldata c, int i) {

    printf("Digite nome:");
    gets(c[i].nome);
    printf("Digite sintomas:");
    gets(c[i].sintomas);
}

void printaCliente(pcldata c, int i) {
    printf("\nNome: %s\n", c[i].nome);
    printf("\nSintomas: %s\n", c[i].sintomas);
}


