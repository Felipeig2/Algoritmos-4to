// Escribir un programa en Processing que dibuje una espiral “cuadrada” como la que se ilustra. Usar la función
// line(). 

  size  (400, 400);
  int centroHorizontal = width/2;
  int centroVertical = height/2;
    for(int i = 4; i < width; i += 8)  {
  line(centroHorizontal-i, centroVertical-i, centroHorizontal+i, centroVertical-i);
  line(centroHorizontal+i, centroVertical-i, centroHorizontal+i, centroVertical+i);
}
    for(int j = 8; j < width; j+=8)  {
  line(centroHorizontal+j-4, centroVertical+j-4, centroHorizontal-j-4, centroVertical+j-4);
  line(centroHorizontal-j-4, centroVertical+j-4, centroHorizontal-j-4, centroVertical-j-4);
}  
