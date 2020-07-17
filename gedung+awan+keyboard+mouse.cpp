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
float xtr=0,ytr=0,ztr=0;
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    is_depth=1;
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

void lantaibawah(){
glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(-19.76,3.23,31.16);
glVertex3f(-19.76,0.44,31.16);
glVertex3f(0.90,0.44,49.49);
glVertex3f(0.90,3.23,49.49);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(-19.76,3.23,31.16);
glVertex3f(-19.76,0.44,31.16);
glVertex3f(-14.08,0.44,23.15);
glVertex3f(-14.08,3.23,23.15);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(-14.08,3.23,23.15);
glVertex3f(-14.08,0.44,23.15);
glVertex3f(22.40,0.44,28.19);
glVertex3f(22.40,3.23,28.19);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(22.40,3.23,28.19);
glVertex3f(22.40,0.44,28.19);
glVertex3f(24.75,0.44,34.50);
glVertex3f(24.75,3.23,34.50);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(24.75,0.44,34.50);
glVertex3f(24.75,3.23,34.50);
glVertex3f(7.27,3.23,49.86);
glVertex3f(7.27,0.44,49.86);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(7.27,3.23,49.86);
glVertex3f(7.27,0.44,49.86);
glVertex3f(5.46,0.44,49.73);
glVertex3f(5.46,3.23,49.73);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex3f(5.46,1.62,49.73);
glVertex3f(5.46,0.44,49.73);
glVertex3f(0.90,0.44,49.49);
glVertex3f(0.90,1.62,49.49);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.6);
glVertex3f(0.90,1.62,49.49);
glVertex3f(5.46,1.62,49.73);
glVertex3f(5.43,1.62,50.47);
glVertex3f(0.86,1.62,50.24);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(0.90,3.61,49.49);
glVertex3f(5.46,3.61,49.73);
glVertex3f(5.43,3.61,50.47);
glVertex3f(0.86,3.61,50.24);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.3,0.2);
glVertex3f(0.86,3.61,50.24);
glVertex3f(0.86,1.62,50.24);
glVertex3f(5.43,1.62,50.47);
glVertex3f(5.43,3.61,50.47);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(5.43,3.61,50.47);
glVertex3f(5.43,1.62,50.47);
glVertex3f(5.46,1.62,49.73);
glVertex3f(5.46,3.61,49.73);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(0.86,3.61,50.24);
glVertex3f(0.86,1.62,50.24);
glVertex3f(0.90,1.62,49.49);
glVertex3f(0.90,3.61,49.49);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(0.90,3.61,49.49);
glVertex3f(0.90,3.23,49.49);
glVertex3f(1.07,3.23,46.11);
glVertex3f(1.07,3.61,46.11);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(5.46,3.61,49.73);
glVertex3f(5.46,3.23,49.73);
glVertex3f(5.64,3.23,46.34);
glVertex3f(5.64,3.61,46.34);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(5.64,3.23,46.34);
glVertex3f(5.64,3.61,46.34);
glVertex3f(1.07,3.61,46.11);
glVertex3f(1.07,3.23,46.11);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(1.07,3.61,46.11);
glVertex3f(0.90,3.61,49.49);
glVertex3f(5.46,3.61,49.73);
glVertex3f(5.64,3.61,46.34);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(0.90,3.23,49.49);
glVertex3f(-19.76,3.23,31.16);
glVertex3f(-14.08,3.23,23.15);
glVertex3f(22.40,3.23,28.19);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(0.90,3.23,49.49);
glVertex3f(22.40,3.23,28.19);
glVertex3f(24.75,3.23,34.50);
glVertex3f(7.27,3.23,49.86);
glEnd();

//lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(0.90,0.44,49.49);
glVertex3f(-19.76,0.44,31.16);
glVertex3f(-14.08,0.44,23.15);
glVertex3f(22.40,0.44,28.19);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(0.90,0.44,49.49);
glVertex3f(22.40,0.44,28.19);
glVertex3f(24.75,0.44,34.50);
glVertex3f(7.27,0.44,49.86);
glEnd();
}

