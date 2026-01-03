#include <iostream>
#include "GeneralInternalMemory.h"

//mem aloc
GeneralInternalMemory::GeneralInternalMemory()
{
    //allocatin mem
    //rem this stoff
    //one bit is well 1         one byte is 8 bits
    //one kb is 1024bytes       one mb is 1024 kb
    bios_.resize(16*1024,0);
    wram_slow_.resize(256*1024,0);
    wram_fast_.resize(32*1024,0);
    //idk abt io yet
}

//getters
std::vector<uint8_t>& GeneralInternalMemory::readBios()
{
    return bios_;
}
std::vector<uint8_t>& GeneralInternalMemory::readWramSlow()
{
    return wram_slow_;
}
std::vector<uint8_t>& GeneralInternalMemory::readWramFast()
{
    return wram_fast_;
}
std::vector<uint8_t>& GeneralInternalMemory::readIO()
{
    return io_;
}

//setters
void GeneralInternalMemory::writeBios(const std::vector<uint8_t> &x)
{
    if(bios_.size()!=x.size())
    {
        std::cout<<"Size does not match Bios!\n";
        return;
    }
    std::copy(x.begin(),x.end(),bios_.begin());
}
void GeneralInternalMemory::writeWramSlow(const std::vector<uint8_t>&x)
{
    if(x.size()!=wram_slow_.size())
    {
        std::cout<<"Size does not match Wram Slow!\n";
        return;
    }
    std::copy(x.begin(),x.end(),wram_slow_.begin());
}
void GeneralInternalMemory::writeWramFast(const std::vector<uint8_t>&x)
{
    if(x.size()!=wram_fast_.size())
    {
        std::cout<<"Size does not match Wram Fast!\n";
        return;
    }
    std::copy(x.begin(),x.end(),wram_fast_.begin());
}
void GeneralInternalMemory::writeIO(const std::vector<uint8_t>&x)
{
    if(x.size()!=io_.size())
    {
        std::cout<<"Size does not match IO!\n";
        return;
    }
    std::copy(x.begin(),x.end(),io_.begin());
}