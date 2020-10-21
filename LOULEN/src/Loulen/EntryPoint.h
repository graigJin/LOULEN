#pragma once

#ifdef LL_PLATFORM_WINDOWS

extern Loulen::Application* Loulen::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Loulen::CreateApplication();
	app->Run();
	delete app;
}

#endif