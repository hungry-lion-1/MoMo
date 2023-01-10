#pragma once
//入口（启动）

#ifdef MO_PLATFORM_WINDOWS

//委托申明(非定义)
extern MoMo::Application* MoMo::CreateApplication();

int main(int argc, char* argv)
{
	
	printf("MoMo Engine!!!\n");
	auto app = MoMo::CreateApplication(); //创建自定义变量类型
	app->Run();
	delete app;
}

#endif

