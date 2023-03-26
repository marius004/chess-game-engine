#include "../../include/pieces/Bishop.h"
#include <iostream>
#include <vector>

Bishop::Bishop(const int &row, const int &col, const Color &color)
    : Piece(row, col, color) {}

std::vector<Move> Bishop::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const Bishop& bishop) {
    stream << (bishop.isWhite() ? "B" : "b");
    return stream;
}