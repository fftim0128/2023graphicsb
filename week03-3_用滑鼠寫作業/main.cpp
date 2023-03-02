#include<GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
   glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);//清背景

    glutSwapBuffers();//今天新加的程式碼
}
void mouse(int button,int state,int x,int y)
{
    X=(x-150)/150.0;//設定座標
    Y=-(y-150)/150.0;//設定座標
    if(state==GLUT_DOWN) printf(" glVertex2f(%.2f,%.2f);\n",X,Y);
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
