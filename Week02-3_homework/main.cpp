#include <GL/glut.h>
void display()
{

   glBegin(GL_POLYGON);
      glColor3f(252/255.0,136/255.0,111/255.0);//�Ʀr����W�L1�ҥH�n��255.0
      glVertex2f((65-100)/100.0,-(54-100)/100.0);//�W��
      glVertex2f((34-100)/100.0,-(138-100)/100.0);//���U��
      glVertex2f((59-100)/100.0,-(138-100)/100.0);
      glVertex2f((87-100)/100.0,-(53-100)/100.0);//�k�U��
    glEnd();

   glColor3f(1,0,1);
   glutSolidTeapot( 0.4 );
   glColor3f(0,1,1);
   glutSolidTeapot( 0.3 );
   glutSwapBuffers();
 }
 int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02");
	glutDisplayFunc(display);
    glutMainLoop();
}
