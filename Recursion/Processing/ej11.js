    function setup() {
    createCanvas(400, 400);
  }
  function ej11(unpoco){
    unpoco += 10;
    line(0, 350-unpoco, 50+unpoco, 350-unpoco);
    line(50+unpoco, 350-unpoco, 50+unpoco, 400+unpoco);
    ej11(unpoco);
  }
  
  function draw() {
    background(200);
    let unpoco = 0;
    ej11(unpoco);
  }