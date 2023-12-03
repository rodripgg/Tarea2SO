Tarea 2: Procesamiento paralelo de imágenes utilizando hebras.

Alumnos: Rodrigo Parra - Andrés Aguila

Para ejecutar las disntintas versiones se debe estar dentro de la carpeta y seguir las instrucciones del README.

Tiempo en conversión (imagen 38400x21600, Ryzen 3500u 4 cores 8 threads 2.1Ghz-3.7Ghz):

Secuencial: 13-14 segundos aprox.
Hebras: 4 segundos aprox.
OpenMP: 13 segundos aprox.

Tiempo en conversión (imagen 38400x21600, Máquina virtual Linux, 4104 RAM, 3 CPU):

Secuencial: 249 segundos aprox.
Hebras: 45 segundos aprox.
OpenMP: 35 segundos aprox.


Tiempo en conversión (imagen 5760x3200, Ryzen 3500u 4 cores 8 threads 2.1Ghz-3.7Ghz):

Secuencial: 0.36 segundos aprox.
Hebras: 0.13 segundos aprox.
OpenMP: 0.35 segundos aprox.