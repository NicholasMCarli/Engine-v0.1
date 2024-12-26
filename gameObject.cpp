#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<GLM/glm.hpp>

struct gameObject
{
	glm::vec3 position{ };
	glm::vec3 rotation{ };
};

struct cube : gameObject
{
	float vertices[24] = 
	{
		-0.5, -0.5, -0.5
		 0.5, -0.5, -0.5,
		-0.5,  0.5, -0.5,
		 0.5,  0.5, -0.5

		-0.5, -0.5, 0.5
		 0.5, -0.5, 0.5,
		-0.5,  0.5, 0.5,
		 0.5,  0.5, 0.5,

	};
};