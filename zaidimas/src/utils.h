#pragma once

struct Player;
struct Plate;

bool IsBetween(float val, float rangeB, float rangeE);

namespace utils
{
	bool IsBetween(float val, float rangeB, float rangeE);
	bool InOnPlate(Player &player, Plate &plate);
}
