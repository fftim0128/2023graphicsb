#include<GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glPushMatrix();//���ѷs�[���{���X
        glTranslatef(0.5,0,0);//���त��
        glRotatef(angle,0,1,0);//���ѷs�[���{���X
    glColor3f(0,0,1);//�Ŧ�
    glutSolidTeapot(0.3);//����
    glPopMatrix();

    glPushMatrix();//���ѷs�[���{���X
        glRotatef(angle,0,1,0);
        glTranslatef(0.5,0,0);//���त��//���ѷs�[���{���X
    glColor3f(1,1,0);//�Ŧ�
    glutSolidTeapot(0.3);//����
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
