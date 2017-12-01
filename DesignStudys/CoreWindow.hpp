#pragma once
#include "typedef.hpp"

namespace Core
{
	/**
	\brief A 2D Vector type
	*/
	class Vecf32x2 final
	{
	private:
		f32 x, y;
	public:
		Vecf32x2(f32 x = 0.0f, f32 y = 0.0f);

		f32 getX();
		f32 getY();

		void operator+=(f32 rhs);
		void operator-=(f32 rhs);
		void operator*=(f32 rhs);

		void operator+=(Vecf32x2 rhs);
		void operator-=(Vecf32x2 rhs);
		void operator*=(Vecf32x2 rhs);

	};

	Vecf32x2 operator+(Vecf32x2 lhs, Vecf32x2 rhs);
	Vecf32x2 operator-(Vecf32x2 lhs, Vecf32x2 rhs);
	Vecf32x2 operator*(Vecf32x2 lhs, Vecf32x2 rhs);

	Vecf32x2 operator+(Vecf32x2 lhs, f32 rhs);
	Vecf32x2 operator-(Vecf32x2 lhs, f32 rhs);
	Vecf32x2 operator*(Vecf32x2 lhs, f32 rhs);

	class Size final
	{
	private:
		f32 width, height;
	public:
		Size(f32 width = 0, f32 height = 0);

		f32 getWidth();
		f32 getHeight();
	};

	class Rect final
	{
	private:
		f32 width, height, x, y;
	public:
		Rect(Size size, Vecf32x2 pos);
		Rect(f32 width = 1, f32 height = 1, f32 x = 0, f32 y = 0);

		f32 getWidth();
		f32 getHeight();
		f32 getX();
		f32 getY();
	};

	class Window
	{
		//@TODO(Armin): Add the rest of the needet members
		Rect window_rectangle;
	public:
		Window(Rect rect);
		Window(Size size);
		Window(Vecf32x2 pos);
		Window();
	};
}
