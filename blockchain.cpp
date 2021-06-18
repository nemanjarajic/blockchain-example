#include "blockchain.h"

blockchain::blockchain() {
    _chain.emplace_back(block(0, "Genesis Block"));
    _nDifficulty = 6;
}

void blockchain::addBlock(block bNew) {
    bNew.sPrevHash = _getLastBlock().getHash();
    bNew.MineBlock(_nDifficulty);
    _chain.push_back(bNew);
}

block blockchain::_getLastBlock() const {
    return _chain.back();
}