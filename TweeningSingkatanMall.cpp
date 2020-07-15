//Tugas Rancang GRAFKOM Kel 1
//672018001 , 672018002, 672018005

#include <stdio.h>
#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

#define RATIO 1.200
#define WW 100
#define WH (WW/RATIO)
#define HALFX ((int)(WW/2))
#define HALFY ((int)(WH/2))
#define deltat .001
int WindowWidth;
int WindowHeight;

void Display(){
     glLineWidth(4.0);
     float HurufP[12][2]={
          {-15,-15},{-5,-15},{-5,5},{0,5},{5,5},{5,5},
          {15,5},{15,25},{5,25},{0,25},{-5,25},{-15,25}
          };
     float HurufM[12][2]{
           {-15,-15},{-5,-15},{-5,10},{0,0},{5,10},{5,-15},
          {15,-15},{15,25},{5,25},{0,15},{-5,25},{-15,25}
          };

     float IntermediateShape[12][2];
     float VertexColors[12][3]={
          {1,0,0},{1,1,0},{1,0,1},{0,1,0},{0,1,1},{0,0,1},
          {0,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1},{1,0,0.5},{0,1,0.5}
     };
     static float Tween = 0.0 - deltat;

     if (Tween < 1){
          Tween += deltat;
     }
     for(int Vtx=0;Vtx<12;Vtx++){
          IntermediateShape[Vtx][0] = (1.0 - Tween)* HurufP[Vtx][0]+Tween*HurufM[Vtx][0];
          IntermediateShape[Vtx][1] = (1.0 - Tween)* HurufP[Vtx][1]+Tween*HurufM[Vtx][1];
     }

     glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
     glColorPointer(3,GL_FLOAT,0,VertexColors);

     for(int i = 0; i < 1000000;i++);
     glClear(GL_COLOR_BUFFER_BIT);
     glDrawArrays(GL_LINE_LOOP,0,12);
     glutSwapBuffers();
     glutPostRedisplay();
}

void InitGL(){
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
     glClearColor(0,0,0,0);

     glEnableClientState(GL_VERTEX_ARRAY);

     glEnableClientState(GL_COLOR_ARRAY);
     glShadeModel(GL_SMOOTH);
     glViewport(0,0,WindowWidth,WindowHeight);
}

void Reshape(int w, int h){
     glutReshapeWindow(w,(int)(w/RATIO));
     WindowWidth = w;
     WindowHeight = (int)(w/RATIO);
     InitGL();
}

main(int argc, char **argv){
     glutInit(&argc,argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
     WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
     WindowHeight = (int)(WindowWidth/RATIO);

     glutInitWindowSize(WindowWidth,WindowHeight);
     glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)- (WindowHeight/2));

     glutCreateWindow("Tweening Huruf Mall");

     glutDisplayFunc(Display);
     glutReshapeFunc(Reshape);
     InitGL();
     glutMainLoop();
}
