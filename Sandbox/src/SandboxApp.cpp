#include "Cry.h"

class Sandbox : public Cry::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Cry::Application* Cry::CreateApplication() {
	return new Sandbox();
}