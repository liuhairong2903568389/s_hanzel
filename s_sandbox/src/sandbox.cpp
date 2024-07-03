#include"s_hanzel.h"


class sandbox : public s_hanzel::application {
public:
	sandbox() {

	}
	~sandbox() {

	}
};

s_hanzel::application* s_hanzel::CreateApplication() {

	return new sandbox();

};
