#ifndef _BLOCKCHAIN_H_
#define _BLOCKCHAIN_H_

#include <cstdint>
#include <vector>
#include "block.h"

using namespace std;

class blockchain{
    public:
        blockchain();
        void addBlock(block newB);

    private:
        uint32_t _nDifficulty;
        vector<block> _chain;
        block _getLastBlock() const;
};
#endif