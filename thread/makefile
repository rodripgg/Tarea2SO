# Definición de variables
CXX = g++
CXXFLAGS += -I/usr/include/opencv4

# Regla principal: especifica cómo construir el programa thread
all: thread

# Regla para compilar el programa a partir del archivo main.cpp
thread: main.cpp
	$(CXX) $(CXXFLAGS) -o thread main.cpp -lopencv_core -lopencv_highgui -lopencv_imgcodecs

# Regla para limpiar archivos generados durante la compilación
clean:
	rm -f thread