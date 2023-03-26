#include <sstream>
#include "../../include/pieces/Piece.h"

Piece::Piece(const int &row, const int &col, const Color &color)
    :row(row), col(col), color(color) {}

int Piece::getRow() const {
    return this->row;
}

int Piece::getCol() const {
    return this->col;
}

bool Piece::isWhite() const {
    return this->color == Color::WHITE;
}

bool Piece::isBlack() const {
    return this->color == Color::BLACK;
}

std::ostream& operator<<(std::ostream& stream, const Piece& piece) {
    stream << "Piece{"
        << "row=" << piece.row
        << ","
        << "col=" << piece.col
        << ","
        << "color=" << piece.color
        << "}";

    return stream;
}