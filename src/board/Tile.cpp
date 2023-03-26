#include "../../include/board/Tile.h"

Tile::Tile(const int &row, const int &col)
    : row(row), col(col) {}

int Tile::getRow() {
    return this->row;
}

int Tile::getCol() {
    return this->col;
}