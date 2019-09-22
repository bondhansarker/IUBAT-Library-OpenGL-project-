#include <windows.h>
#include <GL/glut.h>

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(.1,.1,.65);
    glBegin(GL_QUADS);
    glVertex2f(0,20);
    glVertex2f(22,20);
    glVertex2f(22,16);
    glVertex2f(0,16);


    glEnd();
    glFlush();
}
void Initialize()
{
    glClearColor(0, 0, 0, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,60, -15, 60, 1.0, -1.0);
}

int main(int Argc, char** Argv)
{
    glutInit(&Argc, Argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(60,60);
    glutCreateWindow("Quads");
    Initialize();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

