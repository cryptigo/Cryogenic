#pragma once

#ifdef CRY_PLATFORM_WINDOWS
	#ifdef CRY_BUILD_DLL
		#define CRY_API __declspec(dllexport)
	#else
		#define CRY_API __declspec(dllimport)
	#endif
#else
	#error CRYOGENIC IS WINDOWS ONLY!
#endif