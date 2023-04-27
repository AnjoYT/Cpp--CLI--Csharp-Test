#pragma once

#include "../Core/Core.h"

using namespace System;

namespace CLIwrapper 
{

	public ref class HelloWrap
	{
		Core::HelloWorld* nHello;

	public:
		HelloWrap() { nHello = new Core::HelloWorld(); }
		~HelloWrap() { delete nHello; }
		System::String^ Hello() {
			std::string convert = nHello->Hello();
			return gcnew System::String(convert.c_str());;
		}
	};
}