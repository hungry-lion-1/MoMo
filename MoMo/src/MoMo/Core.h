#pragma once  
//�궨��


//���� DLL ���뵼�� ��
#ifdef MO_PLATFORM_WINDOWS
	#ifdef MO_BUILD_DLL
		#define  MoMo_API __declspec(dllexport)
	#else
		#define  MoMo_API __declspec(dllimport)
	#endif
#else
	#error MoMo only support Windows!
#endif