#include "../../include/pieces/Knight.h"
#include <iostream>
#include <vector>

Knight::Knight(const int &row, const int &col, const Color &color)
        : Piece(row, col, color) {}

std::vector<Move> Knight::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const Knight& knight) {
    stream << (knight.isWhite() ? "N" : "n");
    return stream;
}