#ifndef OOP_KING_H
#define OOP_KING_H

#include "Piece.h"

class King : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const King& piece);
    King(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};

#endif //OOP_KING_H
