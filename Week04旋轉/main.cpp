#include<GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//���ѷs�[���{���X
        glRotatef(angle,0,1,0);//���ѷs�[���{���X
    glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();//���ѷs�[���{���X
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

	glutDisplayFunc(display);
	glutIdleFunc(display);
    glutMainLoop();
}
