﻿using namespace std;
#include <iostream>
#include<stdio.h>
#include<windows.h>
w
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");//нужно чтобы отображалась кириллица
    double weight, height, BMI; //задаю переменные для веса, роста и ИМТ
    cout << "Это калькулятор ИМТ. Вводите только цифры, и точку для разделения дробных значений." << endl; //приветствие
    cout << "Введите ваш вес в килограммах: ";
    cin >> weight; //ввод значения пользователем в переменную для веса
    cout << "Введите ваш рост в сантиметрах: ";
    cin >> height; //ввод значения пользователем в переменную для роста
    height /= 100; //делю на 100, чтобы преобразовать метры в сантиметры
    BMI = weight / (height * height); //вычисление ИМТ по формуле I=m/h²
    //дальше — if для каждого из случаев согласно Википедии (https://ru.wikipedia.org/wiki/Индекс_массы_тела). не использую case т. к. тот требует целочисленные значения.
    if (BMI < 16)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас выраженный дефицит массы тела." << endl;
    }
    if (BMI >= 16 && BMI < 18.5)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас дефицит массы тела." << endl;
    }
    if (BMI >= 18.5 && BMI < 25)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас нормальный вес." << endl;
    }
    if (BMI >= 25 && BMI < 30)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас избыточная масса тела." << endl;
    }
    if (BMI >= 30 && BMI < 35)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас ожирение первой степени." << endl;
    }
    if (BMI >= 35 && BMI < 40)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас ожирение второй степени." << endl;
    }
    if (BMI >= 40)
    {
        cout << "Ваш ИМТ — " << BMI << ". У вас ожирение третьей степени." << endl;
    }
}