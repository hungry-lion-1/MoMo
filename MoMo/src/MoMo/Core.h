#pragma once  
//宏定义


//定义 DLL 导入导出 宏
#ifdef MO_PLATFORM_WINDOWS
	#ifdef MO_BUILD_DLL
		#define  MoMo_API __declspec(dllexport)
	#else
		#define  MoMo_API __declspec(dllimport)
	#endif
#else
	#error MoMo only support Windows!
#endif