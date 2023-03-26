#include "../../include/pieces/Pawn.h"
#include <iostream>
#include <vector>

Pawn::Pawn(const int &row, const int &col, const Color &color)
        : Piece(row, col, color) {}

std::vector<Move> Pawn::getLegalMoves()  {
    return std::vector<Move> {};
}

std::ostream& operator<< (std::ostream& stream, const Pawn& pawn) {
    stream << (pawn.isWhite() ? "P" : "p");
    return stream;
}