
#ifndef DUNGEON_TRAP_H_
#define DUNGEON_TRAP_H_

// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"                      // tipos espec�ficos da engine
#include "Object.h"                     // interface de Object
#include "Jdungeon.h"
#include "TileSet.h"
#include "Animation.h"

// ---------------------------------------------------------------------------------

class Trap : public Object
{
private:
	TileSet* tileset = nullptr;
	Animation* anim = nullptr;
public:

	Trap();                   // construtor
	~Trap();								// destrutor

	void Update();							// atualiza��o do objeto
	void Draw();							// desenho do objeto

};

// ---------------------------------------------------------------------------------

inline void Trap::Draw()
{
	anim->Draw(x, y);
}

inline void Trap::Update() {
	anim->NextFrame();
}


// ---------------------------------------------------------------------------------


#endif