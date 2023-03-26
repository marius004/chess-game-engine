#include "../../include/pieces/King.h"
#include <iostream>
#include <vector>

King::King(const int &row, const int &col, const Color &color)
        : Piece(row, col, color) {}

std::vector<Move> King::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const King& king) {
    stream << (king.isWhite() ? "K" : "k");
    return stream;
}