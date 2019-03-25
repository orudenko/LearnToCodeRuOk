// подключаем библиотеку для использования printf
#include "stdio.h"

// объявляем функцию суммирования ruoksum
int ruoksum (a, b){
    return a + b;
}

int main(){
// объявляем переменные
int a = 10;
int b = 32;

//вызываем функцию. 
//здесь мы должны получить _на_выходе_ из ruoksum
//число 42 и присвоить его переменной pribory

int pribory = ruoksum(a, b);

//пробуем напечатать значение, возвращаемое функцией ruoksum
printf("Приборы: ");
printf("%d", pribory);
printf("\n");
}

//int main(){
//    int ruoksum(int a, int b);
//    int sumvar = ruoksum (a, b);
//    char printf("%d", ruoksum);
//};


// function sumvar(pri, bory){
//     return pri + bory;
// }
// 
// const pri=10;
// const bory=32;
// 
// let pribory = sumvar(pri, bory);
// 
// console.log('pribory: '+pribory)