#include "namespace.h"

using kolpakova::DataStruct;

int main()
{
  try
  {
    setlocale(LC_ALL, "rus");
    std::cout << "������� ������ � ���� (:key1 value1(ull):key2 (0x)value2:key3 velue3:). value3 ���������� � ��������.\n";
    std::cout << "����� ����� ���������� ����������� Ctrl+Z.\n\n";
    std::string input = "";
    std::vector< kolpakova::DataStruct > data;

    while (std::getline(std::cin, input)) {
      std::istringstream iss(input);
      kolpakova::DataStruct tmp;
      try {
        if (iss >> tmp) {
          data.push_back(tmp);
        }
        else {
          std::cerr << "������: �������� ������ ������! ���������� �����: " << std::endl;
        }
      }
      catch (const std::exception& ex) {
        std::cerr << "������: " << ex.what() << std::endl;
      }
    }

    std::cout << "\n���������������� �����: \n\n";

    std::sort(data.begin(), data.end(), kolpakova::compareDataStruct);

    std::copy(data.begin(), data.end(), std::ostream_iterator< kolpakova::DataStruct >(std::cout, "\n"));
  }
  catch (const std::exception& ex) {
    std::cerr << ex.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
