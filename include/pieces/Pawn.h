#ifndef OOP_PAWN_H
#define OOP_PAWN_H

#include "Piece.h"

class Pawn : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const Pawn& piece);
    Pawn(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};


#endif //OOP_PAWN_H
