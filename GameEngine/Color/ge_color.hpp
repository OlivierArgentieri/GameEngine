#pragma once
#include <GLFW/glfw3.h>

struct ge_color
{
public:
	GLclampf r;
	GLclampf g;
	GLclampf b;
	GLclampf a;

	ge_color(float _r, float _g, float _b, float _a = 1);
	ge_color(const ge_color& _color);
	ge_color();
};