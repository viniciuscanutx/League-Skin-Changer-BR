#pragma once

#include "GameState.hpp"
#include "Pad.hpp"

class GameClient {
	PAD(0x8);
public:
	GGameState_s game_state;
};
