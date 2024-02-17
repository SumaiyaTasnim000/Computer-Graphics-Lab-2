#include <windows.h>
#include <GL/glut.h>

void display() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);


   glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);
    glVertex2f(0.0,1.0);
    glVertex2f(0.0,-1.0);
    glEnd();

glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(0.2,0.6);
      glVertex2f(0.2,0.8);
      glVertex2f(0.6,0.8);
      glVertex2f(0.6,0.6);
      glEnd();

glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.2,0.4);
      glVertex2f(0.2,0.6);
      glVertex2f(0.6,0.6);
      glVertex2f(0.6,0.4);
      glEnd();

glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(0.2,0.2);
      glVertex2f(0.2,0.4);
      glVertex2f(0.6,0.4);
      glVertex2f(0.6,0.2);
      glEnd();

glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.2,0.9);
    glVertex2f(0.2,0.0);

    glEnd();


   glFlush();
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("German Flag!!");
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}

