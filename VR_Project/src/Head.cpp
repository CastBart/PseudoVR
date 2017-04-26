#include <include\Head.h>





Head::Head()
	: m_leftCamera(1.0f)
	, m_rightCamera(1.0f)
{

}


Head::~Head()
{

}

void Head::initialize()
{
	m_leftCamera = glm::lookAt(
		glm::vec3(-1.0f, 0.0f, 10.0f),	// Camera (x,y,z), in World Space
		glm::vec3(0.0f, 0.0f, 0.0f),	// Camera looking at origin
		glm::vec3(0.0f, 1.0f, 0.0f)	// 0.0f, 1.0f, 0.0f Look Down and 0.0f, -1.0f, 0.0f Look Up
	);

	m_rightCamera = glm::lookAt(
		glm::vec3(1.0f, 0.0f, 10.0f),	// Camera (x,y,z), in World Space
		glm::vec3(0.0f, 0.0f, 0.0f),	// Camera looking at origin
		glm::vec3(0.0f, 1.0f, 0.0f)	// 0.0f, 1.0f, 0.0f Look Down and 0.0f, -1.0f, 0.0f Look Up
	);
}
