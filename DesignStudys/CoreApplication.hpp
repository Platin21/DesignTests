#pragma once
#include "typedef.hpp"
#include "CoreWindow.hpp"

namespace Core
{
	class Application
	{
		Window window;
	private:
		bool running = true;
	public:
		Application();
		void run();
	};
}