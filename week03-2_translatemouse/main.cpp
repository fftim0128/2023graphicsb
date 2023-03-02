//week03-2 translate_mouse 要加上mouse的移動功能
//新增一個project
//使用global變數,來讓座標改變

#include<GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
   glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);//清背景
    glPushMatrix();//今天新加的程式碼
        glTranslatef(X,Y,Z);//今天新加的程式碼
    glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();//今天新加的程式碼
}
void mouse(int button,int state,int x,int y)
{
    X=(x-150)/150.0;//設定座標
    Y=-(y-150)/150.0;//設定座標
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
