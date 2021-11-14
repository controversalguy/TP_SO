//
// Created by xicaosimoes on 11/10/21.
//

#include "medico.h"
#include "Cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*#include <signal.h>*/
int main(int argc, char **argv) {
    /*int estado;*/
    setbuf(stdout,NULL);
    setbuf(stdin,NULL);
    pid_t pid = 0;
    pid = getpid();
    /*fork();*/
    printf("PID[%d]\n", pid);

    if (argc != 3) {
        printf("SINTAXE <NOME> <ESPECIALIDADE>");
        exit(1);
    } else {
        pmedico m;
        m = malloc(sizeof(ClData));
        strcpy(m[0].nome,argv[1]);
         strcpy(m[0].especialidade, argv[2]);

        int mcount = 0;

            mcount++;

            for (int i = 1; i < 2; i++) {


                m = realloc(m, sizeof(medico) * (i + 1));

                addmedico(&m[i],i);


                /*execl("home/xicaosimoes/CLionProjects/tpSO",NULL);*/

            }



        for (int i = 0; i < mcount; i++) {
            printamedico(&m[i], i); // mostra os dados do medico
        }

        free(m);
    }

    return 0;
}
void addmedico(pmedico m, int i) {
    printf("\nBem-vindo especialista ao programa médico!\n");
    printf("Digite nome:");
    gets(m[i].nome);
    printf("Digite especialidade:");
    gets(m[i].especialidade);
}
void printamedico(pmedico mpr, int i){
    printf("\nNome: %s\n", mpr[i].nome);
    printf("\nEspecialidades: %s\n", mpr[i].especialidade);
}
