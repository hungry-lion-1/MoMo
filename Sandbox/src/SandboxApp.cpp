#include <MoMo.h>  //调用 momo 里的 application 方法

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

MoMo::Application* MoMo::CreateApplication()  //实例委托申明（创建应用）
{
	return new Sandbox();
}