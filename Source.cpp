#include"car.h"
#include"сar_dealership.h"
#include "motorcycle_dealership.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");

    сar_dealership showroom;
    int choice;
    int user;

    cout << "В какой салон хотите пойти?\n 1. Авто\n 2. Мото\n";
    cin >> user;
    switch (user)
    {
    case 1:
        do {
            cout << "Меню:\n" << "1. Добавить автомобиль\n" << "2. Удалить автомобиль\n" << "3. Отобразить автомобили\n" << "4. Сортировать по названию\n" << "5. Сортировать по году\n" << "6. Сортировать по цене\n" << "7. Поиск по названию\n" << "0. Выход\n" << "Введите ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                string name;
                int year;
                double volume, price;

                cout << "Введите название автомобиля: ";
                cin.ignore();
                getline(cin, name);
                cout << "Введите год выпуска: ";
                cin >> year;
                cout << "Введите объем двигателя: ";
                cin >> volume;
                cout << "Введите цену: ";
                cin >> price;

                showroom.add(car(name, year, volume, price));

                break;
            }
            case 2: {

                motorcycle_dealership showroom;

                size_t index;
                cout << "Введите индекс автомобиля для удаления: ";
                cin >> index;

                showroom.deletee(index);
                break;
            }
            case 3:
                showroom.display();
                break;
            case 4:
                showroom.sort_name();
                break;
            case 5:
                showroom.sort_year();
                break;
            case 6:
                showroom.sort_price();
                break;
            case 7: {
                string name;
                cout << "Введите название для поиска: ";
                cin.ignore();
                getline(cin, name);
                showroom.search_name(name);
                break;
            }
            case 0:
                cout << "Выход из программы." << '\n';
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте еще раз." << '\n';
            }
        } while (choice != 0);
        break;

    case 2:
        do {
            cout << "Меню:\n" << "1. Добавить мотоцикл\n" << "2. Удалить мотоцикл\n" << "3. Отобразить мотоцикы\n" << "4. Сортировать по названию\n" << "5. Сортировать по году\n" << "6. Сортировать по цене\n" << "7. Поиск по названию\n" << "0. Выход\n" << "Введите ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                string name;
                int year;
                double volume, price;

                cout << "Введите название мотоцикла: ";
                cin.ignore();
                getline(cin, name);
                cout << "Введите год выпуска: ";
                cin >> year;
                cout << "Введите объем двигателя: ";
                cin >> volume;
                cout << "Введите цену: ";
                cin >> price;

                showroom.add(car(name, year, volume, price));

                break;
            }
            case 2: {
                size_t index;
                cout << "Введите индекс мотоцикла для удаления: ";
                cin >> index;

                showroom.deletee(index);
                break;
            }
            case 3:
                showroom.display();
                break;
            case 4:
                showroom.sort_name();
                break;
            case 5:
                showroom.sort_year();
                break;
            case 6:
                showroom.sort_price();
                break;
            case 7: {
                string name;
                cout << "Введите название для поиска: ";
                cin.ignore();
                getline(cin, name);
                showroom.search_name(name);
                break;
            }
            case 0:
                cout << "Выход из программы." << '\n';
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте еще раз." << '\n';
            }
        } while (choice != 0);

        break;
    }
    
    return 0;
}