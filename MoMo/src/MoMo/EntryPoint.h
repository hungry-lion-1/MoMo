#pragma once
//��ڣ�������

#ifdef MO_PLATFORM_WINDOWS

//ί������(�Ƕ���)
extern MoMo::Application* MoMo::CreateApplication();

int main(int argc, char* argv)
{
	
	printf("MoMo Engine!!!\n");
	auto app = MoMo::CreateApplication(); //�����Զ����������
	app->Run();
	delete app;
}

#endif

