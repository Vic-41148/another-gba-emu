#include <iostream>
#include "InternalDisplayMemory.h"

//constructor
InternalDisplayMemory::InternalDisplayMemory()
{
    //allocatin mem
    bg_obj_palette_ram_.resize(1024,0);
    vram_.resize(96*1024,0);
    oam_obj_attributes_.resize(1024,0);
}

//getters
std::vector<uint8_t>& InternalDisplayMemory::readBgObjPaletteRam()
{
    return bg_obj_palette_ram_;
}
std::vector<uint8_t>& InternalDisplayMemory::readVram()
{
    return vram_;
}
std::vector<uint8_t>& InternalDisplayMemory::readOamObjAttributes()
{
    return oam_obj_attributes_;
}

//setters
void InternalDisplayMemory::writeBgObjPaletteRam(const std::vector<uint8_t>&x)
{
    if(x.size()!=bg_obj_palette_ram_.size())
    {
        std::cout<<"Size does not match gObjPaletteRam!\n";
        return;
    }
    std::copy(x.begin(),x.end(),bg_obj_palette_ram_.begin());
}
void InternalDisplayMemory::writeVram(const std::vector<uint8_t>&x)
{
    if(x.size()!=vram_.size())
    {
        std::cout<<"Size does not match Vram!\n";
        return;
    }
    std::copy(x.begin(),x.end(),vram_.begin());
}
void InternalDisplayMemory::writeOamObjAttributes(const std::vector<uint8_t>&x)
{
    if(x.size()!=oam_obj_attributes_.size())
    {
        std::cout<<"Size does not match OamObjAttributes!\n";
        return;
    }
    std::copy(x.begin(),x.end(),oam_obj_attributes_.begin());
}