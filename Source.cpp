#include"car.h"
#include"�ar_dealership.h"
#include "motorcycle_dealership.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");

    �ar_dealership showroom;
    int choice;
    int user;

    cout << "� ����� ����� ������ �����?\n 1. ����\n 2. ����\n";
    cin >> user;
    switch (user)
    {
    case 1:
        do {
            cout << "����:\n" << "1. �������� ����������\n" << "2. ������� ����������\n" << "3. ���������� ����������\n" << "4. ����������� �� ��������\n" << "5. ����������� �� ����\n" << "6. ����������� �� ����\n" << "7. ����� �� ��������\n" << "0. �����\n" << "������� ��� �����: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                string name;
                int year;
                double volume, price;

                cout << "������� �������� ����������: ";
                cin.ignore();
                getline(cin, name);
                cout << "������� ��� �������: ";
                cin >> year;
                cout << "������� ����� ���������: ";
                cin >> volume;
                cout << "������� ����: ";
                cin >> price;

                showroom.add(car(name, year, volume, price));

                break;
            }
            case 2: {

                motorcycle_dealership showroom;

                size_t index;
                cout << "������� ������ ���������� ��� ��������: ";
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
                cout << "������� �������� ��� ������: ";
                cin.ignore();
                getline(cin, name);
                showroom.search_name(name);
                break;
            }
            case 0:
                cout << "����� �� ���������." << '\n';
                break;
            default:
                cout << "�������� �����. ����������, ���������� ��� ���." << '\n';
            }
        } while (choice != 0);
        break;

    case 2:
        do {
            cout << "����:\n" << "1. �������� ��������\n" << "2. ������� ��������\n" << "3. ���������� ��������\n" << "4. ����������� �� ��������\n" << "5. ����������� �� ����\n" << "6. ����������� �� ����\n" << "7. ����� �� ��������\n" << "0. �����\n" << "������� ��� �����: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                string name;
                int year;
                double volume, price;

                cout << "������� �������� ���������: ";
                cin.ignore();
                getline(cin, name);
                cout << "������� ��� �������: ";
                cin >> year;
                cout << "������� ����� ���������: ";
                cin >> volume;
                cout << "������� ����: ";
                cin >> price;

                showroom.add(car(name, year, volume, price));

                break;
            }
            case 2: {
                size_t index;
                cout << "������� ������ ��������� ��� ��������: ";
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
                cout << "������� �������� ��� ������: ";
                cin.ignore();
                getline(cin, name);
                showroom.search_name(name);
                break;
            }
            case 0:
                cout << "����� �� ���������." << '\n';
                break;
            default:
                cout << "�������� �����. ����������, ���������� ��� ���." << '\n';
            }
        } while (choice != 0);

        break;
    }
    
    return 0;
}