//week03-2 translate_mouse �n�[�Wmouse�����ʥ\��
//�s�W�@��project
//�ϥ�global�ܼ�,�����y�Ч���

#include<GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
   glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);//�M�I��
    glPushMatrix();//���ѷs�[���{���X
        glTranslatef(X,Y,Z);//���ѷs�[���{���X
    glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();//���ѷs�[���{���X
}
void mouse(int button,int state,int x,int y)
{
    X=(x-150)/150.0;//�]�w�y��
    Y=-(y-150)/150.0;//�]�w�y��
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

	glutMouseFunc(mouse);
	glutDisplayFunc(display);
    glutMainLoop();

}
