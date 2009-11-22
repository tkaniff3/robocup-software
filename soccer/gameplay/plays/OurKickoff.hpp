#pragma once

#include "../Play.hpp"
#include <gameplay/behaviors/Move.hpp>
#include <gameplay/behaviors/Kickoff.hpp>

namespace Gameplay
{
	namespace Plays
	{
		class OurKickoff: public Play
		{
			public:
				OurKickoff(GameplayModule *gameplay);
				
				virtual bool applicable();
				virtual void assign(std::set<Robot *> &available);
				virtual bool run();
			
			protected:
				Behaviors::Kickoff _kicker;
				Behaviors::Move _idle1, _idle2, _idle3;
		};
	}
}