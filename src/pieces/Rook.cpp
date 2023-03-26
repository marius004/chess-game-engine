#include "../../include/pieces/Rook.h"
#include <iostream>
#include <vector>

Rook::Rook(const int &row, const int &col, const Color &color)
        : Piece(row, col, color) {}

std::vector<Move> Rook::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const Rook& rook) {
    stream << (rook.isWhite() ? "R" : "r");
    return stream;
}