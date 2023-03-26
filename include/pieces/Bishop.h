#ifndef OOP_BISHOP_H
#define OOP_BISHOP_H

#include "Piece.h"

class Bishop : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const Bishop& piece);
    Bishop(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};

#endif //OOP_BISHOP_H
