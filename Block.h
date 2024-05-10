#pragma once

class Block
{
private:
public:
    Block();
    void Drop();
    void MoveHorizen(int offset);
    void Rotate();
    void Draw(int LeftMargin,int TopMargin);
    ~Block();
};

