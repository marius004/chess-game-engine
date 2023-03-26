#include "../../include/pieces/Queen.h"
#include <iostream>
#include <vector>

Queen::Queen(const int &row, const int &col, const Color &color)
        : Piece(row, col, color) {}

std::vector<Move> Queen::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const Queen& queen) {
    stream << (queen.isWhite() ? "Q" : "q");
    return stream;
}