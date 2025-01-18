#pragma once
#include"car.h"

class сar_dealership {
private:
    vector<car> cars;

public:
    void add(const car& car) { cars.push_back(car); }

    void deletee(size_t index) {
        if (index < cars.size()) {
            cars.erase(cars.begin() + index);
        }
        else {
            cout << "Некорректный индекс!" << '\n';
        }
    }

    void display() const {
        cout << "Название автомобиля | Год  | Объем двигателя | Цена" << '\n';
        cout << "---------------------------------------------------------" << '\n';

        for (const auto& car : cars) {
            cout << car.name << " | " << car.year << " | " << car.volume << "л | " << car.price << " руб." << '\n';
        }
    }

    void sort_name() {
        sort(cars.begin(), cars.end(), [](const car& a, const car& b) {
            return a.name < b.name;
            });
    }

    void sort_year() {
        sort(cars.begin(), cars.end(), [](const car& a, const car& b) {
            return a.year < b.year;
            });
    }

    void sort_price() {
        sort(cars.begin(), cars.end(), [](const car& a, const car& b) {
            return a.price < b.price;
            });
    }

    void search_name(const string& name) const {
        bool found = false;
        for (const auto& car : cars) {
            if (car.name == name) {
                cout << "Найден автомобиль: " << car.name << " (" << car.year << ", " << car.volume << "л, " << car.price << " руб.)" << '\n';
                found = true;
            }
        }
        if (!found) {
            cout << "Автомобиль с названием \"" << name << "\" не найден." << '\n';
        }
    }
};


