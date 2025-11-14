#include "./Utils.h"

#include <iostream>
#include <random>
#include <cstdint>

float Utils::RandomFloat(float min, float max) {
    static std::random_device rd;  // seed
    static std::mt19937 gen(rd()); // Mersenne Twister generator
    std::uniform_real_distribution<float> dis(min, max);
    return dis(gen);
}