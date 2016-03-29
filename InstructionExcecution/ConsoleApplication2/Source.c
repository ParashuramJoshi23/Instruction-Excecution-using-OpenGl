
#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<windows.h>
#include<GL/glut.h>
float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, p = 0, q = 0, s = 0.7, x = 0, y = 0, u = 0, v = 0, z = 0, ll = 10;
void display(void);
void menu(int);
void onebyte(void);
int k1 = 0;
void *currentfont;
void *fr;

void myinit()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glColor3f(0.0,0.0,1.0);
}
void setfont(void *f)
{
	currentfont = f;
}
void DrawTextXY(double x, double y, double z, double scale, char *string)
{

	char *c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++)
	{
		glutBitmapCharacter(currentfont, *c);
	}
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(5, +5);

	glVertex2f(-5, 10);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-5, -5);

	glVertex2f(5, -5);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	setfont(GLUT_BITMAP_TIMES_ROMAN_24);
	DrawTextXY(-0.5, 0.82, 0.0, 0.0015, "BASAVESHWAR ENGINEERING COLLEGE (AUTONOMOUS)");
	DrawTextXY(-0.2, 0.72, 0.0, 0.0015, "BAGALKOT-587102");
	
	DrawTextXY(-0.5, 0.52, 0.0, 0.0015, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
	glColor3f(0.10, 0.0, 1.0);
	DrawTextXY(-0.2, 0.32, 0.0, 0.0015, "MINI PROJECT ON");
	DrawTextXY(-0.35, 0.24, 0.0, 0.0015, "DEMONISTRATION OF AQUARIUM");
	glColor3f(0.75, 0.25, 0.0);
	DrawTextXY(-0.8, 0.04, 0.0, 0.0015, "");
	DrawTextXY(-0.8, -0.08, 0.0, 0.0015, "");
	DrawTextXY(-0.8, -0.18, 0.0, 0.0015, "");
	DrawTextXY(-0.8, -0.28, 0.0, 0.0015, "");
	glColor3f(0.25, 0.75, 0.0);
	DrawTextXY(0.2, 0.04, 0.0, 0.0015, "");
	DrawTextXY(0.2, -0.08, 0.0, 0.0015, "");
	glColor3f(0.95, 0.1, 0.0);
	DrawTextXY(0.2, -0.78, 0.0, 0.0015, " PRESS ENTER FOR DEMONSTRATION");
	glColor3f(0.5, 0.5, 0.0);
	glutSwapBuffers();
	glFlush();
}

void create_menu(void)
{
	glutCreateMenu(menu);
	glutAttachMenu(GLUT_LEFT_BUTTON);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutAddMenuEntry("1 byte instruction", 1);
	//glutAddMenuEntry("2 byte instruction", 2);
	glutAddMenuEntry("2 exit", 2);
}
void menu(int val)
{
	switch (val)
	{
	case 1:
		glutDisplayFunc(onebyte);
		break;
	case 2:
		break;
	case 3:exit(0);
		break;

	}

}


