float x, y; 
float a;    
float nx, ny;

void setup(){
  size(400, 400);
  background(255);
  
  x = 0;
  y = 350;
  nx = 50;
  ny = 400;
  a = 0; 

  for (int i = 0; i < 10; i++) {
    forward(50);
    turn(90);
  }
}

void drawlines(){
    line(x,y, nx, ny);
}
