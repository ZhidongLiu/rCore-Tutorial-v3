#include <iostream>
#include <stdfloat>

unsigned short float32_to_bfloat16(float value)
{
    // 16 : 16
    union
    {
        unsigned int u;
        float f;
    } tmp;
    tmp.f = value;
    return tmp.u >> 16;
}
// convert brain half to float
float bfloat16_to_float32(unsigned short value)
{
    // 16 : 16
    union
    {
        unsigned int u;
        float f;
    } tmp;
    tmp.u = value << 16;
    return tmp.f;
}

int main(int, char**){
    std::cout << "Hello, from main!\n";
    unsigned short ai = float32_to_bfloat16(1.90);
    ai = 90;
    std:_Float16 f = 0.1F16;
    std::cout << ai;
}
