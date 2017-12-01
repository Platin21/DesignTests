#include "CoreWindow.hpp"

Core::Size::Size(f32 width,f32 height)
{
	this->width = width;
	this->height = height;
}

f32 Core::Size::getWidth()
{
	return this->width;
}
f32 Core::Size::getHeight()
{
	return this->height;
}

Core::Rect::Rect(Size size, Vecf32x2 pos)
{
	this->width = size.getWidth();
	this->height = size.getHeight();
	this->x = pos.getX();
	this->y = pos.getY();
}
Core::Rect::Rect(f32 width, f32 height, f32 x, f32 y)
{
	this->width = width;
	this->height = height;
	this->x = x;
	this->y = y;
}

f32 Core::Rect::getWidth()
{
	return this->width;
}
f32 Core::Rect::getHeight()
{
	return this->height;
}
f32 Core::Rect::getX()
{
	return this->x;
}
f32 Core::Rect::getY()
{
	return this->y;
}

Core::Vecf32x2::Vecf32x2(f32 x, f32 y)
{
	this->x = x;
	this->y = y;
}

f32 Core::Vecf32x2::getX()
{
	return this->x;
}
f32 Core::Vecf32x2::getY()
{
	return this->y;
}

void Core::Vecf32x2::operator+=(f32 rhs)
{
	this->x += rhs;
	this->y += rhs;
}
void Core::Vecf32x2::operator-=(f32 rhs)
{
	this->x -= rhs;
	this->y -= rhs;
}
void Core::Vecf32x2::operator*=(f32 rhs)
{
	if(rhs != 0)
	{
		this->x *= rhs;
		this->y *= rhs;
	}
}

void Core::Vecf32x2::operator+=(Vecf32x2 rhs)
{
	this->x += rhs.getX();
	this->y += rhs.getY();
}
void Core::Vecf32x2::operator-=(Vecf32x2 rhs)
{
	this->x -= rhs.getX();
	this->y -= rhs.getY();
}
void Core::Vecf32x2::operator*=(Vecf32x2 rhs)
{
	this->x -= rhs.getX();
	this->y -= rhs.getY();
}

Core::Vecf32x2 Core::operator+(Vecf32x2 lhs, Vecf32x2 rhs)
{
	return Vecf32x2(lhs.getX() + rhs.getX(), lhs.getY() + rhs.getY());
}
Core::Vecf32x2 Core::operator-(Vecf32x2 lhs, Vecf32x2 rhs)
{
	return Vecf32x2(lhs.getX() - rhs.getX(), lhs.getY() - rhs.getY());
}
Core::Vecf32x2 Core::operator*(Vecf32x2 lhs, Vecf32x2 rhs)
{
	return Vecf32x2(lhs.getX() * rhs.getX(), lhs.getY() * rhs.getY());
}

Core::Vecf32x2 Core::operator+(Vecf32x2 lhs, f32 rhs)
{
	return Vecf32x2(lhs.getX() + rhs, lhs.getY() + rhs);
}
Core::Vecf32x2 Core::operator-(Vecf32x2 lhs, f32 rhs)
{
	return Vecf32x2(lhs.getX() - rhs, lhs.getY() - rhs);
}
Core::Vecf32x2 Core::operator*(Vecf32x2 lhs, f32 rhs)
{
	return Vecf32x2(lhs.getX() * rhs, lhs.getY() * rhs);
}

//@TODO(Armin): Add the window initzializer don't create a window!
Core::Window::Window(Rect rect)
{
	this->window_rectangle = rect;
}

Core::Window::Window(Size size)
{
	this->window_rectangle = Rect(size.getHeight(), size.getWidth());
}

Core::Window::Window(Vecf32x2 position)
{
	this->window_rectangle = Rect(600.0f,800.0f,position.getX(), position.getY());
}

Core::Window::Window()
{
	this->window_rectangle = Rect(600.0f, 800.0f, 0.0f, 0.0f);
}
