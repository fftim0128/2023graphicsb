#include<GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glPushMatrix();//今天新加的程式碼
        glTranslatef(0.5,0,0);//旋轉中的
        glRotatef(angle,0,1,0);//今天新加的程式碼
    glColor3f(0,0,1);//藍色
    glutSolidTeapot(0.3);//茶壺
    glPopMatrix();

    glPushMatrix();//今天新加的程式碼
        glRotatef(angle,0,1,0);
        glTranslatef(0.5,0,0);//旋轉中的//今天新加的程式碼
    glColor3f(1,1,0);//藍色
    glutSolidTeapot(0.3);//茶壺
    glPopMatrix();
    glutSwapBuffers();//今天新加的程式碼
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
