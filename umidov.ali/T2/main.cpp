#include "header.h"
#include <iostream>
using namespace umidov;
int main() {
    setlocale(LC_ALL, "rus");
    DataStruct data;
    std::cout << "������� ������ � ������� key1=<��������>;key2=<��������>;key3=<������>:" << std::endl;
    std::cin >> data;
    std::cout << "�� �����:" << std::endl;
    std::cout << data << std::endl;
    return 0;
}