void lt_atas1(){
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-6.39,5.69,42.31);
glVertex3f(-6.39,3.23,42.31);
glVertex3f(-11.40,3.23,38.05);
glVertex3f(-11.40,5.69,38.05);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-11.40,3.23,38.05);
glVertex3f(-11.40,5.69,38.05);
glVertex3f(-8.49,5.69,31.57);
glVertex3f(-8.49,3.23,31.57);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-8.49,5.69,31.57);
glVertex3f(-8.49,3.23,31.57);
glVertex3f(-4.18,3.23,30.88);
glVertex3f(-4.18,5.69,30.88);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-4.18,3.23,30.88);
glVertex3f(-4.18,5.69,30.88);
glVertex3f(15.75,5.69,32.33);
glVertex3f(15.75,3.23,32.33);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(15.75,5.69,32.33);
glVertex3f(15.75,3.23,32.33);
glVertex3f(12.52,3.23,37.63);
glVertex3f(12.52,5.69,37.63);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(12.52,3.23,37.63);
glVertex3f(12.52,5.69,37.63);
glVertex3f(4.28,5.69,42.81);
glVertex3f(4.28,3.23,42.81);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(4.28,5.69,42.81);
glVertex3f(4.28,3.23,42.81);
glVertex3f(-1.82,3.23,38.74);
glVertex3f(-1.82,5.69,38.74);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-1.82,3.23,38.74);
glVertex3f(-1.82,5.69,38.74);
glVertex3f(-4.31,5.69,39.03);
glVertex3f(-4.31,3.23,39.03);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-4.31,5.69,39.03);
glVertex3f(-4.31,3.23,39.03);
glVertex3f(-4.91,3.23,39.65);
glVertex3f(-4.91,5.69,39.65);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-4.91,3.23,39.65);
glVertex3f(-4.91,5.69,39.65);
glVertex3f(-6.39,5.69,42.31);
glVertex3f(-6.39,3.23,42.31);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-6.39,5.69,42.31);
glVertex3f(-4.91,5.69,39.65);
glVertex3f(-8.49,5.69,31.57);
glVertex3f(-11.40,5.69,38.05);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-4.91,5.69,39.65);
glVertex3f(-8.49,5.69,31.57);
glVertex3f(-4.18,5.69,30.88);
glVertex3f(-4.31,5.69,39.03);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-4.18,5.69,30.88);
glVertex3f(-4.31,5.69,39.03);
glVertex3f(-1.82,5.69,38.74);
glVertex3f(-4.18,5.69,30.88);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-1.82,5.69,38.74);
glVertex3f(-4.18,5.69,30.88);
glVertex3f(4.43,5.69,31.50);
glVertex3f(4.28,5.69,42.81);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(4.43,5.69,31.50);
glVertex3f(4.28,5.69,42.81);
glVertex3f(12.52,5.69,37.63);
glVertex3f(15.75,5.69,32.33);
glEnd();


//lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-6.39,3.23,42.31);
glVertex3f(-4.91,3.23,39.65);
glVertex3f(-8.49,3.23,31.57);
glVertex3f(-11.40,3.23,38.05);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-4.91,3.23,39.65);
glVertex3f(-8.49,3.23,31.57);
glVertex3f(-4.18,3.23,30.88);
glVertex3f(-4.31,3.23,39.03);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-4.18,3.23,30.88);
glVertex3f(-4.31,3.23,39.03);
glVertex3f(-1.82,3.23,38.74);
glVertex3f(-4.18,3.23,30.88);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-1.82,3.23,38.74);
glVertex3f(-4.18,3.23,30.88);
glVertex3f(4.43,3.23,31.50);
glVertex3f(4.28,3.23,42.81);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(4.43,3.23,31.50);
glVertex3f(4.28,3.23,42.81);
glVertex3f(12.52,3.23,37.63);
glVertex3f(15.75,3.23,32.33);
glEnd();
}

