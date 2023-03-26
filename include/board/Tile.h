#ifndef OOP_TILE_H
#define OOP_TILE_H

#include "../pieces/Piece.h"
#include <memory>

class Tile {
protected:
    int row;
    int col;

public:
    Tile(const int& row, const int& col);

    virtual bool isEmpty() = 0;
    virtual std::shared_ptr<Piece> getPiece() = 0;

    int getRow();
    int getCol();
};

#endif //OOP_TILE_H
