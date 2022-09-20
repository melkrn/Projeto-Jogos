#ifndef _PACMAN_WIN_H_
#define _PACMAN_WIN_H_

#include "Game.h"
#include "Sprite.h"

// ------------------------------------------------------------------------------

class Win : public Game
{
private:
    Sprite* backg = nullptr;       // pano de fundo
    bool ctrlKeyESC = false;        // controle do ESC

public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
};

// -----------------------------------------------------------------------------
#endif
