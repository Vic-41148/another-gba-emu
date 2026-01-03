#pragma once

#include <vector>
#include <cstdint>

class GeneralInternalMemory
{
private:                                    //uint8_t is unsigned integer of 8 bits
    std::vector<uint8_t> bios_;             //16kb
    std::vector<uint8_t> wram_slow_;        //256kb  2 wait cycles
    std::vector<uint8_t> wram_fast_;        //32kb
    std::vector<uint8_t> io_;               //size not given? TODO STUFF

public:
    GeneralInternalMemory();                          //constructor

    //getters
    std::vector<uint8_t>& readBios();
    std::vector<uint8_t>& readWramSlow();
    std::vector<uint8_t>& readWramFast();
    std::vector<uint8_t>& readIO();

    //setters
    void writeBios(const std::vector<uint8_t> &x);
    void writeWramSlow(const std::vector<uint8_t>&x);
    void writeWramFast(const std::vector<uint8_t>&x);
    void writeIO(const std::vector<uint8_t>&x);
};
