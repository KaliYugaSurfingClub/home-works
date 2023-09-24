#include <stdio.h>
#include <Windows.h>

#define PI 3.14


void getCilynderVolume()
{
    float radius = 0;
    float height = 0;

    printf("1. введите: радиус и высоту цилиндра, чтобы узнать его объем\n"); 
    scanf("%f %f", &radius, &height);

    float volume = radius * radius * PI * height;

    printf("%.3f - объем\n", volume);
}


void getCilynderArea()
{
    float radius = 0;
    float height = 0;

    printf("2. введите: радиус и высоту цилиндра, чтобы узнать его площадь поверхности\n");
    scanf("%f %f", &radius, &height);
    
    float area = (height + radius) * 2 * radius * PI;

    printf("%.3f - площадь поверхности\n", area);
}


void fromMinutesToHours()
{
    int inputMinutes = 0;

    printf("3. введите: кол-во минут, чтобы перевести их в минуты и часы\n");
    scanf("%d", &inputMinutes);

    int hourse = inputMinutes / 60;
    int minutes = inputMinutes - 60 * (inputMinutes / 60);

    printf("%d часов %d минут\n", hourse, minutes);
}


void fromPoundsToKg()
{
    float pounds = 0;

    printf("4. введите: кол-во фунтов, чтобы перевести их кг\n");
    scanf("%f", &pounds);

    float kg = (pounds * 405.9) / 1000;

    printf("%.3f кг\n", kg);
}


void fromVerstsToKm()
{
    float versts = 0;

    printf("5. введите: кол-во верст, чтобы перевести их км\n");
    scanf("%f", &versts);

    float km = (versts * 1066.8) / 1000;

    printf("%.3f км\n", km);
}


void getPower()
{
    float q = 0;
    float t = 0;

    printf("6. введите: q и t, чтобы, узнать силу тока\n");
    scanf("%f %f", &q, &t);

    float i = q / t;

    printf("%.3f - сила тока\n", i);
}


void priceFromGrToKg()
{
    float priceGr = 0;

    printf("7. введите: цену за 100 грамм, чтобы узнать цену за кг\n");
    scanf("%f", &priceGr);

    float priceKg = 100 * priceGr;

    printf("%.3f - цена за кг\n", priceKg);
}


void getResistance()
{
    float rOne = 0;
    float rTwo = 0;

    printf("8. введите: сопротивление двух резисторов, чтобы узнать сопротивление цепи\n");
    scanf("%f %f", &rOne, &rTwo);

    float res = (rOne * rTwo) / (rOne + rTwo);

    printf("%.3f - сопротивление цепи\n", res);
}


void getRectArea()
{
    float lenOne = 0;
    float lenTwo = 0;

    printf("9. введите: длинны сторон прямоугольника, чтобы узнать его площадь\n");
    scanf("%f %f", &lenOne, &lenTwo);

    float area = lenOne * lenTwo;

    printf("%.3f - площадь\n", area);
}


void getApplesPrice()
{
    float kg = 0;
    float price = 0;

    printf("10. введите: кол-во кг и цену за кг, чтобы узнать стоимось яблок\n");
    scanf("%f %f", &kg, &price);

    float area = kg * price;

    printf("%.3f - стоимость\n", area);
}


void getTripPrice()
{
    float lenWay = 0;
    float gasolineConsumption = 0;
    float gasolinePrice = 0;

    printf("11. введите: расстояние до дачи потребление, бензина автомобилем на 100км, цену бензина за литр, чтобы узнать стоимось поездки\n");
    scanf("%f %f %f", &lenWay, &gasolineConsumption, &gasolinePrice);

    float price = (lenWay / 100) * gasolineConsumption * gasolinePrice * 2;

    printf("%.3f - стоимость\n", price);
}


void getParallelepipedVolume()
{
    float lenOne = 0;
    float lenTwo = 0;
    float lenTree = 0;

    printf("12. введите: все три измерения параллелепипеда, чтобы узнать его объем\n");
    scanf("%f %f %f", &lenOne, &lenTwo, &lenTree);

    float volume = lenOne * lenTwo * lenTree;

    printf("%.3f - объем\n", volume);
}


int main()
{
    system("chcp 65001");

    getCilynderVolume();
    getCilynderArea();
    fromMinutesToHours();
    fromPoundsToKg();
    fromVerstsToKm();
    getPower();
    priceFromGrToKg();
    getResistance();
    getRectArea();
    getApplesPrice();
    getTripPrice();
    getParallelepipedVolume();

    return 0;
}