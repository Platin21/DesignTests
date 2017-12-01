#include "CoreApplication.hpp"

Core::Application::Application()
{
	Vecf32x2 vc = Vecf32x2(0.0f, 6.0f);
	Vecf32x2 vc2 = Vecf32x2(0.0f, 2.0f);
	Vecf32x2 vc3 = vc * vc2;
}

void Core::Application::run()
{
	while (running)
	{
		//@NOTE(Armin): infinit loop do something?
	};
}