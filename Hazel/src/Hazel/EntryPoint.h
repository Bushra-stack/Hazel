#pragma once

extern Hazel::Application* Hazel::CreateApplication();

#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char** argv ) {
	printf("Hello from my game engine \n");

	Hazel::Log::Init();
	Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	Hazel::Log::GetClientLogger()->info("Hello");
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! var={0}",a);
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
