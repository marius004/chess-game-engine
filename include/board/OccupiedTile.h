#ifndef OOP_OCCUPIEDTILE_H
#define OOP_OCCUPIEDTILE_H

#include "Tile.h"
#include <memory>

class OccupiedTile : public Tile {
private:
    std::shared_ptr<Piece> piece;

public:
    OccupiedTile(const int& row, const int& col, const std::shared_ptr<Piece>& piece);

    bool isEmpty();
    std::shared_ptr<Piece> getPiece();
};

#endif //OOP_OCCUPIEDTILE_H
