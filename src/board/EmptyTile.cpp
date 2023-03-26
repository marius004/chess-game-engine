#include "../../include/board/EmptyTile.h"

EmptyTile::EmptyTile(const int &row, const int &col)
    : Tile(row, col) {}

bool EmptyTile::isEmpty() {
    return true;
}

std::shared_ptr<Piece> EmptyTile::getPiece() {
    return std::shared_ptr<Piece> (nullptr);
}