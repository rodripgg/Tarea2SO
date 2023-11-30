# Definición de variables
CXX = g++
CXXFLAGS += -I/usr/include/opencv4

# Regla principal: especifica cómo construir el programa secuencial
all: secuencial

# Regla para compilar el programa a partir del archivo main.cpp
secuencial: main.cpp
	$(CXX) $(CXXFLAGS) -o secuencial main.cpp -lopencv_core -lopencv_highgui -lopencv_imgcodecs

# Regla para limpiar archivos generados durante la compilación
clean:
	rm -f secuencial
