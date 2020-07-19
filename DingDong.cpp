#include<windows.h>
#include<GL/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char ,int ,int);
void ukuran(int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    //glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //is_depth=1;
    //glMatrixMode(GL_MODELVIEW);
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if(mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void tampil(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    //if(is_depth)
        //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //else
        //glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,0,0);
glVertex3f(4,0,0);
glVertex3f(4,4,0);
glVertex3f(0,4,0);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,0,-4);
glVertex3f(4,0,-4);
glVertex3f(4,7,-4);
glVertex3f(0,7,-4);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,0,0);
glVertex3f(0,0,-4);
glVertex3f(0,4,-4);
glVertex3f(0,4,0);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(4,0,0);
glVertex3f(4,0,-4);
glVertex3f(4,4,-4);
glVertex3f(4,4,0);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,0,0);
glVertex3f(4,0,0);
glVertex3f(4,4,0);
glVertex3f(0,4,0);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,7,-4);
glVertex3f(4,7,-4);
glVertex3f(4,8,-3.1);
glVertex3f(0,8,-3.1);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,8,-3.1);
glVertex3f(4,8,-3.1);
glVertex3f(4,8,-2);
glVertex3f(0,8,-2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,8,-2);
glVertex3f(4,8,-2);
glVertex3f(4,4,-2);
glVertex3f(0,4,-2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0.658824,0.658824,0.858824);
 glVertex3f(0.4,7,-1.9);
glVertex3f(3.6,7,-1.9);
glVertex3f(3.6,5,-1.9);
glVertex3f(0.4,5,-1.9);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.5);
 glVertex3f(0,4,-1.9);
glVertex3f(4,4,-1.9);
glVertex3f(4,4,0.9);
glVertex3f(0,4,0.9);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,1,0);
 glVertex3f(0.33,4.1,-1);
glVertex3f(0.99,4.1,-1);
glVertex3f(0.99,4.1,0.2);
glVertex3f(0.33,4.1,0.2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(1,1,0);
 glVertex3f(1.11,4.1,-1);
glVertex3f(1.77,4.1,-1);
glVertex3f(1.77,4.1,0.2);
glVertex3f(1.11,4.1,0.2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(1,1,0);
 glVertex3f(3.11,4.1,-1);
glVertex3f(2.45,4.1,-1);
glVertex3f(2.45,4.1,0.2);
glVertex3f(3.11,4.1,0.2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,1,0);
 glVertex3f(3.23,4.1,-1);
glVertex3f(3.89,4.1,-1);
glVertex3f(3.89,4.1,0.2);
glVertex3f(3.23,4.1,0.2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,8,-2);
glVertex3f(0,8,-3.1);
glVertex3f(0,4,-3.1);
glVertex3f(0,4,-2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(4,8,-2);
glVertex3f(4,8,-3.1);
glVertex3f(4,4,-3.1);
glVertex3f(4,4,-2);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(4,8,-3.1);
glVertex3f(4,4,-3.1);
glVertex3f(4,4,-4);
glVertex3f(4,7,-4);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0,0,0.8);
 glVertex3f(0,8,-3.1);
glVertex3f(0,4,-3.1);
glVertex3f(0,4,-4);
glVertex3f(0,7,-4);
glEnd();

glBegin(GL_QUADS);
 glColor3f(0.329412,0.329412,0.329412);
 glVertex3f(0.4,2.7,0.1);
glVertex3f(3.6,2.7,0.1);
glVertex3f(3.6,0.8,0.1);
glVertex3f(0.4,0.8,0.1);
glEnd();

glutSwapBuffers();


}

void keyboard(unsigned char key,int x,int y){
switch(key){
case 'w':
case 'W':
    glTranslatef(0,0,3);
    break;
case 'd':
case 'D':
    glTranslatef(3,0,0);
    break;
case 's':
case 'S':
    glTranslatef(0,0,-3);
    break;
case 'a':
case 'A':
    glTranslatef(-3,0,0);
    break;
case '7':
    glTranslatef(0,3,0);
    break;
case '9':
    glTranslatef(0,-3,0);
    break;
case '2':
    glRotatef(2,1,0,0);
    break;
case '8':
    glRotatef(-2,1,0,0);
    break;
case '6':
    glRotatef(2,0,1,0);
    break;
case '4':
    glRotatef(-2,0,1,0);
    break;
case '1':
    glRotatef(2,0,0,1);
    break;
case '3':
    glRotatef(-2,0,0,1);
    break;
case '5':
    if(is_depth){
        is_depth=0;
        glDisable(GL_DEPTH_TEST);
    }
    else{
        is_depth=1;
        glEnable(GL_DEPTH_TEST);
    }
}
tampil();

}

void ukuran(int lebar,int tinggi){
    if (tinggi==0) tinggi =1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(25,lebar/tinggi,5,500);
    glTranslatef(0,0,-150);
    glScalef(1,1.2,1);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("William Chrisnando Ekasaputra - 672018002");
    init();
    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}
