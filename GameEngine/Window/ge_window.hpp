#pragma once
#include <string>
#include <glfw3.h>

#include <../Color/ge_color.hpp>

class ge_window
{
private:
	float width;
	float height;

	std::string name;
	ge_color backgroundColor;

	//main window
	GLFWwindow *window;

	static void InitGlfw();
	static void InitWindowSettings();
	static void InitMacSettings();
	void CreateWindow(const char* _titleWindow);


public:
	ge_window(float _width, float _height, const char* _title, const ge_color _bgColor);
	void InitWindow() const;
	void SwapBuffer() const;
	void UpdateInputEvent() const;
	void UpdateBackgroundColor(ge_color _bgColor);

	int GetKey(int _key) const;
	
	GLFWwindow* GetWindow() const;
	void Clear();
};
