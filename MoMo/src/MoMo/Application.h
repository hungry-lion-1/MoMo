#pragma once
//创建应用类

#include "Core.h"


namespace MoMo {

	class MoMo_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	//在 委托申明中定义，创建一个指针
	Application* CreateApplication();
}
