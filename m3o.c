void k()
{

int x;
while(x<11)
 *(&x+2)-=33;

}


void main()
{
int x,y=0;
x=0;
printf("%d",x);
x++;
k();
x=1;
}
