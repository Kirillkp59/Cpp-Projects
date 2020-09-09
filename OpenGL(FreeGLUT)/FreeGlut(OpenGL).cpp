#include "pch.h"
#include "glut.h" //подключаем заголовочный файл glut.h
#include "freeglut.h"
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPointSize(6);
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POINTS);//рисуем черную точку
	glVertex2f(-0.5f, 0.2f);
	glEnd();

	glLineWidth(3);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);//рисуем красную линию
	glVertex2d(-1, 1);
	glVertex2d(1, -1);
	glEnd();

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLES);//рисуем зеленый треугольник
	glVertex2d(0, 0);
	glVertex2f(0.5, 1);
	glVertex2d(1, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 1.0f);//рисуем синий треугольник
	glBegin(GL_QUADS);
	glVertex2d(-1, -1);
	glVertex2d(-1, 0);
	glVertex2d(0, 0);
	glVertex2d(0, -1);
	glEnd();

	glutSwapBuffers();//прорисовываем буфер на экран
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(200, 200);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Window");
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1, 1, -1, 1, 0, 0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}