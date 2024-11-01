float x, y; 
float a;    

void setup() {
  size(400, 350);
  background(255);
  
  x = 0;
  y = 350;
  a = 0;
  
//  forward(100);
  

  float numero = 10; 

  for (int i = 0; i < 90; i++) {
    for (int j = 0; j < 2; j++) {
      forward(numero); 
      turn(90); 
    }
  
    numero += 10;
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
