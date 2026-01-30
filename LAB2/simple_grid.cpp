#include<simplecpp>
main_programe{
	initcanvas("grid",400,400);
	int cx=200;
	int cy=200;
	line v1(cx-50,cy-75,cx-50,cy+75);
	line v2(cx+50,cy-75,cx+50,cy+75);
	line h1(cx-75,cy-50,cx+75,cx-50);
	line h2(cx-75,cy+50,cx+75,cy+50);
	getclick();
}