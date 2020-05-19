#include <vector>
#include <glm.hpp>
#include <GL/gl.h>

class ge_window;

class ge_renderer
{
private:
	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;

	GLuint vertexArrayID;
	GLuint programID;
	GLuint matrixID;

	static void InitGlew();
	static void ClearScreen();
	void DrawObjects(ge_window _window) const;
	static void PollEvent();
	static void Close();


public:
	ge_renderer();

	void AddVertices(std::vector<glm::vec3> _vertices);
	void AddUV(std::vector<glm::vec2> _uvs);

	void RenderLoop(ge_window _ge_window) const;
	void Clean() const;
	void CleanSceneObjects() const;
	
	
};
