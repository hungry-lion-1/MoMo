#pragma once
//����Ӧ����

#include "Core.h"


namespace MoMo {

	class MoMo_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		
	};

	//�� ί�������ж��壬����һ��ָ��
	Application* CreateApplication();
}
