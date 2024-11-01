float x, y; 
float a;    
float d = 10; 

void setup(){
  size(400, 400);
  background(255);
  x = width / 2;
  y = height / 2;
  a = 0; 

  for (int i = 0; i < 5; i++) {
    forward(200);
    turn(-144);  
  }
}

void turn(float na) {
  a += na; 
}

void forward(float d) { 
  float nx = x + cos(radians(a)) * d; 
  float ny = y - sin(radians(a)) * d; 
  line(x, y, nx, ny);
  x = nx; 
  y = ny;
}
