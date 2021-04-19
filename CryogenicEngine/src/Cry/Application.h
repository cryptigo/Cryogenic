#pragma once

#include "Core.h"

namespace Cry {
	class CRY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
