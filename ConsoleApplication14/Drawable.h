#pragma once
class Drawable {
public:
    virtual void draw() const = 0; // Чисто виртуальная функция
    virtual ~Drawable() = default;
};

class Cell : public Drawable {
public:
    void draw() const override {
        display();
    }
};

class AdvancedCell : public Cell {
public:
    void draw() const override {
        display();
    }
};