#include <glut.h>

// void Display() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
// void Initialize() {
//	glClearColor(0.8, 1.0, 0.6, 1.0);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-200.0, 200.0, -200.0, 200.0, -5.0, 5.0);
//}
// int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(800, 400);
//	glutInitWindowPosition(100, 200);
//	glutCreateWindow("Our first GLUT application!");
//	glutDisplayFunc(Display);
//	Initialize();
//
//	return 0;
//}

void renderScene(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glBegin(GL_POLYGON);
  glVertex2f(0, 0);
  glVertex2f(0, 0.2);
  glVertex2f(0.1, 0.2);
  glEnd();

  glutSwapBuffers();
}

int main(int argc, char** argv) {
  // Инициализация GLUT
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(300, 300);
  glutInitWindowSize(400, 400);
  glutCreateWindow("Урок 1");
  glutDisplayFunc(renderScene);
  // sleep_for(chrono::milliseconds(3000));

  // Основной цикл GLUT
  glutMainLoop();

  return 0;
}
