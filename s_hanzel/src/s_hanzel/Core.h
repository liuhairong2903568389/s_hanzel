#pragma once

#ifdef SHZ_PLATFORM_WINDOWS
	#ifdef SHZ_BUILD_DLL
		#define SHZ_API __declspec(dllexport)
	#else
		#define SHZ_API __declspec(dllimport)
	#endif 
#else
	#error s_hanzel just support windows!
#endif



