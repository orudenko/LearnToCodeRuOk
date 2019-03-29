// подключаем библиотеку для использования printf и scanf
#include "stdio.h"


// объявляем переменные height и weight
float height;
float weight;

// объявляем функцию вычисления bmi
float bmi_calc(weight,height){
    return weight / height;
}

int main(){

//Запрашиваем рост
printf("Пожалуйста, укажите рост в метрах. В качестве десятичного разделителя используйте точку. \n");

//Принимаем рост и записываем его в переменную height
scanf("%f", &height);

//Запрашиваем вес
printf("Пожалуйста, укажите вес в килограммах. При необходимости в качестве десятичного разделителя используйте точку. \n");

//Принимаем рост и записываем его в переменную weight
scanf("%f", &weight);

//Отображаем принятое в целях отладки

printf("\n");
printf("%f", height);
printf("\n");
printf("%f", weight);
printf("\n");

//объявляем переменную bmi
float bmi = bmi_calc(weight,height);

printf("%f", bmi);
printf("\n");


//int pribory = ruoksum(a, b);

//пробуем напечатать значение, возвращаемое функцией ruoksum
//printf("Приборы: ");
//printf("%d", pribory);
//printf("\n");
}