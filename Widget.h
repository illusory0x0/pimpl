#pragma once
#include <string>
struct WidgetPrivate;

struct Widget
{
	Widget(std::string const& name);
	Widget(Widget const&) = delete;
	Widget(Widget&&) = delete;
	constexpr Widget() noexcept = default;
	Widget& operator=(Widget const&) = delete;
	Widget& operator=(Widget&&) = delete;
	~Widget() noexcept;
	void hello();
	WidgetPrivate* impl{};
};