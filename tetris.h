#pragma once 

class tetris
{
public:
    void Init();
    void Play();
    tetris();
    ~tetris();
private:
    void keyEvent();
    void Draw();
};

