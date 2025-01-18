#pragma once
#include"car.h"
#include "motosikele.h"

class motorcycle_dealership
{
private:
    vector<motosikele> motorcycles;

public:
    void add(const motosikele& motorcycle) { motorcycles.push_back(motorcycle); }

    void deletee(size_t index) {
        if (index < motorcycles.size()) {
            motorcycles.erase(motorcycles.begin() + index);
        }
        else {
            cout << "������������ ������!" << '\n';
        }
    }

    void display() const {
        cout << "�������� ��������� | ���  | ����� ��������� | ����" << '\n';
        cout << "---------------------------------------------------------" << '\n';

        for (const auto& motorcycle : motorcycles) { cout << motorcycle.name << " | " << motorcycle.year << " | " << motorcycle.volume << "� | " << motorcycle.price << " ���." << '\n'; }
    }

    void sort_name() {
            sort(motorcycles.begin(), motorcycles.end(), [](const motosikele& a, const motosikele& b) { return a.name < b.name; });
    }

    void sort_year() {
        sort(motorcycles.begin(), motorcycles.end(), [](const motosikele& a, const motosikele& b) { return a.year < b.year; });
    }

    void sort_price() {
        sort(motorcycles.begin(), motorcycles.end(), [](const motosikele& a, const motosikele& b) { return a.price < b.price; });
    }

    void search_name(const std::string& name) const {
        bool found = false;
        for (const auto& motorcycle : motorcycles) {
            if (motorcycle.name == name) {
                std::cout << "������ ��������: " << motorcycle.name << " (" << motorcycle.year << ", " << motorcycle.volume << "�, " << motorcycle.price << " ���.)" << '\n';
                found = true;
            }
        }
        if (!found) {
            std::cout << "�������� � ��������� \"" << name << "\" �� ������." << '\n';
        }
    }

};


