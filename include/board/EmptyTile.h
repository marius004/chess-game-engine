#ifndef OOP_EMPTYTILE_H
#define OOP_EMPTYTILE_H

#include "Tile.h"

class EmptyTile : public Tile {
public:
    EmptyTile(const int& row, const int& col);

    bool isEmpty();
    std::shared_ptr<Piece> getPiece();
};

#endif //OOP_EMPTYTILE_H
