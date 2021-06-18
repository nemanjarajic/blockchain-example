#ifndef _BLOCK_H_
#define _BLOCK_H_

#include <cstdint>
#include <iostream>

using namespace std;

class block{
    public: 

        string sPrevHash;
        block(uint32_t nIndexIn, const string &sDataIn);
        string getHash();
        void MineBlock(uint32_t nDifficulty);

    private: 
        uint32_t _nIndex;
        int64_t _nNonce;
        string _sData;
        string _sHash;
        time_t _tTime;

        string _CalculateHash() const;

};

#endif 