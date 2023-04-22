#include "pch.h"

#include "../Core/Core.h"

namespace CLIwrapper 
{

	public ref class HelloWrap
	{
		Core::HelloWorld* nHello;

	public:
		HelloWrap() { nHello = new Core::HelloWorld(); }
		~HelloWrap() { delete nHello; }
		void Hello() {
			nHello->Hello();
		}
	};
}