Para ejecutar el conversor a escala de grises secuencial:

1) En la terminal ejecutar comando make (o make secuencial) estando dentro de la carpeta secuencial.

2) Como parametro ingresar imagen a comvertir y un nombre para el archivo de la imagen ya convertida.

usando la imagen de ejmplo quedaria:

    make
    ./secuencial ejemplo.jpg ejemploGris.jpg

4) Para eliminar el codigo ya compilado se puede usar make clean en la terminal.

5) A considerar la imagen a convertir debe estar en el mismo directorio de main.cpp, en caso contrario se debe especificar la ruta en el parametro correctante.