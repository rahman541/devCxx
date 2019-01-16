#ifdef __linux__
	extern "C" int add(int x,int y);
	extern "C" int minus(int x,int y);
	extern "C" int multiply(int x,int y);
#elif _WIN32
	extern "C" __declspec(dllexport) int add(int,int);
	extern "C" __declspec(dllexport) int minus(int,int);
	extern "C" __declspec(dllexport) int multiply(int,int);
	extern "C" __declspec(dllexport) char* helloWorld();
#elif __APPLE__
	extern "C" int add(int,int);
	extern "C" int minus(int,int);
	extern "C" int multiply(int,int);
#endif