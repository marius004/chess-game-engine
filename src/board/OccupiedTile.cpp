#include "../../include/board/OccupiedTile.h"

OccupiedTile::OccupiedTile(const int &row, const int &col, const std::shared_ptr<Piece>& piece)
    : Tile(row, col) {
    this->piece = piece;
}

bool OccupiedTile::isEmpty() {
    return false;
}

std::shared_ptr<Piece> OccupiedTile::getPiece() {
    return this->piece;
}