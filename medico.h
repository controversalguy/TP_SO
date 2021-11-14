//
// Created by xicaosimoes on 11/10/21.
//

#ifndef TPSO_MEDICO_H
#define TPSO_MEDICO_H
typedef struct Medico medico,*pmedico;

struct Medico{
    char nome[20];
    char especialidade[20];

};
void addmedico(pmedico m, int i);
void printamedico(pmedico mpr, int i);
#endif //TPSO_MEDICO_H
