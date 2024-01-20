#include "position.hpp"

Position::Position(int x, int y):
m_x(x), m_y(y)
{}

void Position::SetX(int x)
{
    m_x = x;
}
void Position::SetY(int y)
{
    m_y = y;
}

int Position::GetX() const
{
    return m_x;
}
int Position::GetY() const 
{
    return m_y;
}
