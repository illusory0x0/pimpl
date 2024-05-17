#include "Widget.h"
#include "WidgetPrivate.h"

Widget::Widget(std::string const& name) : impl{ new WidgetPrivate{name} } {}
Widget::~Widget() noexcept { delete impl; }

void Widget::hello()
{

	impl->hello();
}
