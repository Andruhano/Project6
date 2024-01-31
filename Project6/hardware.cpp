#define _CRT_SECURE_NO_WARNINGS
#include "computer.h"
#include <iostream>

CPU::CPU(const char* model) 
{
    int len = strlen(model);
    this->model = new char[len + 1];
    strcpy(this->model, model);
}

CPU::CPU(const CPU& other) 
{
    int len = strlen(other.model);
    this->model = new char[len + 1];
    strcpy(this->model, other.model);
}

CPU::~CPU() 
{
    delete[] model;
}

const char* CPU::getModel() const 
{
    return model;
}

int SSD::getCapacity() const 
{
    return capacity;
}

GPU::GPU(const char* model) 
{
    int len = strlen(model);
    this->model = new char[len + 1];
    strcpy(this->model, model);
}

GPU::GPU(const GPU& other) 
{
    int len = strlen(other.model);
    this->model = new char[len + 1];
    strcpy(this->model, other.model);
}

GPU::~GPU() 
{
    delete[] model;
}

const char* GPU::getModel() const 
{
    return model;
}

Memory::Memory(int size) : size(size) {}

Memory::Memory(const Memory& other) : size(other.size) {}

Memory::~Memory() {}

int Memory::getSize() const 
{
    return size;
}

int Laptop::laptopCount = 0;

Laptop::Laptop(const char* name, float cost, const char* color, CPU* cpu, SSD* ssd, GPU* gpu, Memory* memory) : name(nullptr), cost(cost), color(nullptr), cpu(cpu), ssd(ssd), gpu(gpu), memory(memory) 
{
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);

    len = strlen(color);
    this->color = new char[len + 1];
    strcpy(this->color, color);

    laptopCount++;
}

Laptop::Laptop(const Laptop& other) : name(nullptr), cost(other.cost), color(nullptr)
{
    int len = strlen(other.name);
    this->name = new char[len + 1];
    strcpy(this->name, other.name);

    len = strlen(other.color);
    this->color = new char[len + 1];
    strcpy(this->color, other.color);

    this->cpu = new CPU(*other.cpu);
    this->ssd = new SSD(*other.ssd);
    this->gpu = new GPU(*other.gpu);
    this->memory = new Memory(*other.memory);
}

Laptop::~Laptop() 
{
    delete[] name;
    delete[] color;
    delete cpu;
    delete ssd;
    delete gpu;
    delete memory;
    laptopCount--;
}

const char* Laptop::getName() const 
{
    return name;
}

float Laptop::getCost() const 
{
    return cost;
}

const char* Laptop::getColor() const 
{
    return color;
}

int Laptop::getLaptopCount() 
{
    return laptopCount;
}
