#pragma once

#include <vector>
#include <cstdint>

class InternalDisplayMemory
{
private:
    std::vector<uint8_t> bg_obj_palette_ram_;           //1kb
    std::vector<uint8_t> vram_;                         //96kb
    std::vector<uint8_t> oam_obj_attributes_;           //1kb

public:
    //constructor
    InternalDisplayMemory();

    //getters
    std::vector<uint8_t>& readBgObjPaletteRam();
    std::vector<uint8_t>& readVram();
    std::vector<uint8_t>& readOamObjAttributes();

    //setters
    void writeBgObjPaletteRam(const std::vector<uint8_t>&x);
    void writeVram(const std::vector<uint8_t>&x);
    void writeOamObjAttributes(const std::vector<uint8_t>&x);
};