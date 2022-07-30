
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
	if (!glfwInit()) {
		return -1;
	}

	glfwDefaultWindowHints();
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);

	GLFWwindow* windowHandle = glfwCreateWindow(1600, 900, "OpenGL Template", NULL, NULL);

	if (windowHandle == NULL) {
		return -1;
	}
	glfwMakeContextCurrent(windowHandle);
	glfwSwapInterval(1);

	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

	glfwShowWindow(windowHandle);

	while (!glfwWindowShouldClose(windowHandle)) {
		glfwPollEvents();

		glClearColor(0.3f, 0.4f, 0.8f, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		unsigned int buffer;
		glGenBuffers(1, &buffer);

		glfwSwapBuffers(windowHandle);
	}
}