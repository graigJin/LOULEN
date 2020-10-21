#pragma once

#include "Core.h"

namespace Loulen
{
	class LOULEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}