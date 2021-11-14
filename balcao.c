//
// Created by xicaosimoes on 11/9/21.
//
#include <stdio.h>

#include "Cliente.h"

#include "balcao.h"

int main(int argc,char **argv){
    char *args[]={"Xico",NULL};
    execv("/Cliente",args);
    printf("HI sou balcao");
    return 0;
}


