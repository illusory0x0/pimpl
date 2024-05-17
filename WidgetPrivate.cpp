#include "WidgetPrivate.h"
#include <iostream>

WidgetPrivate::WidgetPrivate(std::string const& name) : Name{ name } {}
void WidgetPrivate::hello()
{
	std::cout << Name << '\n';
}
