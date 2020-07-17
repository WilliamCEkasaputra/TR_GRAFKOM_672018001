//TR Grafkom Titik Potong by 672018001
#include <windows.h>
#include <gl/Gl.h>
#include <GL/glut.h>

float xa=100, ya=100, xb=260, yb=260,xc=300, yc=50, xd=100, yd=310, Mab,Mcd,Cab,Ccd,titik_x,titik_y;

void garis(void){
 Mab = (yb-ya)/(xb-xa);
 Cab = ya-(Mab*xa);

 Mcd = (yd-yc)/(xd-xc);
 Ccd = yc -(Mcd*xc);

 titik_x = (Ccd-Cab)/(Mab-Mcd);
 titik_y = (Mab*titik_x)+Cab;



 glClear (GL_COLOR_BUFFER_BIT);
 glBegin (GL_LINES);
 glColor3f(1, 0, 0);
  glVertex2i(xa,ya);                //garis merah
  glVertex2i(xb,yb);

 glColor3f(0, 1, 0);
  glVertex2i(xc,yc);                //garis hijau
  glVertex2i(xd,yd);
 glEnd ();
 glFlush();

 glBegin(GL_POINTS);
 glColor3f(0, 0, 1);
  glVertex2i(titik_x,titik_y);         //titik potong
 glEnd();
 glFlush();

 glBegin (GL_LINES);
 glColor3f(0, 0, 1);
  glVertex2i(xc,yc);                //bingkai
  glVertex2i(xb,yb);

 glColor3f(0, 0, 1);
  glVertex2i(xa,ya);                //bingkai
  glVertex2i(xd,yd);
 glEnd ();
 glFlush();

 glEnd();
 glFlush();

 glBegin (GL_LINES);
 glColor3f(0, 0, 1);
  glVertex2i(xa,ya);                //bingkai
  glVertex2i(xc,yc);

 glColor3f(0, 0, 1);
  glVertex2i(xb,yb);                //bingkai
  glVertex2i(xd,yd);
 glEnd ();
 glFlush();

 glEnd();
 glFlush();
}

void display (void){
 glClearColor(1,1,1,0);
 glColor3f(0.0f,0.0f,0.0f);
 glPointSize(10);
 glLineWidth(3);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0,500,0,400);
 glFlush();

}

int main (int x, char** y){
 glutInit(& x,y);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(720,680);
 glutInitWindowPosition(200,200);
 glutCreateWindow(" Rasi Bintang Layang2 ");
 glutDisplayFunc(garis);
 display();
 glutMainLoop();
}
