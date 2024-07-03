#pragma once

#ifdef SHZ_PLATFORM_WINDOWS

extern s_hanzel::application* s_hanzel::CreateApplication();

int main(int argc,char** argv) {

	printf("this is a entrypoint");
	auto app = s_hanzel::CreateApplication();
	app->Run();
	delete app;

}
#else
	#error s_hanzel just support windows!
#endif // SHZ_PLATFORM_WINDOWS


