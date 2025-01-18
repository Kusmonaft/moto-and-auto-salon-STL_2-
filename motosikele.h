#pragma once
#include"car.h"

class motosikele
{
public:
    string name;
    int year;
    double volume;
    double price;

    motosikele(string name_P, int year_P, double volume_P, double price_P) : name(name_P), year(year_P), volume(volume_P), price(price_P) {}
};