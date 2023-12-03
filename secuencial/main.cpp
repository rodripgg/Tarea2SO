#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
using namespace chrono;

Mat convertToGrayscale(const Mat &colorImage)
{
    Mat grayscaleImage(colorImage.rows, colorImage.cols, CV_8UC1);

    for (int r = 0; r < colorImage.rows; r++)
    {
        for (int c = 0; c < colorImage.cols; c++)
        {
            const Vec3b &p = colorImage.at<Vec3b>(r, c);
            int grayValue = 0.299 * p[2] + 0.587 * p[1] + 0.114 * p[0];
            grayscaleImage.at<uchar>(r, c) = grayValue;
        }
    }

    return grayscaleImage;
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        cerr << "Uso: " << argv[0] << " <imagen_color> <imagen_grises>" << endl;
        return -1;
    }

    // Obtener los nombres de las imágenes de los argumentos
    const string imagenColor = argv[1];
    const string imagenGrises = argv[2];

    // Mostrar mensaje indica que se está cargando la imagen
    cout << "\nCargando imagen...\n" << endl;

    // Cargar la imagen a color desde imagenColor
    Mat image = imread(imagenColor, IMREAD_COLOR);

    // Verificar si la carga de la imagen fue exitosa
    if (image.empty())
    {
        cerr << "Error al cargar la imagen. Asegúrate de que la imagen existe y la ruta es correcta." << endl;
        return -1; // Salir con un código de error
    }

    // Mostrar mensaje indica que se está cargando la imagen
    cout << "Imagen Cargada: " << imagenColor << " Dimensiones\n   Alto: " << image.rows << "   Ancho: " << image.cols << endl;


    // Iniciar el temporizador
    auto start = chrono::high_resolution_clock::now();

    // Mostrar mensaje indica que se está convirtiendo la imagen
    cout << "\nConvirtiendo imagen a escala de grises..." << endl;

    // Convierte a escala de grises
    Mat grayscaleImage = convertToGrayscale(image);

    // Detener el temporizador
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    cout << "\nConversión secuencial a escala de grises completada." << endl;
    cout << "El tiempo de conversión fue " << duration.count() << " segundos" << endl;


    // Guarda la nueva imagen en escala de grises con el nombre imagenGrises
    imwrite(imagenGrises, grayscaleImage);

    // Mostrar mensaje de que la imagen fue guardada
    cout << "\nImagen guardada como " << imagenGrises << endl;
    cout << "\nTerminado.\n" << endl;

    return 0;
}
