#pragma once

#include <vector>
#include <cstdint>

class ExternalMemory
{
private:
    std::vector<uint8_t>GamePakRomWait0;        //max 32mb
    std::vector<uint8_t>GamePakRomWait1;        //max 32mb
    std::vector<uint8_t>GamePakRomWait2;        //max 32mb
    std::vector<uint8_t>GamePakSram;            //max 64kb

public:
    
    //constructor
    ExternalMemory();

    //getters
    std::vector<uint8_t>& readGamePakRomWait0();
    std::vector<uint8_t>& readGamePakRomWait1();
    std::vector<uint8_t>& readGamePakRomWait2();
    std::vector<uint8_t>& readGamePakSram();

    //setters
    void writeGamePakRomWait0(std::vector<uint8_t>&x);
    void writeGamePakRomWait1(std::vector<uint8_t>&x);
    void writeGamePakRomWait2(std::vector<uint8_t>&x);
    void writeGamePakSram(std::vector<uint8_t>&x);
};