void onebyte()
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);


	glClear(GL_COLOR_BUFFER_BIT);//memory
	glColor3f(0.0, 0.0, 0.0);
	// glBegin(GL_LINE_LOOP);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.5);
	glVertex2i(20, 290);
	glVertex2i(60, 290);
	glVertex2i(60, 270);
	glVertex2i(20, 270);
	glEnd();

	//glBegin(GL_LINE_LOOP);
	glBegin(GL_POLYGON);
	glVertex2i(20, 270);
	glVertex2i(60, 270);
	glVertex2i(60, 250);
	glVertex2i(20, 250);
	glEnd();

	//glBegin(GL_LINE_LOOP);
	glBegin(GL_POLYGON);
	glVertex2i(20, 250);
	glVertex2i(20, 200);
	glVertex2i(60, 200);
	glVertex2i(60, 250);
	glEnd();

	int i;
	char texta[6] = { 'M', 'E', 'M', '0', 'R', 'Y' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(20, 310);
	for (i = 0; i<6; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, texta[i]);

	int u;
	char textgg1[33] = { 'F', 'O', 'R', 'M', 'A', 'T', ':', 'O', 'P', 'C', 'O', 'D', 'E', ' ', 'O', 'P', 'E', 'R', 'A', 'N', 'D', ' ', '1', ',', 'O', 'P', 'E', 'R', 'A', 'N', 'D', ' ', '2' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(40, 450);
	for (u = 0; u<33; u++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textgg1[u]);


	int l;
	char textd[14] = { 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', ' ', '1' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(22, 280);
	for (l = 0; l<14; l++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textd[l]);

	int m;
	char texte[14] = { 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', ' ', '2' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(22, 260);
	for (m = 0; m<14; m++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, texte[m]);

	glColor3f(0.0, 0.0, 0.0);//cpu
	//glBegin(GL_LINE_LOOP);
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.5, 0.5);
	glVertex2i(115, 390);
	glVertex2i(280, 390);
	glVertex2i(280, 50);
	glVertex2i(115, 50);
	glEnd();

	int j1;
	char textb1[13] = { 'E', 'X', ':', 'A', 'D', 'D', ' ', 'R', '2', ',', 'R', '3' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(125, 420);
	for (j1 = 0; j1<13; j1++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textb1[j1]);

	int j;
	char textb[3] = { 'C', 'P', 'U' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(125, 395);
	for (j = 0; j<3; j++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textb[j]);


	//glBegin(GL_LINE_LOOP);//MAR box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130, 320);
	glVertex2i(170, 320);
	glVertex2i(170, 300);
	glVertex2i(130, 300);
	glEnd();

	//glBegin(GL_LINE_LOOP);//CU box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200 - 5, 320);
	glVertex2i(240, 320);
	glVertex2i(240, 300);
	glVertex2i(200 - 5, 300);
	glEnd();

	int r;
	char texti[12] = { 'C', 'O', 'N', 'T', 'R', 'O', 'L', ' ', 'U', 'N', 'I', 'T' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(200, 310);
	for (r = 0; r<12; r++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, texti[r]);

	//glBegin(GL_LINE_LOOP);//PC box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130, 360);
	glVertex2i(170, 360);
	glVertex2i(170, 340);
	glVertex2i(130, 340);
	glEnd();

	int q;
	char texth[3] = { 'M', 'A', 'R' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 310);
	for (q = 0; q<3; q++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, texth[q]);

	glColor3f(0.0, 0.0, 0.0);
	int qm;
	char texthm[2] = { 'P', 'C' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 350);
	for (qm = 0; qm<3; qm++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, texthm[qm]);
	glRecti(130, 300, 170, 320);
	glEnd();

	//glBegin(GL_LINE_LOOP);//MDR box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130, 280);
	glVertex2i(170, 280);
	glVertex2i(170, 260);
	glVertex2i(130, 260);
	glEnd();

	int t;
	char textg[3] = { 'M', 'D', 'R' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 270);
	for (t = 0; t<3; t++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textg[t]);

	//glBegin(GL_LINE_LOOP);//IR box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130 - 8, 240);
	glVertex2i(170 + 8, 240);
	glVertex2i(170 + 8, 220);
	glVertex2i(130 - 8, 220);
	glEnd();

	int t1;
	char textg11[20] = { 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', ' ', 'R', 'E', 'G', 'I', 'S', 'T', 'E', 'R' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(125, 230);
	for (t1 = 0; t1<20; t1++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textg11[t1]);


	//glBegin(GL_LINE_LOOP);//executing box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(122, 200);
	glVertex2i(178, 200);
	glVertex2i(178, 110);
	glVertex2i(122, 110);
	glEnd();

	int s;
	char textj[3] = { 'A', 'L', 'U' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(130, 190);
	for (s = 0; s<3; s++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textj[s]);


	int lo = 20;
	//glBegin(GL_LINE_LOOP);//register box
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200 + lo, 110);
	glVertex2i(240 + lo, 110);
	glVertex2i(240 + lo, 200);
	glVertex2i(200 + lo, 200);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200 + lo, 133);
	glVertex2i(240 + lo, 133);
	glVertex2i(200 + lo, 155);
	glVertex2i(240 + lo, 155);
	glVertex2i(200 + lo, 177);
	glVertex2i(240 + lo, 177);
	glEnd();

	int k1;
	char textc1[4] = { 'R', '4', '=', '9' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(210 + 20, 115);
	for (k1 = 0; k1<4; k1++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc1[k1]);

	int k2;
	char textc3[4] = { 'R', '1', '=', '6' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(210 + 20, 190);
	for (k2 = 0; k2<4; k2++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc3[k2]);

	int k3;
	char textc2[4] = { 'R', '2', '=', '5' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(210 + 20, 165);
	for (k3 = 0; k3<4; k3++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc2[k3]);
	glFlush();

	int k4;
	char textc4[4] = { 'R', '3', '=', '8' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(210 + 20, 140);
	for (k4 = 0; k4<4; k4++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc4[k4]);

	glColor3f(1.0, 1.0, 1.0);//boxes inside executing box
	glRecti(135 + ll, 115, 125 + ll, 140);//+
	glFlush();

	glColor3f(1.0, 1.0, 1.0);
	glRecti(155 + ll, 115, 145 + ll, 140);//-
	glFlush();

	glColor3f(1.0, 1.0, 1.0);
	glRecti(135 + ll, 150, 125 + ll, 175);//*
	glFlush();

	glColor3f(1.0, 1.0, 1.0);// /
	glRecti(155 + ll, 150, 145 + ll, 175);
	glFlush();

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 127);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '+');
	glFlush();

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(160, 127);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '-');
	glFlush();

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 162);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '*');
	glFlush();

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(160, 162);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '/');
	glFlush();


	int n;
	char textf[8] = { 'F', 'E', 'T', 'C', 'H', 'I', 'N', 'G' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(75, 210);
	for (n = 0; n<8; n++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, textf[n]);

	int k;
	char textc[8] = { 'D', 'E', 'C', 'O', 'D', 'I', 'N', 'G' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(185, 185);
	for (k = 0; k<8; k++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc[k]);

	int k31;   //labeling above decoding lines
	char textc21[4] = { 'R', '3', '=', '8' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(195, 150);
	for (k31 = 0; k31<4; k31++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc21[k31]);

	int k32;
	char textc22[4] = { 'R', '2', '=', '5' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(195, 170);
	for (k32 = 0; k32<4; k32++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc22[k32]);
	glFlush();

	glBegin(GL_LINE_LOOP);//result box
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(130, 90);
	glVertex2i(170, 90);
	glVertex2i(170, 70);
	glVertex2i(130, 70);
	glEnd();



	/*CONNECTING LINES*/

	//CU TO PC
	glBegin(GL_LINES);
	glVertex2i(220, 320);
	glVertex2i(220, 320 + 5);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 320 + 10);
	glVertex2i(220, 320 + 15);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 320 + 20);
	glVertex2i(220, 320 + 22);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 320 + 25);
	glVertex2i(220, 320 + 30);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(250 - 30, 350);
	glVertex2i(250 - 35, 350);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(250 - 40, 350);
	glVertex2i(250 - 45, 350);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(250 - 50, 350);
	glVertex2i(250 - 55, 350);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(250 - 60, 350);
	glVertex2i(250 - 65, 350);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(250 - 70, 350);
	glVertex2i(250 - 72, 350);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(250 - 75, 350);
	glVertex2i(250 - 80, 350);
	glEnd();

	//CU TO MAR
	glBegin(GL_LINES);
	glVertex2i(170 + 20, 310);
	glVertex2i(170 + 25, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(170 + 10, 310);
	glVertex2i(170 + 15, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(170, 310);
	glVertex2i(170 + 5, 310);
	glEnd();
	glFlush();
	Sleep(700);



	//CU TO MDR
	glBegin(GL_LINES);
	glVertex2i(210, 300);
	glVertex2i(210, 300 - 5);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210, 300 - 10);
	glVertex2i(210, 300 - 15);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210, 300 - 20);
	glVertex2i(210, 300 - 25);
	glVertex2i(210, 300 - 30);
	glEnd();
	glFlush();
	Sleep(700);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(210, 270);
	glVertex2i(210 - 5, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210 - 10, 270);
	glVertex2i(210 - 15, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210 - 20, 270);
	glVertex2i(210 - 25, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210 - 30, 270);
	glVertex2i(210 - 33, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(210 - 35, 270);
	glVertex2i(210 - 40, 270);
	glEnd();

	// CU TO IR BOX
	glBegin(GL_LINES);
	glVertex2i(220, 300);
	glVertex2i(220, 300 - 5);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 10);
	glVertex2i(220, 300 - 15);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 20);
	glVertex2i(220, 300 - 25);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 30);
	glVertex2i(220, 300 - 35);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 40);
	glVertex2i(220, 300 - 45);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 50);
	glVertex2i(220, 300 - 55);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 60);
	glVertex2i(220, 300 - 65);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220, 300 - 68);
	glVertex2i(220, 300 - 70);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(220, 230);
	glVertex2i(220 - 5, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 10, 230);
	glVertex2i(220 - 15, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 20, 230);
	glVertex2i(220 - 25, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 30, 230);
	glVertex2i(220 - 35, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 38, 230);
	glVertex2i(220 - 40, 230);
	glEnd();

	//CU TO REGISTERS
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 95);
	glVertex2i(235, 200 + 100);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 85);
	glVertex2i(235, 200 + 90);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 70);
	glVertex2i(235, 200 + 80);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 60);
	glVertex2i(235, 200 + 65);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 50);
	glVertex2i(235, 200 + 55);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 40);
	glVertex2i(235, 200 + 45);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 30);
	glVertex2i(235, 200 + 35);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);
	glVertex2i(235, 200 + 20);
	glVertex2i(235, 200 + 25);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(235, 200 + 10);
	glVertex2i(235, 200 + 15);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);
	glVertex2i(235, 200);
	glVertex2i(235, 200 + 5);
	glEnd();
	glFlush();
	Sleep(700);
	//CU TO ALU
	glBegin(GL_LINES);
	glVertex2i(225, 300);
	glVertex2i(225, 300 - 5);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 10);
	glVertex2i(225, 300 - 15);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 20);
	glVertex2i(225, 300 - 25);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 30);
	glVertex2i(225, 300 - 35);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 40);
	glVertex2i(225, 300 - 45);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 50);
	glVertex2i(225, 300 - 55);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 60);
	glVertex2i(225, 300 - 62);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 65);
	glVertex2i(225, 300 - 70);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 75);
	glVertex2i(225, 300 - 80);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225, 300 - 85);
	glVertex2i(225, 300 - 90);
	glEnd();
	///////////////////////////////////////////////////



	glBegin(GL_LINES);
	glVertex2i(225, 210);
	glVertex2i(225 - 5, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225 - 10, 210);
	glVertex2i(225 - 15, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225 - 20, 210);
	glVertex2i(225 - 25, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225 - 30, 210);
	glVertex2i(225 - 35, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225 - 40, 210);
	glVertex2i(225 - 45, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(160, 200);
	glVertex2i(160, 200 + 5);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(160, 200 + 7);
	glVertex2i(160, 200 + 10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(225 - 50, 210);
	glVertex2i(225 - 55, 210);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(225 - 60, 210);
	glVertex2i(225 - 65, 210);
	glEnd();
	//PC TO INSTRUCTION 1
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 280);
	glVertex2i(80, 280);
	glVertex2i(60, 280);
	glEnd();
	glFlush();


	//PC TO MAR
	glBegin(GL_LINES);
	glVertex2i(150, 340);
	glVertex2i(150, 340 - 4);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 340 - 8);
	glVertex2i(150, 340 - 12);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 340 - 16);
	glVertex2i(150, 340 - 20);
	glEnd();
	glFlush();
	Sleep(700);


	// MAR TO MEMORY
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 310);
	glVertex2i(130 - 4, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 8, 310);
	glVertex2i(130 - 12, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 16, 310);
	glVertex2i(130 - 20, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 24, 310);
	glVertex2i(130 - 28, 310);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 32, 310);
	glVertex2i(130 - 36, 310);
	glVertex2i(130 - 40, 310);
	glFlush();
	Sleep(700);
	glEnd();
	int mk = 20;
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310);
	glVertex2i(70 + mk, 310 - 4);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 8);
	glVertex2i(70 + mk, 310 - 12);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 16);
	glVertex2i(70 + mk, 310 - 20);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 24);
	glVertex2i(70 + mk, 310 - 28);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 32);
	glVertex2i(70 + mk, 310 - 36);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 40);
	glVertex2i(70 + mk, 310 - 44);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 48);
	glVertex2i(70 + mk, 310 - 52);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 56);
	glVertex2i(70 + mk, 310 - 60);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 + mk, 310 - 64);
	glVertex2i(70 + mk, 310 - 68);
	glVertex2i(70 + mk, 310 - 70);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);
	glVertex2i(70 + mk, 240);
	glVertex2i(70 - 4 + mk, 240);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 - 8 + mk, 240);
	glVertex2i(70 - 12 + mk, 240);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 - 16 + mk, 240);
	glVertex2i(70 - 20 + mk, 240);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 - 24 + mk, 240);
	glVertex2i(70 - 26 + mk, 240);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(70 - 28 + mk, 240);
	glVertex2i(70 - 30 + mk, 240);
	glVertex2i(70 - 32 + mk, 240);
	glEnd();
	glFlush();
	Sleep(700);

	//MDR to MEMORY
	glBegin(GL_LINES);
	glVertex2i(100 - 38, 230);
	glVertex2i(100 - 40, 230);
	glVertex2i(100 - 42, 230);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(100 - 32, 230);
	glVertex2i(100 - 36, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100 - 24, 230);
	glVertex2i(100 - 28, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100 - 16, 230);
	glVertex2i(100 - 20, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100 - 8, 230);
	glVertex2i(100 - 12, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 230);
	glVertex2i(100 - 4, 230);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 270 - 36);
	glVertex2i(100, 270 - 40);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 270 - 28);
	glVertex2i(100, 270 - 32);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 270 - 20);
	glVertex2i(100, 270 - 24);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 270 - 12);
	glVertex2i(100, 270 - 16);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(100, 270 - 4);
	glVertex2i(100, 270 - 8);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 24, 270);
	glVertex2i(130 - 28, 270);
	glVertex2i(130 - 30, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 16, 270);
	glVertex2i(130 - 20, 270);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(130 - 8, 270);
	glVertex2i(130 - 12, 270);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 270);
	glVertex2i(130 - 4, 270);
	glEnd();
	glFlush();
	Sleep(700);
	int ph = 200;
	//MDR TO IR
	glBegin(GL_LINES);
	glVertex2i(150, 260);
	glVertex2i(150, 260 - 4);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 260 - 8);
	glVertex2i(150, 260 - 12);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 260 - 16);
	glVertex2i(150, 260 - 20);
	glEnd();
	Sleep(ph);

	//IR TO ALU
	glBegin(GL_LINES);
	glVertex2i(150, 220);
	glVertex2i(150, 220 - 4);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 220 - 8);
	glVertex2i(150, 220 - 12);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(150, 220 - 16);
	glVertex2i(150, 220 - 20);
	glEnd();
	Sleep(ph);


	//REGISTERS R1 AND R2 TO ALU BOX
	glBegin(GL_LINES);  //R1
	glVertex2i(220, 166);
	glVertex2i(220 - 4, 166);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 8, 166);
	glVertex2i(220 - 12, 166);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 16, 166);
	glVertex2i(220 - 20, 166);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 24, 166);
	glVertex2i(220 - 28, 166);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 32, 166);
	glVertex2i(220 - 36, 166);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 38, 166);
	glVertex2i(220 - 42, 166);
	glEnd();

	glBegin(GL_LINES);  //R2
	glVertex2i(220, 144);
	glVertex2i(220 - 4, 144);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 8, 144);
	glVertex2i(220 - 12, 144);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 16, 144);
	glVertex2i(220 - 20, 144);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 24, 144);
	glVertex2i(220 - 28, 144);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 32, 144);
	glVertex2i(220 - 36, 144);
	glEnd();
	glFlush();
	Sleep(700);
	glBegin(GL_LINES);
	glVertex2i(220 - 38, 144);
	glVertex2i(220 - 42, 144);
	glEnd();
	Sleep(ph);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



	glColor3f(1.0, 0.5, 0.0);//boxes inside executing box changing color
	glRecti(135, 115, 145, 140);//+
	glFlush();
	Sleep(800);

	glColor3f(1.0, 1.0, 0.0);//boxes inside executing box
	// glRecti(135,145,125,170);//+
	glRecti(135, 115, 145, 140);
	glFlush();
	Sleep(800);

	glColor3f(1.0, 1.0, 1.0);//boxes inside executing box
	// glRecti(135,145,125,170);//+
	glRecti(135, 115, 145, 140);
	glFlush();
	Sleep(800);

	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(140, 127);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, '+');
	glFlush();

	glBegin(GL_LINES);//line from executing box to result box
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(150, 110);
	glVertex2i(150, 106);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);//line from executing box to result box
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(150, 102);
	glVertex2i(150, 98);
	glEnd();
	glFlush();
	Sleep(700);

	glBegin(GL_LINES);//line from executing box to result box
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(150, 94);
	glVertex2i(150, 90);
	glEnd();
	glFlush();
	Sleep(700);



	glColor3f(0.0, 1.0, 0.0);//to green
	glRecti(130, 70, 170, 90);
	glFlush();
	Sleep(1000);

	glColor3f(1.0, 1.0, 1.0);//white
	//glRecti(160,120,120,100);
	glRecti(130, 70, 170, 90);
	glFlush();
	Sleep(1000);

	glColor3f(0.0, 1.0, 0.0);//to green
	// glRecti(160,120,120,100);
	glRecti(130, 70, 170, 90);
	glFlush();
	Sleep(1000);

	int p;
	char textg1[6] = { 'R', 'E', 'S', 'U', 'L', 'T' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(135, 80);
	for (p = 0; p<6; p++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textg1[p]);


	Sleep(500);
	int k312;
	char textc212[2] = { '1', '3' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(160, 80);
	for (k312 = 0; k312<2; k312++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc212[k312]);

	Sleep(500);
	glColor3f(1.0, 1.0, 0.0);//changing color of R3 box to yellow
	//glRecti(200,180,240,155);
	glRecti(200 + 20, 133, 240 + 20, 155);
	glFlush();
	Sleep(500);

	glColor3f(1.0, 0.0, 0.0);//changing color of R3 box to red
	//glRecti(200,133,240,155);
	glRecti(200 + 20, 133, 240 + 20, 155);
	glFlush();
	Sleep(500);

	glColor3f(1.0, 1.0, 0.0);//changing color of R3 box to yellow
	//glRecti(200,180,240,155);
	//glRecti(200,133,240,155);
	glRecti(200 + 20, 133, 240 + 20, 155);
	glFlush();
	Sleep(500);

	int k311;
	char textc211[5] = { 'R', '3', '=', '1', '3' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(230, 140);
	for (k311 = 0; k311<5; k311++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textc211[k311]);

	//PC TO INSTRUCTION 1
	glBegin(GL_LINES);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(130, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 280);
	glVertex2i(80, 280);
	glVertex2i(60, 280);
	glEnd();
	glFlush();

	int s1;
	char textj1[3] = { 'A', 'L', 'U' };
	glColor3f(1.0, 0.0, 0.0);
	glRasterPos2i(130, 190);
	for (s1 = 0; s1<3; s1++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, textj1[s1]);
	Sleep(800);
	//PC TO INSTRUCTION 2
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 260);
	glVertex2i(80, 260);
	glVertex2i(60, 260);
	glEnd();
	glFlush();

	Sleep(800);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(130, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 260);
	glVertex2i(80, 260);
	glVertex2i(60, 260);
	glEnd();
	glFlush();

	Sleep(800);
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 350);
	glVertex2i(80, 260);
	glVertex2i(80, 260);
	glVertex2i(60, 260);
	glEnd();
	glFlush();


	glFlush();
}


void keyboard(unsigned char key, int x, int y)
{
	if (key == 13)
		k1 = 1;
	if (k1 == 1)
	{
		switch (key)
		{
		case 27: exit(0); //27 is the ascii code for the ESC key

		}
	}
}
void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	if (k1 == 0)
		display();
	glutPostRedisplay();
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(700, 700);
	glutCreateWindow("   EXECUTION OF INSTRUCTIONS   ");
	myinit();
	create_menu();
	glutDisplayFunc(display1);

	glutKeyboardFunc(keyboard);

	glutMainLoop();
	return 0;
}



