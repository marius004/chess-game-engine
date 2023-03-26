#ifndef OOP_COLOR_H
#define OOP_COLOR_H

#include <iostream>

enum Color {
    WHITE,
    BLACK,
};

inline std::ostream& operator<<(std::ostream& stream, const Color& color) {
    stream << (color == Color::WHITE ? "white" : "black");
    return stream;
}

#endif //OOP_COLOR_H
