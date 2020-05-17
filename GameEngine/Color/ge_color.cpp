#include "ge_color.hpp"

ge_color::ge_color(float _r, float _g, float _b, float _a)
{
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}

ge_color::ge_color(const ge_color& _color) : ge_color(_color.a, _color.g, _color.g, _color.a)
{
}

ge_color::ge_color() : ge_color(0,0,0,0)
{	
}