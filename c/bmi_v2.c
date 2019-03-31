// подключаем библиотеку для использования printf и scanf
#include "stdio.h"

// объявляем функцию вычисления bmi
float bmi_calc(float weight, float height){
    return weight / (height * height);
}

// объявляем переменные height, weight
float height;
float weight;

int main(){

    //Запрашиваем рост
    printf("Пожалуйста, укажите рост в метрах. В качестве десятичного разделителя используйте точку. \n");

    //Принимаем рост и записываем его в переменную height
    scanf("%f", &height);

    //Запрашиваем вес
    printf("Пожалуйста, укажите вес в килограммах. При необходимости в качестве десятичного разделителя используйте точку. \n");

    //Принимаем рост и записываем его в переменную weight
    scanf("%f", &weight);

    // объявляем переменную bmi
    float bmi = bmi_calc(weight, height);

    //Отображаем принятое в целях отладки

    printf("Рост: ");
    printf("%f", height);
    printf("\n");

    printf("Вес: ");
    printf("%f", weight);
    printf("\n");

    printf("Ваш BMI: ");
    printf("%f", bmi);
    printf("\n");


    /*это блок из прежней версии, пока просто закомменчен*/

    //объявляем переменные bmi_ok, bmi_low, bmi_high
    //int bmi_ok = bmi_calc(weight,height) < 25 && bmi_calc(weight,height) >=18.5;
    //int bmi_low = bmi_calc(weight,height) < 18.5;
    //int bmi_high = bmi_calc(weight,height) >= 25;

    //проверяем условия и выводим результат

    if /* условие: bmi низкий */ (bmi < 18.5) {
        printf("Считается, что такой BMI свидетельствует о низком весе.\n");
        } 
    else if /* условие: bmi больше 25 */(bmi >= 25) {
        printf("Считается, что такой BMI свидетельствует о высоком весе.\n");
        }
    else if /* условие:  bmi нормальный - от 18,5 до 24,99 */(bmi >= 18.5 && bmi < 25){
        printf("Считается, что такой BMI свидетельствует о нормальном весе.\n");
        }
    else {
        printf("Что-то работает не так. \n");
        }
}