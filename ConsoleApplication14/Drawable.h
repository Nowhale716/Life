// Drawable.h
#pragma once

class Drawable {
public:
    virtual void draw() const = 0; // Чисто виртуальная функция
    virtual ~Drawable() = default;
};