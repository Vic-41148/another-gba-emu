#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

class generalMem
{
private:                                            //uint8_t is unsigned integer of 8 bits
    std::vector<uint8_t> BIOS;                      //16kb
    //just found out u can store raw data in vectors lmao
    std::vector<uint8_t> WRAMSLOW;                  //256kb  2 wait cycles
    std::vector<uint8_t> WRAMFAST;                  //32kb
    std::vector<uint8_t> IO;                        //size not given?

public:

    //mem aloc
    generalMem()
    {
        //allocatin mem
        //rem this stoff
        //one bit is well 1         one byte is 8 bits
        //one kb is 1024bytes       one mb is 1024 kb
        BIOS.resize(16*1024,0);
        WRAMSLOW.resize(256*1024,0);
        WRAMFAST.resize(32*1024,0);
        //idk abt io yet
    }

    //getters and setters
    std::vector<uint8_t>& getBIOS()
    {
        return BIOS;
    }
    std::vector<uint8_t>& getWRAMFAST()
    {
        return WRAMFAST;
    }
    std::vector<uint8_t>& getWRAMSLOW()
    {
        return WRAMSLOW;
    }
    std::vector<uint8_t>& getIO()
    {
        return IO;
    }

    void setBios(const std::vector<uint8_t> &x)
    {
        if(BIOS.size()!=x.size())
        {
            std::cout<<"Size does not match Bios!\n";
            return;
        }
        std::copy(x.begin(),x.end(),BIOS.begin());
    }
    void setWRAMSLOW(std::vector<uint8_t>&x)
    {
        if(x.size()!=WRAMSLOW.size())
        {
            std::cout<<"Size does not match Wram Slow!\n";
            return;
        }
        std::copy(x.begin(),x.end(),WRAMSLOW.begin());
    }
    void setWRAMFAST(std::vector<uint8_t>&x)
    {
        if(x.size()!=WRAMFAST.size())
        {
            std::cout<<"Size does not match Wram Fast!\n";
            return;
        }
        std::copy(x.begin(),x.end(),WRAMFAST.begin());
    }
    void setIO(std::vector<uint8_t>&x)
    {
        if(x.size()!=WRAMFAST.size())
        {
            std::cout<<"Size does not match Wram Fast!\n";
            return;
        }
        std::copy(x.begin(),x.end(),WRAMFAST.begin());
    }
};

class displayMem
{
    std::vector<uint8_t> BGOBJPaletteRAM;           //1kb
    std::vector<uint8_t> VRAM;                      //96kb
    std::vector<uint8_t> OAMOBJAttributes;          //1kb


public:
    displayMem()
    {
        //allocatin mem
        BGOBJPaletteRAM.resize(1024,0);
        VRAM.resize(96*1024,0);
        OAMOBJAttributes.resize(1024,0);
    }

    //getters and setters
    std::vector<uint8_t> getBGOBJPaletteRAM()
    {
        return BGOBJPaletteRAM;
    }
    std::vector<uint8_t> getVRAM()
    {
        return VRAM;
    }
    std::vector<uint8_t> getOAMOBJAttributes()
    {
        return OAMOBJAttributes;
    }
    
};

class gamePakMem
{
    std::vector<uint8_t> GamePakROMFlashROM1;       //max32mb   wait state0
    std::vector<uint8_t> GamePakROMFlashROM2;       //max32mb   wait state1
    std::vector<uint8_t> GamePakROMFlashROM3;       //max32mb   wait state2
    std::vector<uint8_t> GamePakSRAM;               //max64kb   8bit Bus width

public:
    //allocatin mem
    gamePakMem()
    {
        GamePakROMFlashROM1.resize(1024*1024*32,0);
        GamePakROMFlashROM2.resize(1024*1024*32,0);
        GamePakROMFlashROM3.resize(1024*1024*32,0);
        GamePakSRAM.resize(1024*64,0);
    }
};

int main()
{
    return 0;
}