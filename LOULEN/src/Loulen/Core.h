#pragma once

#ifdef LL_PLATFORM_WINDOWS
	#ifdef LL_BUILD_DLL
		#define LOULEN_API __declspec(dllexport)
	#else
		#define LOULEN_API __declspec(dllimport)
	#endif
#else
	#error Loulen only supports Windows!
#endif