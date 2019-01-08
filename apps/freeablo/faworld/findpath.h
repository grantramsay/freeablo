#pragma once

#include <misc/point.h>

namespace FAWorld
{
    class GameLevelImpl;

    Misc::Points neighbors(GameLevelImpl* level, const Misc::Point& location);
    Misc::Points pathFind(GameLevelImpl* level, const Misc::Point& start, const Misc::Point& goal, bool& bArrivable, bool findAdjacent);
}
