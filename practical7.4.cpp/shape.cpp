#include "shape.h"

Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

float Rectangle::Area() {
    return length * width;
}

Circle::Circle(float r) {
    radius = r;
}

float Circle::Area() {
    return 3.14159 * radius * radius;
}