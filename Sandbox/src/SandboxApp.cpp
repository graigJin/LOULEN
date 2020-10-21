#include <Loulen.h>	

class Sandbox : public Loulen::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Loulen::Application* Loulen::CreateApplication()
{
	return new Sandbox();
}