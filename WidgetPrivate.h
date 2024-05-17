#pragma once
#include <string>
struct WidgetPrivate
{
	std::string Name;
	WidgetPrivate(std::string const& name);
	void hello();
};