#include <iostream>
#include <memory>
#include "include/pieces/Piece.h"
#include "include/pieces/Rook.h"
#include "include/board/OccupiedTile.h"
#include "include/board/Tile.h"
#include "include/Color.h"

int main() {
    auto piece = std::shared_ptr<Piece>(new Rook(0, 0, Color::BLACK));

    auto tile = new OccupiedTile(0, 0, piece);

    return 0;
}
