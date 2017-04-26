#pragma once
#include<glm\glm.hpp>
#include <gl/glew.h>
#include <gl/wglew.h>
#include <glm/gtc/matrix_transform.hpp>
class Head
{
public:

	glm::mat4 m_leftCamera;
	glm::mat4 m_rightCamera;

	Head();
	~Head();

	void initialize();
};

