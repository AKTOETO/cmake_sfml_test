#ifndef POSITION_H
#define POSITION_H

class Position
{
private:
    int m_x;
    int m_y;

public:
    Position(int x, int y);
    void SetX(int x);
    void SetY(int y);

    int GetX() const;
    int GetY() const;
};

#endif
