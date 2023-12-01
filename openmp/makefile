# Definición de variables
CXX = g++
CXXFLAGS += -I/usr/include/opencv4

# Regla principal: especifica cómo construir el programa openmp
all: openmp

# Regla para compilar el programa a partir del archivo main.cpp
openmp: main.cpp
	$(CXX) $(CXXFLAGS) -o openmp main.cpp -lopencv_core -lopencv_highgui -lopencv_imgcodecs

# Regla para limpiar archivos generados durante la compilación
clean:
	rm -f openmp