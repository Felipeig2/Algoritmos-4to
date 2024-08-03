//40. Escribir un programa en Processing que dibuje círculos concéntricos en una ventana de 400 × 400 píxeles. Usar
// la función ellipse(). La imagen debajo ilustra el resultado aproximado.


void setup(){
 size(400,400);
 background(100,100,200);
for(int i = 400; i > 1; i -= 10){
ellipse(width/2, height /2, i, i);
}
}
