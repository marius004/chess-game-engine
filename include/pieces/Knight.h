#ifndef OOP_KNIGHT_H
#define OOP_KNIGHT_H

#include "Piece.h"

class Knight : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const Knight& piece);
    Knight(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};


#endif //OOP_KNIGHT_H
