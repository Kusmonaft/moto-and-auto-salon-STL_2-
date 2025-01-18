#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class car {
public:
    string name;
    int year;
    double volume;
    double price;

    car(string name_P, int year_P, double volume_P, double price_P) : name(name_P), year(year_P), volume(volume_P), price(price_P) {}
};

