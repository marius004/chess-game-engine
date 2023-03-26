#ifndef OOP_ROOK_H
#define OOP_ROOK_H

#include "Piece.h"

class Rook : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const Rook& piece);
    Rook(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};


#endif //OOP_ROOK_H