void lt_atas2(){
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-12.24,5.67,37.54);
glVertex3f(-12.24,3.23,37.54);
glVertex3f(-15.92,3.23,34.22);
glVertex3f(-15.92,5.67,34.22);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-15.92,3.23,34.22);
glVertex3f(-15.92,5.67,34.22);
glVertex3f(-15.64,5.67,33.71);
glVertex3f(-15.64,3.23,33.71);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-15.64,5.67,33.71);
glVertex3f(-15.64,3.23,33.71);
glVertex3f(-19.47,3.23,31.24);
glVertex3f(-19.47,5.67,31.24);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-19.47,3.23,31.24);
glVertex3f(-19.47,5.67,31.24);
glVertex3f(-11.40,5.67,23.71);
glVertex3f(-11.40,3.23,23.71);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-11.40,5.67,23.71);
glVertex3f(-11.40,3.23,23.71);
glVertex3f(18.77,3.23,27.84);
glVertex3f(18.77,5.67,27.84);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(18.77,3.23,27.84);
glVertex3f(18.77,5.67,27.84);
glVertex3f(15.83,5.67,32.09);
glVertex3f(15.83,3.23,32.09);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(15.83,5.67,32.09);
glVertex3f(15.83,3.23,32.09);
glVertex3f(-4.46,3.23,30.62);
glVertex3f(-4.46,5.67,30.62);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-4.46,3.23,30.62);
glVertex3f(-4.46,5.67,30.62);
glVertex3f(-8.75,5.67,31.27);
glVertex3f(-8.75,3.23,31.27);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(-8.75,5.67,31.27);
glVertex3f(-8.75,3.23,31.27);
glVertex3f(-12.24,3.23,37.54);
glVertex3f(-12.24,5.67,37.54);
glEnd();

//atap
glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-12.24,5.67,37.54);
glVertex3f(-15.92,5.67,34.22);
glVertex3f(-15.64,5.67,33.71);
glVertex3f(-8.75,5.67,31.27);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-15.64,5.67,33.71);
glVertex3f(-8.75,5.67,31.27);
glVertex3f(-11.40,5.67,23.71);
glVertex3f(-19.47,5.67,31.24);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-8.75,5.67,31.27);
glVertex3f(-11.40,5.67,23.71);
glVertex3f(-5.10,5.67,24.57);
glVertex3f(-4.46,5.67,30.62);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.8,0.8,0.9);
glVertex3f(-5.10,5.67,24.57);
glVertex3f(-4.46,5.67,30.62);
glVertex3f(15.83,5.67,32.09);
glVertex3f(18.77,5.67,27.84);
glEnd();

//lantai
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-12.24,3.23,37.54);
glVertex3f(-15.92,3.23,34.22);
glVertex3f(-15.64,3.23,33.71);
glVertex3f(-8.75,3.23,31.27);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-15.64,3.23,33.71);
glVertex3f(-8.75,3.23,31.27);
glVertex3f(-11.40,3.23,23.71);
glVertex3f(-19.47,3.23,31.24);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-8.75,3.23,31.27);
glVertex3f(-11.40,3.23,23.71);
glVertex3f(-5.10,3.23,24.57);
glVertex3f(-4.46,3.23,30.62);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(-5.10,3.23,24.57);
glVertex3f(-4.46,3.23,30.62);
glVertex3f(15.83,3.23,32.09);
glVertex3f(18.77,3.23,27.84);
glEnd();

}

void pintu_jendela(){
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex3f(1.008,3.07,50.2501);
glVertex3f(1.008,1.78,50.2501);
glVertex3f(5.29,1.78,50.4701);
glVertex3f(5.29,3.07,50.4701);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.7,0.7);
glVertex3f(1.90,1.51,49.5501);
glVertex3f(1.90,0.44,49.5501);
glVertex3f(4.48,0.44,49.6801);
glVertex3f(4.48,1.51,49.6801);
glEnd();

}

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

void tampil(void){
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);
//Spawn Awan
glPushMatrix();
    glTranslatef(-5+xtr, 15+ytr, 35+ztr);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10+xtr, 20+ytr, 55+ztr);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0+xtr, 10+ytr, 45+ztr);
    glScalef(0.2, 0.2, 1.0);
    awan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20+xtr, 10+ytr, 45+ztr);
    glScalef(0.2, 0.2, 1.0);
    awan();
glPopMatrix();

glPushMatrix();
glTranslatef(xtr, ytr, ztr);
lantaibawah();
lt_atas1();
lt_atas2();
pintu_jendela();
glPopMatrix();
glutSwapBuffers();
}

void keyboard(unsigned char key,int x,int y){
switch(key){
case '5':
    if(is_depth){
        is_depth=0;
        glDisable(GL_DEPTH_TEST);
    }
    else{
        is_depth=1;
        glEnable(GL_DEPTH_TEST);
    }
case 'w':
case 'W':
    ztr+=3;
    break;
case 'd':
case 'D':
    xtr+=3;
    break;
case 's':
case 'S':
    ztr+=-3;
    break;
case 'a':
case 'A':
    xtr+=-3;
    break;
case '7':
    ytr+=3;
    break;
case '9':
    ytr+=-3;
    break;
}
tampil();

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
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR");
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
