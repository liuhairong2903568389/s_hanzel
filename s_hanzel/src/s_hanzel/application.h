#pragma once
#include"Core.h"



namespace s_hanzel
{
	class SHZ_API application
	{
	public:
		application();
		virtual ~application();

		void Run();


	};

	application* CreateApplication();

}

