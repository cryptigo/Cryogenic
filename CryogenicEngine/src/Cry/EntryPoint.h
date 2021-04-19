#pragma once

#ifdef CRY_PLATFORM_WINDOWS
extern Cry::Application* Cry::CreateApplication();

int main(int argc, char** argv) {
	auto app = Cry::CreateApplication();
	app->Run();
	delete app;
}
#endif 

