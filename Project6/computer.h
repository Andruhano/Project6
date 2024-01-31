#pragma once

class CPU 
{
    char* model;

public:
    CPU(const char* model);
    CPU(const CPU& other); 
    ~CPU();
    const char* getModel() const;
};

class SSD 
{
    int capacity;

public:
    SSD(int capacity);
    SSD(const SSD& other); 
    ~SSD();
    int getCapacity() const;
};

class GPU 
{
    char* model;

public:
    GPU(const char* model);
    GPU(const GPU& other); 
    ~GPU();
    const char* getModel() const;
};

class Memory 
{
    int size;

public:
    Memory(int size);
    Memory(const Memory& other); 
    ~Memory();
    int getSize() const;
};

class Laptop 
{
    static int laptopCount;
    char* name;
    float cost;
    char* color;
    CPU* cpu;
    SSD* ssd;
    GPU* gpu;
    Memory* memory;

public:
    Laptop(const char* name, float cost, const char* color, CPU* cpu, SSD* ssd, GPU* gpu, Memory* memory);
    Laptop(const Laptop& other); 
    ~Laptop();
    const char* getName() const;
    float getCost() const;
    const char* getColor() const;
    const char* getCpuModel() const { return cpu->getModel(); }
    int getSsdCapacity() const { return ssd->getCapacity(); }
    const char* getGpuModel() const { return gpu->getModel(); }
    int getMemorySize() const { return memory->getSize(); }
    static int getLaptopCount();
};
