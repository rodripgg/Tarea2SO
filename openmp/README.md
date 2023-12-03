Para ejecutar el conversor a escala de grises con hebras:

1) En la terminal, ejecuta el comando make (o make openmp) estando dentro de la carpeta "openmp".

2) Como parámetro, ingresa la imagen a convertir, el nombre para el archivo de la imagen ya convertida y el número de hebras que quieres usar.

Usando la imagen de ejemplo quedaría:

    make
    ./openmp ejemplo.jpg ejemploGris.jpg 4

4) Para eliminar el programa ya compilado, se puede usar make clean en la terminal.

5) A tener en cuenta, la imagen a convertir debe estar en el mismo directorio que main.cpp; en caso contrario, se debe especificar la ruta en el parámetro correspondiente.
