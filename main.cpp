#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

float windowWidth=1000;
float windowHeight=1000;
float x = 0;
bool aboat = false;
float y=0;
bool bcloud = false;
float z=0;
bool csun=false;
float c=0;
bool dcar=false;

void sky(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of sky
    glColor3ub(135,206,235);
    glVertex2f(-50.0,50.0);
    glVertex2f(-50.0,10.0);
    glVertex2f(50.0,10.0);
    glVertex2f(50.0,50.0);
    glEnd();
    glPopMatrix();
}

void sun()  // size of sun
{
    glPushMatrix();

    glColor3ub(255,140,0);
    glTranslatef(25+z,20,0);
    glScalef(1,.6,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

}

void cloud()  //size of cloud
{
    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-25+y,20,0);
    glScalef(0.5,0.5,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-22+y,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-28+y,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();
}

void river(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of river
    glColor3ub(30,144,255);
    glVertex2f(-50.0,0.0);
    glVertex2f(-50.0,10.0);
    glVertex2f(50.0,10.0);

    glVertex2f(50.0,0.0);
    glEnd();
    glPopMatrix();
}


void road(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of road for home
    glColor3ub(47,79,79);
    glVertex2f(0.0,-16.0);
    glVertex2f(0.0,-35.0);
    glVertex2f(4.0,-35.0);
    glVertex2f(4.0,-16.0);
    glEnd();
    glPopMatrix();

}
void road2(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of road for building
    glColor3ub(47,79,79);
    glVertex2f(0.0,-30.0);
    glVertex2f(0.0,-35.0);
    glVertex2f(4.0,-35.0);
    glVertex2f(4.0,-30.0);
    glEnd();
    glPopMatrix();

}
void car(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of car
    glColor3ub(255,0,0);
    glVertex2f(0.0-c,5.0);
    glVertex2f(0.0-c,2.0);
    glVertex2f(4.0-c,2.0);
    glVertex2f(4.0-c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of front car
    glColor3ub(255,0,0);
    glVertex2f(-2.0-c,3.0);
    glVertex2f(-2.0-c,2.0);
    glVertex2f(0.0-c,2.0);
    glVertex2f(0.0-c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of back car
    glColor3ub(255,0,0);
    glVertex2f(3.0-c,5.0);
    glVertex2f(3.0-c,2.0);
    glVertex2f(6.0-c,2.0);
    glVertex2f(6.0-c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of front glass
    glColor3ub(255,255,255);
    glVertex2f(-2.0-c,3.0);
    glVertex2f(-1.0-c,3.0);
    glColor3ub(0,0,0);
    glVertex2f(0.0-c,3.9);
    glVertex2f(0.0-c,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of side glass
    glColor3ub(255,255,255);
    glVertex2f(0.6-c,4.7);
    glVertex2f(0.6-c,3.5);
    glColor3ub(0,0,0);
    glVertex2f(5.6-c,3.5);
    glVertex2f(5.6-c,4.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of door 1
    glColor3ub(0,0,0);
    glVertex2f(0.6-c,3.5);
    glVertex2f(0.6-c,2.2);
    glVertex2f(1.6-c,2.2);
    glVertex2f(1.6-c,3.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of door 2
    glColor3ub(0,0,0);
    glVertex2f(2.6-c,3.5);
    glVertex2f(2.6-c,2.2);
    glVertex2f(3.6-c,2.2);
    glVertex2f(3.6-c,3.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();

    glColor3ub(0,0,0);
    glTranslatef(-.6-c,1.9,0);//size of wheel front
    glScalef(.15,.15,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(0,0,0);
    glTranslatef(4.6-c,1.9,0);//size of wheel back
    glScalef(.15,.15,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();


}

void car2(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of car
    glColor3ub(255,0,0);
    glVertex2f(-2.0+c,5.0);
    glVertex2f(-2.0+c,2.0);
    glVertex2f(3.0+c,2.0);
    glVertex2f(3.0+c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of front car
    glColor3ub(255,0,0);
    glVertex2f(6.0+c,3.0);
    glVertex2f(6.0+c,2.0);
    glVertex2f(4.0+c,2.0);
    glVertex2f(4.0+c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of back car
    glColor3ub(255,0,0);
    glVertex2f(3.0+c,5.0);
    glVertex2f(3.0+c,2.0);
    glVertex2f(6.0+c,2.0);
    glVertex2f(6.0+c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of front glass
    glColor3ub(255,255,255);
    glVertex2f(4.2+c,5.0);
    glVertex2f(4.2+c,4.0);
    glColor3ub(0,0,0);
    glVertex2f(6.0+c,4.0);
    glVertex2f(6.0+c,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of side glass
    glColor3ub(255,255,255);
    glVertex2f(-1.6+c,4.7);
    glVertex2f(-1.6+c,3.5);
    glColor3ub(0,0,0);
    glVertex2f(3.6+c,3.5);
    glVertex2f(3.6+c,4.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of door 1
    glColor3ub(0,0,0);
    glVertex2f(0.6+c,3.5);
    glVertex2f(0.6+c,2.2);
    glVertex2f(1.6+c,2.2);
    glVertex2f(1.6+c,3.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of door 2
    glColor3ub(0,0,0);
    glVertex2f(2.6+c,3.5);
    glVertex2f(2.6+c,2.2);
    glVertex2f(3.6+c,2.2);
    glVertex2f(3.6+c,3.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();

    glColor3ub(0,0,0);
    glTranslatef(-.6+c,1.9,0);//size of wheel front
    glScalef(.15,.15,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(0,0,0);
    glTranslatef(4.6+c,1.9,0);//size of wheel back
    glScalef(.15,.15,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();


}

void hill(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES); //size of hill
    glColor3ub(0,100,0);
    glVertex2f(5.0,14.0);
    glVertex2f(0.0,10.0);
    glColor3ub(173,255,47);
    glVertex2f(10.0,10.0);

    glEnd();
    glPopMatrix();
}
void riverside(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES); //size of riverside
    glColor3ub(30,144,255);
    glVertex2f(1.0,-1);
    glVertex2f(0.0,0.0);
    glVertex2f(5.0,0.0);

    glEnd();
    glPopMatrix();
}

void building(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of building
    glColor3ub(100,149,237);
    glVertex2f(20.0,-30.0);
    glVertex2f(20.0,-5.0);
    glColor3ub(176,224,230);
    glVertex2f(35.0,-5.0);
    glVertex2f(35.0,-30.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of building
    glColor3ub(100,149,237);
    glVertex2f(35.0,-30.0);
    glVertex2f(35.0,-5.0);
    glColor3ub(176,224,230);
    glVertex2f(37.0,-7.0);
    glVertex2f(37.0,-30.0);
    glEnd();
    glPopMatrix();
}
void door(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of door for building
    glColor3ub(255,0,255);
    glVertex2f(26.0,-26.0);
    glVertex2f(26.0,-30.0);
    glColor3ub(153,50,204);
    glVertex2f(29.0,-30.0);
    glVertex2f(29.0,-26.0);
    glEnd();
    glPopMatrix();
}
void window(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of window for building
    glColor3ub(255,165,0);
    glVertex2f(21.0,-8.0);
    glVertex2f(21.0,-10.0);
    glColor3ub(255,0,0);
    glVertex2f(25.0,-10.0);
    glVertex2f(25.0,-8.0);
    glEnd();
    glPopMatrix();
}

void home(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of home
    glColor3ub(255,215,0);
    glVertex2f(-47.0,-35.0);
    glVertex2f(-47.0,-45.0);
    glColor3ub(184,134,11);
    glVertex2f(-34.0,-45.0);
    glVertex2f(-34.0,-35.0);
    glEnd();
    glPopMatrix();


}
void roof(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of home
    glColor3ub(75,0,130);
    glVertex2f(-45.0,-30.0);
    glVertex2f(-48.0,-35.0);
    glColor3ub(153,50,204);
    glVertex2f(-33.0,-35.0);
    glVertex2f(-36.0,-30.0);
    glEnd();
    glPopMatrix();

}


void stairs(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of stairs
    glColor3ub(119,136,153);
    glVertex2f(-45.0,-45.0);
    glVertex2f(-45.0,-46.0);
    glVertex2f(-36.0,-46.0);
    glVertex2f(-36.0,-45.0);
    glEnd();
    glPopMatrix();
}
void hdoor(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of home door for home
    glColor3ub(128,0,128);
    glVertex2f(-42.0,-38.0);
    glVertex2f(-42.0,-45.0);
    glColor3ub(153,50,204);
    glVertex2f(-39.0,-45.0);
    glVertex2f(-39.0,-38.0);
    glEnd();
    glPopMatrix();
}
void hwindow(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of home window
    glColor3ub(255,0,0);
    glVertex2f(-46.0,-40.0);
    glVertex2f(-46.0,-38.0);
    glColor3ub(255,127,80);
    glVertex2f(-43.0,-38.0);
    glVertex2f(-43.0,-40.0);
    glEnd();
    glPopMatrix();
}
void tree(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of tree
    glColor3ub(139,69,19);
    glVertex2f(1.0,4.0);
    glVertex2f(1.0,0.0);
    glVertex2f(2.0,0.0);
    glVertex2f(2.0,4.0);
    glEnd();
    glPopMatrix();
}

void leaf(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES); //size of leaf
    glColor3ub(0,128,0);
    glVertex2f(-1.0,4.0);
    glColor3ub(173,255,47);
    glVertex2f(1.5,6.0);
    glVertex2f(4.0,4.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES); //size of upper leaf
    glColor3ub(0,128,0);
    glVertex2f(-1.0,5.0);
    glColor3ub(173,255,47);
    glVertex2f(1.5,7.0);
    glVertex2f(4.0,5.0);

    glEnd();
    glPopMatrix();
}

void ground(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of ground
    glColor3ub(0,128,0);
    glVertex2f(-50.0,0.0);
    glVertex2f(-50.0,-50.0);
    glVertex2f(50.0,-50.0);
    glVertex2f(50.0,0.0);
    glEnd();
    glPopMatrix();
}

void minar_stairs(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of minar 1st stairs
    glColor3ub(255,255,102);
    glVertex2f(0.0,-27.0);
    glVertex2f(0.0,-28.0);
    glVertex2f(15.0,-28.0);
    glVertex2f(15.0,-27.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of minar 2nd stairs
    glColor3ub(255,0,227);
    glVertex2f(1.0,-29.0);
    glVertex2f(1.0,-28.0);
    glVertex2f(14.0,-28.0);
    glVertex2f(14.0,-29.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of minar 3rd stairs
    glColor3ub(0,0,153);
    glVertex2f(2.0,-30.0);
    glVertex2f(2.0,-29.0);
    glVertex2f(13.0,-29.0);
    glVertex2f(13.0,-30.0);
    glEnd();
    glPopMatrix();
}



void minar_piller(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of minar piller
    glColor3f(1.0,1.0,1.0);
    glVertex2f(3.0,-27.0);
    glVertex2f(3.0,-20.0);
    glVertex2f(4.0,-20.0);
    glVertex2f(4.0,-27.0);
    glEnd();
    glPopMatrix();
}

void minar_circle()  // size of minar circle
{
    glPushMatrix();

    glColor3ub(255,0,0);
    glTranslatef(25,20,0);
    glScalef(1,.5,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

}
void road3(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of minar road
    glColor3ub(47,79,79);
    glVertex2f(6.0,-31.0);
    glVertex2f(6.0,-33.0);
    glVertex2f(25.5,-33.0);
    glVertex2f(25.5,-31.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of minar road up
    glColor3ub(47,79,79);
    glVertex2f(6.0,-33.0);
    glVertex2f(6.0,-30.0);
    glVertex2f(8.0,-30.0);
    glVertex2f(8.0,-33.0);
    glEnd();
    glPopMatrix();
}
void highway1(void)
{
    glPushMatrix();
    glBegin(GL_QUADS); //size of highway
    glColor3ub(47,79,79);
    glVertex2f(-50.0,-35.0);
    glVertex2f(-50.0,-40.0);
    glVertex2f(50.0,-40.0);
    glVertex2f(50.0,-35.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS); //size of highway marker
    glColor3ub(255,255,255);
    glVertex2f(-50.0,-37.4);
    glVertex2f(-50.0,-37.9);
    glVertex2f(50.0,-37.9);
    glVertex2f(50.0,-37.4);
    glEnd();
    glPopMatrix();

}

void ship1(void)
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(81, 4, 0); //boat bottom rect
    glVertex2f(-30.0+x,3.0);
    glVertex2f(-29.0+x,2.0);
    glVertex2f(-20.0+x,2.0);
    glColor3ub(176,224,230);
    glVertex2f(-19.0+x,3.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(244,164,96); //boat 2nd bottom rect
    glVertex2f(-32.0+x,4.5);
    glVertex2f(-30.0+x,3.0);
    glVertex2f(-19.0+x,3.0);
    glVertex2f(-17.0+x,4.5);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(176,196,222); // boat middle rect
    glVertex2f(-32.0+x,5.5);
    glVertex2f(-32.0+x,4.5);
    glVertex2f(-17.0+x,4.5);
    glVertex2f(-17.0+x,5.5);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128,0,128);//boat top rect
    glVertex2f(-31.0+x,7.0);
    glVertex2f(-31.0+x,5.5);
    glVertex2f(-17.0+x,5.5);
    glVertex2f(-18.5+x,7.0);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,69,0); // boat driver glass
    glVertex2f(-21.0+x,6.8);
    glVertex2f(-21.0+x,5.9);
    glColor3ub(238,232,170);
    glVertex2f(-17.4+x,5.9);
    glVertex2f(-18.4+x,6.8);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // left boat up piller
    glVertex2f(-30.0+x,9);
    glVertex2f(-30.0+x,7);
    glVertex2f(-29.0+x,7);
    glVertex2f(-29.0+x,9);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); // left boat up piller white part
    glVertex2f(-30.0+x,9.3);
    glVertex2f(-30.0+x,8.8);
    glVertex2f(-29.0+x,8.8);
    glVertex2f(-29.0+x,9.3);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // 2nd left boat up piller
    glVertex2f(-26.0+x,9);
    glVertex2f(-26.0+x,7);
    glVertex2f(-25.0+x,7);
    glVertex2f(-25.0+x,9);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); //2nd left boat up piller white part
    glVertex2f(-26.0+x,9.3);
    glVertex2f(-26.0+x,8.8);
    glVertex2f(-25.0+x,8.8);
    glVertex2f(-25.0+x,9.3);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // 3rd boat up piller
    glVertex2f(-22.0+x,9);
    glVertex2f(-22.0+x,7);
    glVertex2f(-21.0+x,7);
    glVertex2f(-21.0+x,9);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); //3rd boat up piller white part
    glVertex2f(-22.0+x,9.3);
    glVertex2f(-22.0+x,8.8);
    glVertex2f(-21.0+x,8.8);
    glVertex2f(-21.0+x,9.3);

    glEnd();
    glPopMatrix();
}

void ship2(void)
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); //boat bottom rect
    glVertex2f(30.0-x,9.0);
    glVertex2f(29.0-x,8.0);
    glVertex2f(20.0-x,8.0);
    glColor3ub(176,224,230);
    glVertex2f(19.0-x,9.0);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,160,122); //boat 2nd bottom rect
    glVertex2f(32.0-x,10.5);
    glVertex2f(30.0-x,9.0);
    glVertex2f(19.0-x,9.0);
    glVertex2f(17.0-x,10.5);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(205,92,92); // boat middle rect
    glVertex2f(32.0-x,11.5);
    glVertex2f(32.0-x,10.5);
    glVertex2f(17.0-x,10.5);
    glVertex2f(17.0-x,11.5);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128,0,128);//boat top rect
    glVertex2f(31.0-x,13.0);
    glVertex2f(31.0-x,11.5);
    glVertex2f(17.0-x,11.5);
    glVertex2f(18.5-x,13.0);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,69,0); // boat driver glass
    glVertex2f(21.0-x,12.8);
    glVertex2f(21.0-x,11.9);
    glColor3ub(238,232,170);
    glVertex2f(17.3-x,11.9);
    glVertex2f(18.3-x,12.8);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // left boat up piller
    glVertex2f(30.0-x,15.0);
    glVertex2f(30.0-x,13.0);
    glVertex2f(29.0-x,13.0);
    glVertex2f(29.0-x,15.0);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); // left boat up piller white part
    glVertex2f(30.0-x,15.3);
    glVertex2f(30.0-x,14.8);
    glVertex2f(29.0-x,14.8);
    glVertex2f(29.0-x,15.3);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // 2nd left boat up piller
    glVertex2f(26.0-x,15.0);
    glVertex2f(26.0-x,13.0);
    glVertex2f(25.0-x,13.0);
    glVertex2f(25.0-x,15.0);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); //2nd left boat up piller white part
    glVertex2f(26.0-x,15.3);
    glVertex2f(26.0-x,14.8);
    glVertex2f(25.0-x,14.8);
    glVertex2f(25.0-x,15.3);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0); // 3rd boat up piller
    glVertex2f(22.0-x,15.0);
    glVertex2f(22.0-x,13.0);
    glVertex2f(21.0-x,13.0);
    glVertex2f(21.0-x,15.0);

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); //3rd boat up piller white part
    glVertex2f(22.0-x,15.3);
    glVertex2f(22.0-x,14.8);
    glVertex2f(21.0-x,14.8);
    glVertex2f(21.0-x,15.3);

    glEnd();
    glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-50, 50, -50, 50);
    glColor3f(1.0,1.0,1.0);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0,windowWidth,windowHeight);

    sky();
    sun();
    cloud();
    ground();
    river();
    riverside();
    hill();
    highway1();
    ship1();
    ship2();
    glPushMatrix();
    glTranslatef(60,0,0);
    cloud();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,0,0);
    cloud();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,-4,0);
    cloud();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,-6,0);
    cloud();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(35,6,0);
    glScalef(.5,.5,1);
    ship2();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,0,0);
    cloud();
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-55,0,0);
    hill();
    glEnd();
    glPopMatrix();


    hill();
    glPushMatrix();
    glTranslatef(-51,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-45,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-34,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-28,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-22,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-13,0,0);
    hill();
    glEnd();
    glPopMatrix();

    hill();
    glPushMatrix();
    glTranslatef(-8,0,0);
    hill();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-51,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-47,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-42,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-37,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-31,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-28,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-25,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-20,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-16,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-13,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-9,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-5,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    riverside();
    glPushMatrix();
    glTranslatef(-3,0,0);
    riverside();
    glEnd();
    glPopMatrix();

    ship2();
    ship1();


    building();
    door();
    window();
    glPushMatrix();
    glTranslatef(0,-4,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(0,-8,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(0,-12,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(0,-16,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(9,0,0);
    window();
    glEnd();
    glPopMatrix();


    window();
    glPushMatrix();
    glTranslatef(9,-4,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(9,-8,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(9,-12,0);
    window();
    glEnd();
    glPopMatrix();

    window();
    glPushMatrix();
    glTranslatef(9,-16,0);
    window();
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(-35,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-33,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-48,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-50,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,-5,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(30,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(35,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40,-3,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(45,-4,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,30,0);
    home();
    roof();
    stairs();
    hdoor();
    hwindow();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(14,30,0);
    home();
    roof();
    stairs();
    hdoor();
    hwindow();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(22,30,0);
    hwindow();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8,30,0);
    hwindow();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-42,0,0);
    road();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28,0,0);
    road();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(25.5,0,0);
    road2();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-46,-26,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-46,-34,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-36,-22,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-36,-30,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-23,-22,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,-32,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-16,-34,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-5,-34,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(37,-34,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(44,-34,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7.5,-43,0);
    glScalef(.6,1,1);
    minar_circle();
    glEnd();
    glPopMatrix();

    minar_stairs();

    minar_piller();
    glPushMatrix();
    glTranslatef(2,6.6,0);
    glScalef(1,1.25,1);
    minar_piller();
    glEnd();
    glPopMatrix();

    minar_piller();
    glPushMatrix();
    glTranslatef(4,13.5,0);
    glScalef(1,1.5,1);
    minar_piller();
    glEnd();
    glPopMatrix();

    minar_piller();
    glPushMatrix();
    glTranslatef(6,6.6,0);
    glScalef(1,1.25,1);
    minar_piller();
    glEnd();
    glPopMatrix();

    minar_piller();
    glPushMatrix();
    glTranslatef(8,0,0);

    minar_piller();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2,-24,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4,-27,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(14,-24,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(16,-27,0);
    tree();
    leaf();
    glEnd();
    glPopMatrix();

    road3();

    glPushMatrix();
    glTranslatef(0,-7,0);
    highway1();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(20,-40,0);
    car();
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,-47,0);
    car2();
    glEnd();
    glPopMatrix();


    glFlush();
    glutSwapBuffers();

}

void key( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 'A':
        aboat = true;

        glutPostRedisplay();
        break;
    case 'a':
        aboat = false;
        glutPostRedisplay();
        break;

    case 'Z':
        bcloud = true;
        glutPostRedisplay();
        break;
    case 'z':
        bcloud = false;
        glutPostRedisplay();
        break;

    case 'Q':
        csun = true;
        glutPostRedisplay();
        break;
    case 'q':
        csun = false;
        glutPostRedisplay();
        break;

    case 'W':
        dcar = true;
        glutPostRedisplay();
        break;
    case 'w':
        dcar = false;
        glutPostRedisplay();
        break;
    }
}

void aniboat()
{
    if(aboat == true)
    {
        x += 0.005;
        if(x > 200)
            x = -60;
    }
    else if (aboat == false)
    {
        x = 1;

    }
}

void anicloud()
{
    if(bcloud == true)
    {
        y += 0.005;
        if(y > 100)
            y = -100;
    }
    else if (bcloud == false)
    {
        y = 1;

    }
}

void anisun()
{
    if(csun == true)
    {
        z += 0.003;
        if(z > 100)
            z = -100;
    }
    else if (csun == false)
    {
        z = 1;

    }
}

void anicar()
{
    if(dcar == true)
    {
        c += 0.010;
        if(c > 100)
            c = -100;
    }
    else if (dcar == false)
    {
        c = 1;

    }
}

void keyboard(void)
{
    aniboat();
    anicloud();
    anisun();
    anicar();
    glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Home");

    glutKeyboardFunc(key);
    glutIdleFunc(keyboard);




    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
