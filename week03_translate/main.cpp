#include<GL/glut.h>
void display()
{
    glPushMatrix();//今天新加的程式碼
        glTranslatef(0.5,0.5,0);//今天新加的程式碼
    glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();//今天新加的程式碼
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");
	glutDisplayFunc(display);
    glutMainLoop();
}

