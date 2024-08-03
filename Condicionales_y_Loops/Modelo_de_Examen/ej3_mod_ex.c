void setup(){
  size(400,400);
  background(213);
  fill(0);
  int b = 10;
  int h = 400;
for(int x = 0; x < 400; x += b){
  rect(x, 0, b, h);
  h -= b;
  }
}
void draw(){

}