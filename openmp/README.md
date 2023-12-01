Para ejecutar el conversor a escala de grises con hebras:

1) En la terminal ejecutar comando make (o make openmp) estando dentro de la carpeta thread.

2) Como parametro ingresar imagen a comvertir, el nombre para el archivo de la imagen ya convertida y el numero de habras que quieres usar.

usando la imagen de ejemplo quedaria:

    make
    ./openmp ejemplo.jpg ejemploGris.jpg 4

4) Para eliminar el codigo ya compilado se puede usar make clean en la terminal.

5) A considerar, la imagen a convertir debe estar en el mismo directorio de main.cpp, en caso contrario se debe especificar la ruta en el parametro correctante.