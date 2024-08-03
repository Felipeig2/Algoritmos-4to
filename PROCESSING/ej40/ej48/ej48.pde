void setup(){
  size(400, 400); 
  background(189);
  int n = 3;
  int altura = height;
  int ancho = width;
  double alt = altura / (n+1);
  double anch = ancho / (n+1);

  for(int i = 1; i <= n; i++){ // Hace el forsito rico
    int y = (int)(i * alt);  // Multiplica el eje y por i
    int x = (int)(i * anch); // Multiplica el eje x por i
    line(0, y, ancho, y); // Dibuja líneas horizontales
    line(x, 0, x, altura); // Dibuja líneas verticales
  }
}
