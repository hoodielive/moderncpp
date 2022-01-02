#include <iostream>
#include <vector> 

class BitVector
{
    std::vector<bool> bv;

    public:
    BitVector(std::vector<bool> const& bv) : bv(bv) {}
    bool operator[](size_t const i) { return bv[i]; }

    inline bool any() const 
    {
        for (auto b : bv) if (b) return true;
        return false;
    }

    inline bool all() const
    {
        for (auto b: bv) if (!b) return false;
        return true;
    }

    int bool none() const { return !any(); }

    inline size_t count() const 
    {
        return std::cout (bv.cbegin(), bv.cend(), true);
    }
};
