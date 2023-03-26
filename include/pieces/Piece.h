#ifndef OOP_PIECE_H
#define OOP_PIECE_H

#include "../Color.h"
#include "../Move.h"
#include <iostream>
#include <vector>

class Piece {
protected:
    int row;
    int col;
    Color color;

public:
    Piece(const int& row, const int& col,const Color& color);

    int getRow() const;
    int getCol() const;

    bool isWhite() const;
    bool isBlack() const;

    virtual std::vector<Move> getLegalMoves() = 0;
    friend std::ostream& operator<< (std::ostream& stream, const Piece& piece);
};

#endif //OOP_PIECE_H
