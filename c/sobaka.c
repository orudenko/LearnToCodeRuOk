// подключаем библиотеку для использования printf
#include "stdio.h"

char sobaka_print(){
    printf("у попа была собака, он её любил \n она съела кусок мяса, он её убил \n в землю закопал \n и надпись написал, что ");
    printf(sobaka_print());
}

int main(){
    sobaka_print();
}