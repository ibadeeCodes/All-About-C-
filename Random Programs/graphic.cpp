/*Rainbow Screen Code In C - MyCFiles.com */
#include<conio.h>
#include<stdio.h>
void setMCGA() {
asm mov ax,013h
asm int 10h
}
void putpixel(int x,int y,unsigned char col) {
asm {
mov ah , 0Ch
mov al , col
mov cx , x
mov dx , y
mov bh ,0
int 10h
}
}
void restoreNORMAL() {
asm {
mov ax,003h
int 10h
}
}
int main()
{
int i,j,k,h;
printf("graphic programming part 1");
printf("hit any key");
getch();
setMCGA();
for(i = 1;i <= 200; i++)
for(j = 1,h = 0;j <= 320; j++,h++) {
if(h>256) h = 0;
putpixel(j,i,h) ;
}
getch();
restoreNORMAL() ;
printf("ALL DONE!!");
getch();
return 0;
}
