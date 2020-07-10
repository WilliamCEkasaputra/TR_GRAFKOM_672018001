#include<windows.h>
#include<GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state,int x,int y);
void ukuran(int, int);
void mouseMotion(int x,int y);

float xrot=0,yrot=0,xdiff=0,ydiff=0;
bool mouseDown = false;
int is_depth;

void awan(void){
 glPushMatrix();
 glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
 glColor3ub(153, 223, 255);
 glutSolidSphere(10, 50, 50);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(10,0,1);
 glutSolidSphere(5, 50, 50);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-2,6,-2);
 glutSolidSphere(7, 50, 50);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(-10,-3,0);
 glutSolidSphere(7, 50, 50);
 glPopMatrix();
 glPushMatrix();
 glTranslatef(6,-2,2);
 glutSolidSphere(7, 50, 50);
 glPopMatrix();
 }

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
}


void tampil(void){
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
gluLookAt(0,0,3,0,0,0,0,1,0);
glRotatef(xrot,1,0,0);
glRotatef(yrot,0,1,0);

//Spawn Awan
glPushMatrix();
    glTranslatef(-5, 15, -10);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10, 20, -20);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 10, -15);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20, 10, -15);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();
glEnd();
glutSwapBuffers();
}


void idle(){
if(!mouseDown){
    xrot +=0.3f;
    yrot +=0.4;
}
glutPostRedisplay();
}

void mouse(int button,int state,int x,int y){
if(button==GLUT_LEFT_BUTTON && state ==GLUT_DOWN){
    mouseDown=true;
    xdiff=x-yrot;
    ydiff=-y+xrot;
}else mouseDown=false;

}

void mouseMotion(int x,int y){
if(mouseDown){
    yrot=x-xdiff;
    xrot=y+ydiff;
    glutPostRedisplay();
}
}
void ukuran(int lebar,int tinggi){
    if (tinggi==0) tinggi =1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(25,lebar/tinggi,5,500);
    glTranslatef(0,0,-150);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Bayu Kristian - 672018005");
    init();
    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
