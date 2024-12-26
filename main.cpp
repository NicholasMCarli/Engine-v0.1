#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main()
{
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	int width{ 1000 };
	int height{ 600 };

	GLFWwindow* window = glfwCreateWindow( width,  height, "Niggas", NULL, NULL);
	if (!window)
	{
		std::cout << "window doesn't exist" << std::endl;
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();

	 
	glViewport(0, 0, 1000/2, 600/2);


	// main loop
	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.015, 0.1, 0.20, 1.0);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}