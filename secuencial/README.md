Para ejecutar el conversor a escala de grises secuencial:

1) En la terminal, ejecuta el comando make (o make secuencial) estando dentro de la carpeta "secuencial".

2) Como parámetro, ingresa la imagen a convertir y el nombre para el archivo de la imagen ya convertida.

Usando la imagen de ejemplo quedaría:

    make
    ./secuencial ejemplo.jpg ejemploGris.jpg

4) Para eliminar el programa ya compilado, se puede usar make clean en la terminal.

5) A tener en cuenta, la imagen a convertir debe estar en el mismo directorio que main.cpp; en caso contrario, se debe especificar la ruta en el parámetro correspondiente.
