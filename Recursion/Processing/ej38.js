function setup() {
    createCanvas(400, 400);
  }
  
  function recursiveEllipse(n, x, y, w, h, z, c, a){
    if(n==0){return 1}
    stroke(0, 0, 0, 0);
    fill(z);
    ellipse(x,y,w,h);
    ellipseMode(CENTER);
    c -= 30;
    a -= 30;
    z = color(c, 0, 0, a);
    recursiveEllipse(n-1, x+w/4, y, w/2, h/2, z, c, a);
    recursiveEllipse(n-1, x-w/4, y, w/2, h/2, z, c, a);
    recursiveEllipse(n-1, x, y+h/4, w/2, h/2, z, c, a);
    recursiveEllipse(n-1, x, y-h/4, w/2, h/2, z, c, a);
  }
  
  function draw() {
    background(255);
    let x = 200;
    let y = 200;
    let w = width;
    let h = height;
    let c = 200;
    let a = 200;
    let z = color(200, 0, 0, 160);
    let n = 7;
    fill(z)
    recursiveEllipse(n, x, y, w, h, z, c, a);
  }