#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
  srand(time(NULL));
  FILE *fp = fopen(argv[2], "a");
  char *nombre_tabla = argv[1];
  int numero_random = rand() % 11;
  const char *inserts[10] = {
    "(id, nombre, apellido, salario) VALUES (1, 'Juan', 'Gómez', 50000);",
    "(id, nombre, precio) VALUES (101, 'Laptop', 1500.00);",
    "(nombre, correo, telefono) VALUES ('Ana Pérez', 'ana@example.com', '555-1234');",
    "(id_venta, id_producto, cantidad, fecha) VALUES (1, 101, 2, '2024-10-08');",
    "(id, nombre, contacto) VALUES (2001, 'Proveeduría S.A.', '555-4321');",
    "(id, nombre, edad, grado) VALUES (1001, 'Carlos López', 17, '11°');",
    "(id_reserva, id_cliente, fecha_reserva) VALUES (1, 3001, '2024-10-10');",
    "(id_pago, monto, fecha) VALUES (5001, 250.00, '2024-10-05');",
    "(id, nombre, duracion) VALUES (101, 'Programación en C', 30);",
    "(id_producto, cantidad_disponible) VALUES (105, 150);"
};

printf("INSERT INTO %s %s", nombre_tabla, inserts[numero_random]);
fprintf(fp, "INSERT INTO %s %s", nombre_tabla, inserts[numero_random]);
  return 0;
}