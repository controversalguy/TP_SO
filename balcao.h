//
// Created by xicaosimoes on 11/9/21.
//

#ifndef TPSO_BALCAO_H
#define TPSO_BALCAO_H
#include <stdio.h>
typedef struct Administrador admin;
struct Administrador{
    char nomeU[30];
    char especialidade[15];
    char prioridade;
};
typedef struct balcony balcao,*pbalcao;
struct balcony{
    char novoU[20];
    char cespecialidade[15];
    char especialista[10];
};
#endif //TPSO_BALCAO_H
