#include <MoMo.h>  //���� momo ��� application ����

class Sandbox : public MoMo::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{
	
	}

};

MoMo::Application* MoMo::CreateApplication()  //ʵ��ί������������Ӧ�ã�
{
	return new Sandbox();
}