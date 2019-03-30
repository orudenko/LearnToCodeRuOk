// подключаем библиотеку для использования printf и scanf
#include "stdio.h"


// объявляем переменные height и weight
float height;
float weight;

// объявляем функцию вычисления bmi
float bmi_calc(float weight, float height){
    return weight / (height * height);
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

printf("\nрост:");
printf("%f", height);
printf("\n");
printf("%f", weight);
printf("\n");

//объявляем переменные bmi_ok, bmi_low, bmi_high
int bmi_ok = bmi_calc(weight,height) < 25 && bmi_calc(weight,height) >=18.5;
int bmi_low = bmi_calc(weight,height) < 18.5;
int bmi_high = bmi_calc(weight,height) >= 25;

printf("%f", bmi_calc(weight,height));
printf("\n");

//начинаем цикл

if /* условие: bmi низкий */ (bmi_low == 1) {
printf("Я должен написать, что вес низкий.\n");

} 
else if /* условие: bmi больше 25 */(bmi_high == 1) {
printf("Я должен написать, что вес высокий.\n");
}
else if /* условие:  bmi нормальный - от 18,5 до 24,99 */(bmi_ok == 1){
printf("Я должен написать, что вес нормальный.\n");
}
else {
printf("Что-то работает не так. \n");
}
}