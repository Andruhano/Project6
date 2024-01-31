#include "computer.h"
#include <iostream>
using namespace std;

int main() 
{

    system("chcp 1251");

    CPU* cpu = new CPU("Intel Core i5");
    SSD* ssd = new SSD(512);
    GPU* gpu = new GPU("NVIDIA GeForce GTX 1660");
    Memory* memory = new Memory(16);

    Laptop* laptop = new Laptop("Мой ноутбук", 1200.0f, "Серебристый", cpu, ssd, gpu, memory);

    Laptop* laptopCopy = new Laptop(*laptop);

    cout << "Информация о ноутбуке:" << endl;
    cout << "Название: " << laptop->getName() << endl;
    cout << "Цена: $" << laptop->getCost() << endl;
    cout << "Цвет: " << laptop->getColor() << endl;
    cout << "Модель CPU: " << laptop->getCpuModel() << endl;
    cout << "Емкость SSD: " << laptop->getSsdCapacity() << "ГБ" << endl;
    cout << "Модель GPU: " << laptop->getGpuModel() << endl;
    cout << "Объем памяти: " << laptop->getMemorySize() << "ГБ" << endl;

    cout << "\nИнформация о скопированном ноутбуке:" << endl;
    cout << "Название: " << laptopCopy->getName() << endl;
    cout << "Цена: $" << laptopCopy->getCost() << endl;
    cout << "Цвет: " << laptopCopy->getColor() << endl;
    cout << "Модель CPU: " << laptopCopy->getCpuModel() << endl;
    cout << "Емкость SSD: " << laptopCopy->getSsdCapacity() << "ГБ" << endl;
    cout << "Модель GPU: " << laptopCopy->getGpuModel() << endl;
    cout << "Объем памяти: " << laptopCopy->getMemorySize() << "ГБ" << endl;

    return 0;  
}
