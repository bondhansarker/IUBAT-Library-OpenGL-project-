#include <windows.h>
#include <GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

float boyb=100,boyf=800,boys=100,girl=40,boysr=30,boysd=48,boybd=-15,boyfd=8,cnt=1,cnt1=1,fix=10000;
double arr[1200];



void circle(double x,double y,double rad,double st,double fin,double r,double g,double b)
{
    double angle=2*acos(0.0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(r,g,b);
    glVertex2f(x,y);
    for(double i=st;i<=fin; i+=.02)
    {
        double x2 = x+sinf(i*angle/180.0)*rad;
        double y2 = y+cosf(i*angle/180.0)*rad*1.7;
        glVertex2f(x2,y2);
    }
    glEnd();
}

void triangle(double x1,double y1,double x2,double y2,double x3,double y3,double r,double g,double b)
{
    glColor3f(r,g,b);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
}

void quad(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4,double r,double g,double b)
{
    glColor3f(r,g,b);
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
}

void line(float x1,float y1,float x2,float y2,double r,double g,double b)
{
    //glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);

    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}

void librayman()
{
    glPushMatrix();
    glScalef(.8,.8,0);
    glTranslatef(8,7,0);
    ///body
    quad(35,36,38,36,38,30,35,30,0,0.55,0.55);
    quad(36,38,37,38,37,36,36,36,0.93,0.7,0.58);
    ///face
    circle(36.5,37,2.50,-90.0,90.0,0.0,0.0,0.0);
    circle(36.5,38.5,1.2,0.0,360.0,0.98,0.76,0.58);
    ///eye
    circle(36.1,38.6,.15,-90,90,1,1,1);
    circle(36.9,38.6,.15,-90,90,1,1,1);
    circle(36.1,38.7,.05,0,360,0,0,0);
    circle(36.9,38.7,.05,0,360,0,0,0);
    ///nose
    line(36.51,38.6,36.51,38.0,0,0,0);
    line(36.51,38.0,36.6,38.0,0,0,0);
    ///mouth
    line(36.2,37.2,36.4,37.0,0,0,0);
    line(36.4,37.0,36.6,37.0,0,0,0);
    line(36.6,37.0,36.8,37.2,0,0,0);

    ///arm
    quad(34,36,35,36,35,35.2,34.5,35.2,0.93,0.7,0.58);
    quad(34.4,36,34.7,36,34.7,30,34.4,30,0.93,0.7,0.58);

    quad(38,36,38.5,36,38.5,35.2,38,35.2,0.93,0.7,0.58);
    quad(38.3,36,38.6,36,38.6,30,38.3,30,0.93,0.7,0.58);
    glPopMatrix();
}


void sit1()
{


    quad(23,9,25,9,25,3,23,3,0.06,0.31,0.55);
    quad(23,3,25,3,25,1,23,1,0.74,0.82,0.93);
    quad(21,2.8,23,2.8,23,1,21,1,0.74,0.82,0.93);
    quad(21,1,22,1,22,-5,21,-5,0.74,0.82,0.93);
    quad(20.5,-5,22,-5,22,-6,20.5,-6,0.11,0.11,0.11);
    quad(20,7.9,24,8.9,24,8.1,20,7,0.93,0.7,0.58);
    glPushMatrix();
    {
        glScalef(.5,.5,0); //for resizing head
        glTranslatef(13.8,-2,0);
        glPushMatrix();
        {

            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize

            glPushMatrix();
            glScalef(1,1.3,0);
            circle(34.30,19.8,2.5,.0,360.0,0.98,0.76,0.58);//backside face
            glPopMatrix();

            quad(30,30,37,30,37,33.7,30,33.7,.0,.0,.0);//upper hair
            quad(35.6,30,35.6,22,36.6,22,37,34,.0,.0,.0);//lower hair
            circle(30.4,31.5,1,0.0,360.0,.0,0.0,0.0);//front side upper hair
            quad(30.4,30,35,30.0,35,22,30.4,22,0.98,0.76,0.58);//face
            circle(32.70,23.0,2.3,.0,360.0,0.98,0.76,0.58);//lower face
            triangle(30.4,27,30.4,25,29.8,25,0.98,0.76,0.58);//nose
            triangle(30.4,23.5,30.4,22.5,31.2,23,0.0,0.0,0.0);//mouth//colour will be background
            circle(31.1,26.6,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(31.1,26.9,.2,0.0,360.0,0.0,0.0,0.0);//retina
        }
        glPopMatrix();
     }
    glPopMatrix();

}


void sit2()
{
      glPushMatrix();

            glTranslatef(31.5,6.5,0);
            glScalef(.7,.7,0);
             glTranslatef(fix,0,0);
             quad(6,0,8,6,5.5,7.5,3.3,4,1,1,1);
             quad(6,2,8,6,7.5,2.2,6,0,0,1,0);
    glPopMatrix();

    glPushMatrix();
    {
        glTranslatef(fix,0,0);
          glScalef(.5,.5,0); //for resizing whole body
         glTranslatef(30.8,-.5,0);
        glPushMatrix();
        {
            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize

            glPushMatrix();
            glScalef(1,1.3,0);
            circle(34.30,19.8,2.5,.0,360.0,0.98,0.76,0.58);//backside face
            glPopMatrix();

            quad(30,30,37,30,37,33.7,30,33.7,.0,.0,.0);//upper hair
            circle(36.4,31.5,1.3,0.0,360.0,.0,0.0,0.0);//front side upper hair

            quad(34.4,30,35,30.0,35,22,34.4,22,0.98,0.76,0.58);//face

            circle(33.70,23.0,3.3,.0,360.0,0.98,0.76,0.58);//lower face
           quad(30,30,33,30,30.8,20,30,20,.0,.0,.0);//lower hair

            triangle(34.4,27,34.4,24,38,23,0.98,0.76,0.58);//nose
            circle(35.9,26.,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(36,25.9,.25,0.0,360.0,0.0,0.0,0.0);//retina



        }
        glPopMatrix();
     }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(fix,0,0);
    circle(33.3,11.7,0.13,-90,90,1,1,1);
    line(33.3,10.5,33.5,10.4,0,0,0);
    quad(31.5,9,33.5,9,33.5,3,31.5,3,1,1,.5);
    quad(31.5,3,33.5,3,33.5,1,31.5,1,0,0,1);
    quad(33.5,2.8,35.5,2.8,35.5,1,33.5,1,0,0,1);
    quad(34.5,1,35.5,1,35.5,-5,34.5,-5,0,0,1);
    quad(34.5,-5,36,-5,36,-6,34.5,-6,0.11,0.11,0.11);
    quad(32.35,10,32.65,10,32.65,9,32.35,9,0.98,0.76,0.58);
    quad(32.5,8.9,36.5,7.9,36.4,7,32.3,8.1,0.93,0.7,0.58);
    glPopMatrix();

}
void girl_Side_view();
void background()
{



    line(0,0,60,0,0,0,0);
    line(30,-15,30,60,0,0,0);

   ///wall
    quad(0,60,70,60,70,25,0,25,1,0.98,0.98);

    ///wall border 1
    quad(0,60,70,60,70,59,0,59,0.8,0.78,0.78);

    ///wall border 2
    quad(0,24,70,24,70,25,0,25,0.8,0.78,0.78);

    ///window
    quad(24,28,42,28,42,27,24,27,0.8,0.78,0.78);
    quad(25,53,41,53,41,28,25,28,0.68,0.85,0.9);
    quad(24,55,42,55,42,53,24,53,1,0.84,0.0003);
    quad(25,53,26,53,26,28,25,28,0.27,0.5,0.7);
    quad(40,53,41,53,41,28,40,28,0.27,0.5,0.7);
    quad(33,53,32.5,53,32.5,28,33,28,0.27,0.5,0.7);

    ///floor
    quad(0,24,70,24,70,-15,0,-15,0.5,0.27,0.07);

    librayman();
       ///computer
    glPushMatrix();
    glScalef(.8,.8,1);
    glTranslatef(2,6.5,0);
    quad(39,37,43,37,43,32,39,32,0.41,0.41,0.41);
    quad(40.5,34,41.5,34,41.5,30,40.5,30,0.5,0.55,0.5);
    quad(40,30.5,42,30.5,42,30,40,30,0.41,0.41,0.41);
    glPopMatrix();

    ///bookshelf 1
    quad(2,55,22,55,21.5,53,2.5,53,0.8,0.4,0.12);
    quad(3,53,21,53,21,25,3,25,0.63,0.32,0.18);
    quad(2.5,53,3,53,3,21,2.5,21,0.8,0.52,0.25);
    quad(21,53,21.5,53,21.5,21,21,21,0.8,0.52,0.25);
    quad(3,47,21,47,21,46,3,46,0.8,0.52,0.25);
    quad(3,39.5,21,39.5,21,38.5,3,38.5,0.8,0.52,0.25);
    quad(3,32,21,32,21,31,3,31,0.8,0.52,0.25);
    quad(3,25,21,25,21,21,3,21,0.8,0.4,0.12);

    //bookshelf 2

    quad(44.5,55,59.5,55,59,53,45,53,0.8,0.4,0.12);
    quad(45.5,53,58.5,53,58.5,25,45.5,25,0.63,0.32,0.18);
    quad(45,53,45.5,53,45.5,21,45,21,0.8,0.52,0.25);
    quad(58.5,53,59,53,59,21,58.5,21,0.8,0.52,0.25);
    quad(45.5,47,58.5,47,58.5,46,45.5,46,0.8,0.52,0.25);
    quad(45.5,39.5,58.5,39.5,58.5,38.5,45.5,38.5,0.8,0.52,0.25);
    quad(45.5,32,58.5,32,58.5,31,45.5,31,0.8,0.52,0.25);
    quad(45.5,25,58.5,25,58.5,21,45.5,21,0.8,0.4,0.12);


    ///books of shelf 1


    double xinc=0.6;
    double yinc=4;
    double x=3;
    double y=47;
    double rr,gg,bb;

    for(int i=1;i<=120;i++)
    {
        rr=(arr[i])/100.0;
        gg=(arr[i+7])/100.0;
        bb=(arr[i+15])/100.0;
        quad(x,y+yinc,x+xinc,y+yinc,x+xinc,y,x,y,rr,gg,bb);
        x+=xinc;
        if(i%30==0)
        {
            y-=7.5;
            x=3;
        }
    }

    ///books of shelf 2

    x=45.5;
    y=47;
    xinc=0.65;
    yinc=4;
    for(int i=1;i<=80;i++)
    {
        rr=(arr[i])/100.0;
        gg=(arr[i+7])/100.0;
        bb=(arr[i+15])/100.0;
        quad(x,y+yinc,x+xinc,y+yinc,x+xinc,y,x,y,rr,gg,bb);
        x+=xinc;
        if(i%20==0)
        {
            y-=7.5;
            x=45.5;
        }
    }

    ///table 1
    quad(30,30,44,30,44,29,30,29,0.85,0.65,0.13);
    quad(31,29,43,29,43,20,31,20,0.72,0.5,0.04);

    girl_Side_view();



    ///table 2
    quad(7,7,21,7,21,5,7,5,0.85,0.65,0.13);
    quad(8,5,20,5,20,-9,8,-9,0.72,0.5,0.04);

    ///table 3
    quad(35,7,55,7,55,5,35,5,0.85,0.65,0.13);
    quad(36,5,54,5,54,-9,36,-9,0.72,0.5,0.04);

    ///chair 1
    quad(2,8,2.5,8,2.5,-7,2,-7,0.85,0.65,0.13);
    quad(6,0,6.5,0,6.5,-7,6,-7,0.85,0.65,0.13);
    quad(2,0,6.5,0,6.5,-1,2,-1,0.85,0.65,0.13);
    quad(2,-4,6.5,-4,6.5,-6,2,-6,0.85,0.65,0.13);

    ///chair 2
    quad(12,3,12.5,3,12.5,-12,12,-12,0.85,0.65,0.13);
    quad(16,3,16.5,3,16.5,-12,16,-12,0.85,0.65,0.13);
    quad(12,3.5,16.5,3.5,16.5,-5,12,-5,0.85,0.65,0.13);
    quad(12,-8,16.5,-8,16.5,-10,12,-10,0.85,0.65,0.13);

    ///chair 3
    quad(26,9,26.5,9,26.5,-6,26,-6,0.85,0.65,0.13);
    quad(22,1,22.5,1,22.5,-6,22,-6,0.85,0.65,0.13);
    quad(22,1,26.5,1,26.5,0,22,0,0.85,0.65,0.13);
    quad(22,-3,26.5,-3,26.5,-5,22,-5,0.85,0.65,0.13);


    ///chair 5
    quad(38,3,38.5,3,38.5,-12,38,-12,0.85,0.65,0.13);
    quad(42,3,42.5,3,42.5,-12,42,-12,0.85,0.65,0.13);
    quad(38,3.5,42.5,3.5,42.5,-5,38,-5,0.85,0.65,0.13);
    quad(38,-8,42.5,-8,42.5,-10,38,-10,0.85,0.65,0.13);

    ///chair 6
    quad(46,3,46.5,3,46.5,-12,46,-12,0.85,0.65,0.13);
    quad(50,3,50.5,3,50.5,-12,50,-12,0.85,0.65,0.13);
    quad(46,3.5,50.5,3.5,50.5,-5,46,-5,0.85,0.65,0.13);
    quad(46,-8,50.5,-8,50.5,-10,46,-10,0.85,0.65,0.13);

    ///chair 7
    quad(59,8,59.5,8,59.5,-7,59,-7,0.85,0.65,0.13);
    quad(55,0,55.5,0,55.5,-7,55,-7,0.85,0.65,0.13);
    quad(55,0,59.5,0,59.5,-1,55,-1,0.85,0.65,0.13);
    quad(55,-4,59.5,-4,59.5,-6,55,-6,0.85,0.65,0.13);


    ///table 2 book
    quad(10,8,13,8,13,7,10,7,0.0003,0.0003,0.5);
    quad(10,9,13,9,13,8,10,8,0.8,0.36,0.36);
    glPushMatrix();
    glTranslatef(2,0,0);
    quad(16,10,19,10,19,9,16,9,1,0.84,0.0003);
    quad(16,9,19,9,19,8,16,8,0.8,0.36,0.36);
    quad(16,8,19,8,19,7,16,7,0.0003,0.0003,0.5);
    glPopMatrix();
    ///table 3 book
     glPushMatrix();
     glTranslatef(3,0,0);
    quad(46,8,48.5,8,48.5,7,46,7,0.54,0.17,0.89);
    quad(46,9,48.5,9,48.5,8,46,8,0.7,0.13,0.13);
    glPopMatrix();

}


void girl_Side_view()
{

    glPushMatrix();
    {
        glScalef(.4,.4,0); //for resizing whole body
        glTranslatef(90,30,0);
        glTranslatef(girl,0,0);
        glPushMatrix();
        {
            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize
            quad(30,30,35,30,35,35.7,30,35.7,.0,.0,.0);//upper hair
            quad(35,35.9,35,12,37.5,12,37.5,34,.0,.0,.0);//lower hair
            triangle(35,12,37.5,12,36.25,8 ,.0,.0,.0);//lower cone hair
            circle(30.4,33.0,1.5,0.0,360.0,.0,0.0,0.0);//front side upper hair
            circle(35.85,32.7,1.8,0.0,360.0,.0,0.0,0.0);//back side upper hair
            quad(30.4,30,35,30.0,35,22,30.4,22,0.98,0.76,0.58);//face
            circle(32.70,23.0,2.3,.0,360.0,0.98,0.76,0.58);//lower face
            triangle(30.4,27,30.4,25,29.8,25,0.98,0.76,0.58);//nose
            triangle(30.4,23.5,30.4,22.5,31.2,23,1.0,0.0,0.0);//mouth//colour will be background
            circle(31.1,26.6,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(31.1,26.9,.2,0.0,360.0,0.0,0.0,0.0);//retina
        }
        glPopMatrix();
        quad(33.90,22,33.90,16,34.8,16,34.8,22,0.98,0.76,0.58); //neck
        circle(33.0,14.5,1.1,0.0,360.0,0.0,1.0,1);//chest
        quad(32.20,18,35.0,18,35.0,6,32.80,6,0.0,1.0,1); //dress
        quad(35.0,16,35.0,14,32.0,11,32,9,0.0,1.0,1); //first handpart
        quad(31.0,14,31.0,12,32.0,11,32,9,0.98,0.76,0.58); //second handpart
        quad(31.0,11.8,31.0,15.8,31.3,15.8,31.3,11.8, 0.8,0.5,0.1); //handbook1
        quad(31.3,15.8,31.3,11.8,31.6,11.8,31.6,15.8, 0.29,.7,.4); //handbook2
        quad(31.6,15.8,31.6,11.8,31.9,11.8,31.9,15.8, 1.8,0.7,0.4); //handbook2
        triangle(33.80,18,32.20,18,32.30,15.8,0.5,0.27,0.07);//colour will be background
        quad(35.0,6,32.80,6,32.80,5.2,35.0,5.2,0.0,0.0,0); //belt
        quad(35.0,5.2,32.75,5.2,33.20,-14,34.00,-14,0.0,0.0,1); //pant
        quad(32.80,-13,34.10,-13,34.30,-14,31.20,-14,  0.0,0.0,0); //shoe
        circle(34.1,3.0,1.3,0.0,360.0,0.0,.0,1);// butt
    }
    glPopMatrix();
    if(girl<=-130.0) girl=30;
    girl-=.5;

}

void boysideview1()
{

    glPushMatrix();
    {
        glScalef(.4,.4,0); //for resizing whole body
        glTranslatef(0,40,0);
        glTranslatef(boysr,0,0);
        glPushMatrix();
        {

            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize

            glPushMatrix();
            glScalef(1,1.3,0);
            circle(34.30,19.8,2.5,.0,360.0,0.98,0.76,0.58);//backside face
            glPopMatrix();

            quad(30,30,37,30,37,33.7,30,33.7,.0,.0,.0);//upper hair
            quad(35.6,30,35.6,22,36.6,22,37,34,.0,.0,.0);//lower hair
            circle(30.4,31.5,1,0.0,360.0,.0,0.0,0.0);//front side upper hair
            quad(30.4,30,35,30.0,35,22,30.4,22,0.98,0.76,0.58);//face
            circle(32.70,23.0,2.3,.0,360.0,0.98,0.76,0.58);//lower face
            triangle(30.4,27,30.4,25,29.8,25,0.98,0.76,0.58);//nose
            triangle(30.4,23.5,30.4,22.5,31.2,23,0.0,0.0,0.0);//mouth//colour will be background
            circle(31.1,26.6,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(31.1,26.9,.2,0.0,360.0,0.0,0.0,0.0);//retina
        }
        glPopMatrix();
        quad(33.90,22,33.90,16,34.8,16,34.8,22,0.98,0.76,0.58); //neck
        quad(32.20,18,35.0,18,35.0,6,32.80,6,1,1,.5); //dress
        quad(35.0,16,35.0,14,32.0,11,32,9,1,1,.5); //first handpart
        quad(31.0,14,31.0,12,32.0,11,32,9,0.98,0.76,0.58); //second handpart
        quad(31.0,11.8,31.0,15.8,31.3,15.8,31.3,11.8, 0.8,0.5,0.1); //handbook1
        quad(31.3,15.8,31.3,11.8,31.6,11.8,31.6,15.8, 0.29,.7,.4); //handbook2
        quad(31.6,15.8,31.6,11.8,31.9,11.8,31.9,15.8, 1.8,0.7,0.4); //handbook2
        quad(35.0,6,32.80,6,32.80,5.2,35.0,5.2,0.0,0.0,0); //belt
        quad(35.0,5.2,32.75,5.2,33.20,-12,34.00,-12,0.0,0.0,1); //pant
        quad(32.80,-11,34.10,-11,34.30,-12,31.20,-12,  0.0,0.0,0); //shoe
     }
    glPopMatrix();
    if(boysr<=-40)
    {
        boysr=120;
    }
    boysr-=.5;
}

void boysideview()
{
    glPushMatrix();
    {
        glScalef(.4,.4,0); //for resizing whole body
        glTranslatef(0,40,0);
        glTranslatef(boys,0,0);
        glPushMatrix();
        {

            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize

            glPushMatrix();
            glScalef(1,1.3,0);
            circle(34.30,19.8,2.5,.0,360.0,0.98,0.76,0.58);//backside face
            glPopMatrix();

            quad(30,30,37,30,37,33.7,30,33.7,.0,.0,.0);//upper hair
            quad(35.6,30,35.6,22,36.6,22,37,34,.0,.0,.0);//lower hair
            circle(30.4,31.5,1,0.0,360.0,.0,0.0,0.0);//front side upper hair
            quad(30.4,30,35,30.0,35,22,30.4,22,0.98,0.76,0.58);//face
            circle(32.70,23.0,2.3,.0,360.0,0.98,0.76,0.58);//lower face
            triangle(30.4,27,30.4,25,29.8,25,0.98,0.76,0.58);//nose
            triangle(30.4,23.5,30.4,22.5,31.2,23,0.0,0.0,0.0);//mouth//colour will be background
            circle(31.1,26.6,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(31.1,26.9,.2,0.0,360.0,0.0,0.0,0.0);//retina
        }
        glPopMatrix();
        quad(33.90,22,33.90,16,34.8,16,34.8,22,0.98,0.76,0.58); //neck
        quad(32.20,18,35.0,18,35.0,6,32.80,6,1,1,.5); //dress
        quad(35.0,16,35.0,14,32.0,11,32,9,1,1,.5); //first handpart
        quad(31.0,14,31.0,12,32.0,11,32,9,0.98,0.76,0.58); //second handpart
        quad(31.0,11.8,31.0,15.8,31.3,15.8,31.3,11.8, 0.8,0.5,0.1); //handbook1
        quad(31.3,15.8,31.3,11.8,31.6,11.8,31.6,15.8, 0.29,.7,.4); //handbook2
        quad(31.6,15.8,31.6,11.8,31.9,11.8,31.9,15.8, 1.8,0.7,0.4); //handbook2
        quad(35.0,6,32.80,6,32.80,5.2,35.0,5.2,0.0,0.0,0); //belt
        quad(35.0,5.2,32.75,5.2,33.20,-12,34.00,-12,0.0,0.0,1); //pant
        quad(32.80,-11,34.10,-11,34.30,-12,31.20,-12,  0.0,0.0,0); //shoe
     }
    glPopMatrix();
    if(boys<=48.0)
    {
        boys=480;
    }
    boys-=.5;

}
void boyfrontview()
{
    glPushMatrix();
    glTranslatef(0,boyf,0);
    glTranslatef(30,15,0);
    glScalef(.14,.14,0);
    glTranslatef(20,80,0);
    glScalef(.75,1,0);
    glPushMatrix();
    glScalef(.8,.8,0);
    glTranslatef(0,-7,0);
    circle(0,-6,10.8,0,360,0.98,0.76,0.58);//face
    quad(-10.8,-7,10.8,-7,10.8,-1,-10.8,-1,0.98,0.76,0.58);//face
    quad(-10.5,-4,-11,-4,-11,5,11,4,0,0,0);//lefthair
    quad(3.5,5,10.5,-4,11,-4,11,5,0,0,0);//righthair
    quad(-11,8,-11,3,11,3,11,8,0,0,0);//uphair
    quad(-7,8,7,8,7.7,12.2,-7.7,12.2,0,0,0);//midhair
    circle(-8,7,3,0,360,0,0,0);//lefthair
    circle(8,7,3,0,360,0,0,0);//righthair
    quad(-2,-16,-2,-17,3,-17,3,-16,.9,0.6,0.5);//mouth
    glPushMatrix();
    glScalef(1,.5,0);
    circle(5.5,-13,1.9,0,360,1,1,1);//eye
    circle(-5.5,-13,1.9,0,360,1,1,1);//eye
    circle(5.5,-13,.9,0,360,0,0,0);//retina
    circle(-5.5,-13,.9,0,360,0,0,0);//retina
    glPopMatrix();
    triangle(0,-8,0,-15,2,-15,.9,0.6,0.5);//nose
    triangle(.5,-8,.5,-14,4,-14,.98,.76,0.58);//nose
    glPopMatrix();
    glPushMatrix();
    glScalef(.9,1,0);
    quad(-2,-24,2,-24,2,-38.5,-2,-38.5,.98,.76,0.58);//neck
    quad(-12,-27,12,-27,12,-64,-12,-64,1,1,.5);//body
    triangle(12,-27,12,-36,18,-34,1,1,.5);//rightshoulder
    triangle(-12,-27,-12,-36,-18,-34,1,1,.5);//leftshoulder
    quad(-12,-36,-18,-34,-18,-42,-13,-42,1,1,.5);//leftshoulder
    quad(12,-36,18,-34,18,-42,13,-42,1,1,.5);//rightshoulder
    quad( 14,-42,17,-42,17,-54,14,-54,.98,.76,0.58);//righthand
    quad( -14,-42,-17,-42,-17,-54,-14,-54,.98,.76,0.58);//lefthand
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//belowhand
    quad(-8,-44,8,-44,8,-60,-8,-60,.8,.5,0.8);//book
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//book hand
    quad(12,-64,-12,-64,-12,-66,12,-66,0,0,0);//belt
    quad(-12,-66,12,-66,12,-76,-12,-76,0,0,1);//thai
    quad(12,-76,12,-105,4,-105,0,-76,0,0,1);//rightthai
    quad(-12,-76,-12,-105,-4,-105,0,-76,0,0,1);//leftthai
    quad(-14,-105,-4,-105,-4,-110,-14,-110,0,0,0);//leftshow
    quad(14,-105,4,-105,4,-110,14,-110,0,0,0);//rightshow
    circle(-14,-107.5,1.4,0,360,0,0,0);//leftshow
    circle(14,-107.5,1.4,0,360,0,0,0);//rightshow
    glPopMatrix();
    glPopMatrix();

        if(boyf==735)
        {
            boyf=8;

        }
        else if(fix==0)
        {
            boyf=-100;
        }
        else if(boyf>=-15)
            boyf-=.5;
   // cout<<boyf<<endl;
}

void boybackview()
{

    glPushMatrix();
    glTranslatef(0,boyb,0);
    glTranslatef(30,15,0);
    glScalef(.14,.14,0);
    glTranslatef(20,80,0);
    glScalef(.75,1,0);
    glPushMatrix();
    glScalef(.8,.8,0);
    glTranslatef(0,-7,0);
    circle(0,-6,10.8,0,360,0.98,0.76,0.58);//face
    quad(-10.8,-7,10.8,-7,10.8,-1,-10.8,-1,0.98,0.76,0.58);//face
    quad(-10.5,-4,-11,-4,-11,5,11,4,0,0,0);//lefthair
    quad(3.5,5,10.5,-4,11,-4,11,5,0,0,0);//righthair
    quad(-11,8,-11,3,11,3,11,8,0,0,0);//uphair
    quad(-7,8,7,8,7.7,12.2,-7.7,12.2,0,0,0);//midhair
    quad(8,-18,-8,-18,-10.5,4,10.5,4,0,0,0);
    circle(-8,7,3,0,360,0,0,0);//lefthair
    circle(8,7,3,0,360,0,0,0);//righthair
    glPopMatrix();
    glPushMatrix();
    glScalef(.9,1,0);
    quad(-2,-24,2,-24,2,-38.5,-2,-38.5,.98,.76,0.58);//neck
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//belowhand
    quad(-12,-27,12,-27,12,-64,-12,-64,1,1,.5);//body
    triangle(12,-27,12,-36,18,-34,1,1,.5);//rightshoulder
    triangle(-12,-27,-12,-36,-18,-34,1,1,.5);//leftshoulder
    quad(-12,-36,-18,-34,-18,-42,-13,-42,1,1,.5);//leftshoulder
    quad(12,-36,18,-34,18,-42,13,-42,1,1,.5);//rightshoulder
    quad( 14,-42,17,-42,17,-54,14,-54,.98,.76,0.58);//righthand
    quad( -14,-42,-17,-42,-17,-54,-14,-54,.98,.76,0.58);//lefthand
    quad(12,-64,-12,-64,-12,-66,12,-66,0,0,0);//belt
    quad(-12,-66,12,-66,12,-76,-12,-76,0,0,1);//thai
    quad(12,-76,12,-105,4,-105,0,-76,0,0,1);//rightthai
    quad(-12,-76,-12,-105,-4,-105,0,-76,0,0,1);//leftthai
    quad(-14,-105,-4,-105,-4,-110,-14,-110,0,0,0);//leftshow
    quad(14,-105,4,-105,4,-110,14,-110,0,0,0);//rightshow
    circle(-14,-107.5,1.4,0,360,0,0,0);//leftshow
    circle(14,-107.5,1.4,0,360,0,0,0);//rightshow
    glPopMatrix();
    glPopMatrix();
    if(boyb>=8.0 && boyb<100)
    {
        if(boyf!=8)
        boyb=8.0;
        else
        boyb=100;
    }
    else
    boyb+=.5;

}

void boysideviewdrop()
{

    glPushMatrix();
    {
        glScalef(.4,.4,0); //for resizing whole body
        glTranslatef(0,40,0);
        glTranslatef(boysd,0,0);
        glPushMatrix();
        {

            glScalef(.56,.56,0); //for reducing headsize
            glTranslatef(27.5,17,0); //for replacing headsize

            glPushMatrix();
            glScalef(1,1.3,0);
            circle(34.30,19.8,2.5,.0,360.0,0.98,0.76,0.58);//backside face
            glPopMatrix();

            quad(30,30,37,30,37,33.7,30,33.7,.0,.0,.0);//upper hair
            quad(35.6,30,35.6,22,36.6,22,37,34,.0,.0,.0);//lower hair
            circle(30.4,31.5,1,0.0,360.0,.0,0.0,0.0);//front side upper hair
            quad(30.4,30,35,30.0,35,22,30.4,22,0.98,0.76,0.58);//face
            circle(32.70,23.0,2.3,.0,360.0,0.98,0.76,0.58);//lower face
            triangle(30.4,27,30.4,25,29.8,25,0.98,0.76,0.58);//nose
            triangle(30.4,23.5,30.4,22.5,31.2,23,0.0,0.0,0.0);//mouth//colour will be background
            circle(31.1,26.6,.5,-90.0,90.0,1.0,1.0,1.0);//eye
            circle(31.1,26.9,.2,0.0,360.0,0.0,0.0,0.0);//retina
        }
        glPopMatrix();
        quad(33.90,22,33.90,16,34.8,16,34.8,22,0.98,0.76,0.58); //neck
        quad(32.20,18,35.0,18,35.0,6,32.80,6,1,1,.5); //dress
        quad(35.0,16,35.0,14,32.0,11,32,9,1,1,.5); //first handpart
        quad(31.0,14,31.0,12,32.0,11,32,9,0.98,0.76,0.58); //second handpart
        quad(31.0,11.8,31.0,15.8,31.3,15.8,31.3,11.8, 0.8,0.5,0.1); //handbook1
        quad(31.3,15.8,31.3,11.8,31.6,11.8,31.6,15.8, 0.29,.7,.4); //handbook2
        quad(31.6,15.8,31.6,11.8,31.9,11.8,31.9,15.8, 1.8,0.7,0.4); //handbook2
        quad(35.0,6,32.80,6,32.80,5.2,35.0,5.2,0.0,0.0,0); //belt
        quad(35.0,5.2,32.75,5.2,33.20,-12,34.00,-12,0.0,0.0,1); //pant
        quad(32.80,-11,34.10,-11,34.30,-12,31.20,-12,  0.0,0.0,0); //shoe
     }
    glPopMatrix();
    if(boysd<-30)
    {
        boysd=120;
    }
    boysd-=.5;
    //cout<<boysd<<endl;
}

void boybackviewdrop()
{

    glPushMatrix();
    glTranslatef(0,boybd,0);
    glTranslatef(30,15,0);
    glScalef(.14,.14,0);
    glTranslatef(20,80,0);
    glScalef(.75,1,0);
    glPushMatrix();
    glScalef(.8,.8,0);
    glTranslatef(0,-7,0);
    circle(0,-6,10.8,0,360,0.98,0.76,0.58);//face
    quad(-10.8,-7,10.8,-7,10.8,-1,-10.8,-1,0.98,0.76,0.58);//face
    quad(-10.5,-4,-11,-4,-11,5,11,4,0,0,0);//lefthair
    quad(3.5,5,10.5,-4,11,-4,11,5,0,0,0);//righthair
    quad(-11,8,-11,3,11,3,11,8,0,0,0);//uphair
    quad(-7,8,7,8,7.7,12.2,-7.7,12.2,0,0,0);//midhair
    quad(8,-18,-8,-18,-10.5,4,10.5,4,0,0,0);
    circle(-8,7,3,0,360,0,0,0);//lefthair
    circle(8,7,3,0,360,0,0,0);//righthair
    glPopMatrix();
    glPushMatrix();
    glScalef(.9,1,0);
    quad(-2,-24,2,-24,2,-38.5,-2,-38.5,.98,.76,0.58);//neck
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//belowhand
    quad(-12,-27,12,-27,12,-64,-12,-64,1,1,.5);//body
    triangle(12,-27,12,-36,18,-34,1,1,.5);//rightshoulder
    triangle(-12,-27,-12,-36,-18,-34,1,1,.5);//leftshoulder
    quad(-12,-36,-18,-34,-18,-42,-13,-42,1,1,.5);//leftshoulder
    quad(12,-36,18,-34,18,-42,13,-42,1,1,.5);//rightshoulder
    quad( 14,-42,17,-42,17,-54,14,-54,.98,.76,0.58);//righthand
    quad( -14,-42,-17,-42,-17,-54,-14,-54,.98,.76,0.58);//lefthand
    quad(12,-64,-12,-64,-12,-66,12,-66,0,0,0);//belt
    quad(-12,-66,12,-66,12,-76,-12,-76,0,0,1);//thai
    quad(12,-76,12,-105,4,-105,0,-76,0,0,1);//rightthai
    quad(-12,-76,-12,-105,-4,-105,0,-76,0,0,1);//leftthai
    quad(-14,-105,-4,-105,-4,-110,-14,-110,0,0,0);//leftshow
    quad(14,-105,4,-105,4,-110,14,-110,0,0,0);//rightshow
    circle(-14,-107.5,1.4,0,360,0,0,0);//leftshow
    circle(14,-107.5,1.4,0,360,0,0,0);//rightshow
    glPopMatrix();
    glPopMatrix();

    if(boybd==8)
    {
        boybd=8;
    }
    else
    boybd+=.5;
}



void boyfrontviewdrop()
{
    glPushMatrix();
    glTranslatef(0,boyfd,0);
    glTranslatef(30,15,0);
    glScalef(.14,.14,0);
    glTranslatef(20,80,0);
    glScalef(.75,1,0);
    glPushMatrix();
    glScalef(.8,.8,0);
    glTranslatef(0,-7,0);
    circle(0,-6,10.8,0,360,0.98,0.76,0.58);//face
    quad(-10.8,-7,10.8,-7,10.8,-1,-10.8,-1,0.98,0.76,0.58);//face
    quad(-10.5,-4,-11,-4,-11,5,11,4,0,0,0);//lefthair
    quad(3.5,5,10.5,-4,11,-4,11,5,0,0,0);//righthair
    quad(-11,8,-11,3,11,3,11,8,0,0,0);//uphair
    quad(-7,8,7,8,7.7,12.2,-7.7,12.2,0,0,0);//midhair
    circle(-8,7,3,0,360,0,0,0);//lefthair
    circle(8,7,3,0,360,0,0,0);//righthair
    quad(-2,-16,-2,-17,3,-17,3,-16,.9,0.6,0.5);//mouth
    glPushMatrix();
    glScalef(1,.5,0);
    circle(5.5,-13,1.9,0,360,1,1,1);//eye
    circle(-5.5,-13,1.9,0,360,1,1,1);//eye
    circle(5.5,-13,.9,0,360,0,0,0);//retina
    circle(-5.5,-13,.9,0,360,0,0,0);//retina
    glPopMatrix();
    triangle(0,-8,0,-15,2,-15,.9,0.6,0.5);//nose
    triangle(.5,-8,.5,-14,4,-14,.98,.76,0.58);//nose
    glPopMatrix();
    glPushMatrix();
    glScalef(.9,1,0);
    quad(-2,-24,2,-24,2,-38.5,-2,-38.5,.98,.76,0.58);//neck
    quad(-12,-27,12,-27,12,-64,-12,-64,1,1,.5);//body
    triangle(12,-27,12,-36,18,-34,1,1,.5);//rightshoulder
    triangle(-12,-27,-12,-36,-18,-34,1,1,.5);//leftshoulder
    quad(-12,-36,-18,-34,-18,-42,-13,-42,1,1,.5);//leftshoulder
    quad(12,-36,18,-34,18,-42,13,-42,1,1,.5);//rightshoulder
    quad( 14,-42,17,-42,17,-54,14,-54,.98,.76,0.58);//righthand
    quad( -14,-42,-17,-42,-17,-54,-14,-54,.98,.76,0.58);//lefthand
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//belowhand
    quad(-8,-52,8,-52,8,-55,-8,-55,.8,.5,0.8);//book
    quad(-8,-49,8,-49,8,-52,-8,-52,.8,.1,0.8);//book
    quad(-8,-45,8,-45,8,-49,-8,-49,.1,.5,0.8);//book
    quad(-17,-54,17,-54,17,-58,-17,-58,.98,.76,0.58);//book hand
    quad(12,-64,-12,-64,-12,-66,12,-66,0,0,0);//belt
    quad(-12,-66,12,-66,12,-76,-12,-76,0,0,1);//thai
    quad(12,-76,12,-105,4,-105,0,-76,0,0,1);//rightthai
    quad(-12,-76,-12,-105,-4,-105,0,-76,0,0,1);//leftthai
    quad(-14,-105,-4,-105,-4,-110,-14,-110,0,0,0);//leftshow
    quad(14,-105,4,-105,4,-110,14,-110,0,0,0);//rightshow
    circle(-14,-107.5,1.4,0,360,0,0,0);//leftshow
    circle(14,-107.5,1.4,0,360,0,0,0);//rightshow
    glPopMatrix();
    glPopMatrix();

    if(boyfd==.5)
    {
        boyfd=.5;
    }
    else
    boyfd-=.5;

}

void pick()
{
    glClear(GL_COLOR_BUFFER_BIT);
    cnt++;

    background();
    boysideview();
    boyfrontview();
    boybackview();
    sit1();
    sit2();
    //cout<<cnt<<endl;
    if(cnt==185)
    {
        fix=0;
    }

    if(boys==48)
    {
        boyb=1;
    }
    ///chair 4
    quad(30,9,30.5,9,30.5,-6,30,-6,0.85,0.65,0.13);
    quad(34,1,34.5,1,34.5,-6,34,-6,0.85,0.65,0.13);
    quad(30,1,34,1,34,0,30,0,0.85,0.65,0.13);
    quad(30,-3,34.5,-3,34.5,-5,30,-5,0.85,0.65,0.13);
     glutSwapBuffers();
    glFlush();
}


void drop()
{
    background();
    cnt+=.01;

   boybackviewdrop();

    if(cnt>=1.58)
        boybd=1000;
    if(cnt>=1.58)
        boyfrontviewdrop();
    if(cnt>=1.9)
        boyfd=1000;
    if(cnt>=1.9)
        boysideviewdrop();
        sit1();
    ///chair 4
    quad(30,9,30.5,9,30.5,-6,30,-6,0.85,0.65,0.13);
    quad(34,1,34.5,1,34.5,-6,34,-6,0.85,0.65,0.13);
    quad(30,1,34,1,34,0,30,0,0.85,0.65,0.13);
    quad(30,-3,34.5,-3,34.5,-5,30,-5,0.85,0.65,0.13);
    glutSwapBuffers();
    glFlush();
}
void random()
{
    glClear(GL_COLOR_BUFFER_BIT);

    background();
    boysideview1();
    sit1();

    ///chair 4
    quad(30,9,30.5,9,30.5,-6,30,-6,0.85,0.65,0.13);
    quad(34,1,34.5,1,34.5,-6,34,-6,0.85,0.65,0.13);
    quad(30,1,34,1,34,0,30,0,0.85,0.65,0.13);
    quad(30,-3,34.5,-3,34.5,-5,30,-5,0.85,0.65,0.13);
    glutSwapBuffers();
    glFlush();

}

void spe_key(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_LEFT:

            if(!fix)
            {

            glutDisplayFunc(drop);
            glutIdleFunc(drop);
            glutPostRedisplay();
            boyb=100,boyf=800,boys=100,girl=40,boysr=30,boysd=48,boybd=-15,boyfd=8,cnt=1,fix=1000;
            }
            break;

		case GLUT_KEY_RIGHT:

            if(fix)
            {
			glutDisplayFunc(pick);
            glutIdleFunc(pick);
            glutPostRedisplay();
            boyb=100,boyf=800,boys=100,girl=40,boysr=30,boysd=48,boybd=-15,boyfd=8,cnt=1,fix=1000;
            }
            break;


        default:
			glutDisplayFunc(random);
            glutIdleFunc(random);
            boyb=100,boyf=800,boys=100,girl=40,boysr=30,boysd=48,boybd=-15,boyfd=8,cnt=1;
	}
}

void Initialize( )
{
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 60.0, -15.0, 60.0, -10.0, 10.0);
}

int main(int Argc, char** Argv)
{
    glutInit(&Argc, Argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Library");
    //random generate function
    srand(time(NULL));
    for(int i=1;i<1200;i++)
    {
        arr[i]=(rand()%100)*1.0;
    }
    Initialize();
    glutDisplayFunc(random);
    glutIdleFunc(random);
    glutSpecialFunc(spe_key);
    glutMainLoop();

    return 0;
}
