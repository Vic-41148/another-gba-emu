#include "ExternalMemory.h"
#include <iostream>

//mem alloc
ExternalMemory::ExternalMemory()
{
    GamePakRomWait0.resize(1024*1024*32,0);
    GamePakRomWait1.resize(1024*1024*32,0);
    GamePakRomWait2.resize(1024*1024*32,0);
    GamePakSram.resize(1024*64,0);
}

//getters
std::vector<uint8_t>& ExternalMemory::readGamePakRomWait0()
{
    return GamePakRomWait0;
}
std::vector<uint8_t>& ExternalMemory::readGamePakRomWait1()
{
    return GamePakRomWait1;
}
std::vector<uint8_t>& ExternalMemory::readGamePakRomWait2()
{
    return GamePakRomWait2;
}
std::vector<uint8_t>& ExternalMemory::readGamePakSram()
{
    return GamePakSram;
}

//setters
void ExternalMemory::writeGamePakRomWait0(std::vector<uint8_t>&x)
{
    if(x.size()!=GamePakRomWait0.size())
    {
        std::cout<<"Size does not match GamePakRomWait0!\n";
        return;
    }
    std::copy(x.begin(),x.end(),GamePakRomWait0.begin());
}
void ExternalMemory::writeGamePakRomWait1(std::vector<uint8_t>&x)
{
    if(x.size()!=GamePakRomWait1.size())
    {
        std::cout<<"Size does not match GamePakRomWait1!\n";
        return;
    }
    std::copy(x.begin(),x.end(),GamePakRomWait1.begin());
}
void ExternalMemory::writeGamePakRomWait2(std::vector<uint8_t>&x)
{
    if(x.size()!=GamePakRomWait2.size())
    {
        std::cout<<"Size does not match GamePakRomWait2!\n";
        return;
    }
    std::copy(x.begin(),x.end(),GamePakRomWait2.begin());
}
void ExternalMemory::writeGamePakSram(std::vector<uint8_t>&x)
{
    if(x.size()!=GamePakSram.size())
    {
        std::cout<<"Size does not match GamePakSram!\n";
        return;
    }
    std::copy(x.begin(),x.end(),GamePakSram.begin());
}