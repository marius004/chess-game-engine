#ifndef OOP_QUEEN_H
#define OOP_QUEEN_H

#include "Piece.h"

class Queen : public Piece {
public:
    friend std::ostream& operator<< (std::ostream& stream, const Queen& piece);
    Queen(const int &row, const int &col, const Color &color);
    std::vector<Move> getLegalMoves();
};


#endif //OOP_QUEEN_H
