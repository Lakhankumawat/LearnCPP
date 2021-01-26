
//Important Note : To run this program you need to download simple codeblocks application
//Download link is given in README.md :)
#include<simplecpp>

main_program{

initCanvas("projectile",1000,1000);//Create a canvas named projectile of size 1000X1000
	int start = getClick();
	Circle p(start/65536,start%65536,5);//To create a circle at click position whose x coordinate is start/65536,y = start%65536,Radius 5
	p.penDown();
	double vx=1,vy=-1,gravity=0.01;
	repeat(400){
	p.move(vx,vy);
	vy+=gravity;
	wait(0.01);}
	getClick(); //Wait for user to click . After click terminates.
}
