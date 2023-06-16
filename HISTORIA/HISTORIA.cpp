// HISTORIA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    srand(time(NULL));

    int opcion = 1;
    int moneda = rand() % 2;
    int doncella = 0;
    int decision = 0;
    int camino = 0;
    int puerta = 0;

    cout << "Era una noche oscura y tormentosa. Usted se encuentra caminando solo por un camino desconocido en medio del bosque." << endl;
    cout << "De repente, escucha un sonido espeluznante que lo hace detenerse. Desea continuar caminando (1) o regresar a casa (2)?" << endl;
    cin >> decision;
    cout << endl;

    if (decision == 1) {
        cout << "Decides continuar caminando por el bosque. Después de unos minutos, te encuentras con una doncella herida y desesperada que te pide ayuda." << endl;
        cout << "Desea detenerse y ayudarla (1) o continuar su camino (2)?" << endl;
        cin >> doncella;
        cout << endl;

        if (doncella == 1) {
            cout << "Te acercas a la doncella para ayudarla, pero de repente te das cuenta de que ella en realidad es un monstruo disfrazado." << endl;
            cout << "Desea luchar contra el monstruo (1) o correr por su vida (2)?" << endl;
            cin >> decision;
            cout << endl;

            if (decision == 1) {
                cout << "Luchas contra el monstruo con todas tus fuerzas, pero pierdes. El monstruo te devora. FIN." << endl;
            }
            else if (decision == 2) {
                cout << "Corres por tu vida en una dirección aleatoria. Después de unos minutos, encuentras un camino que parece ser seguro." << endl;
                camino = 1;
            }
        }
        else if (doncella == 2) {
            cout << "Sigues tu camino, ignorando la petición de ayuda de la doncella. En unos minutos te encuentras con dos caminos diferentes." << endl;
            cout << "Desea tomar el camino de la izquierda (1) o el de la derecha (2)?" << endl;
            cin >> camino;
            cout << endl;
        }
    }
    else if (decision == 2) {
        cout << "Decides regresar a casa. En tu camino de regreso, te encuentras con una puerta en medio del bosque." << endl;
        cout << "Desea abrir la puerta (1) o continuar caminando por el camino (2)?" << endl;
        cin >> puerta;
        cout << endl;

        if (puerta == 1) {
            if (moneda == 0) {
                cout << "Abres la puerta y encuentras una habitación oscura. Procedes con cuidado y tropiezas con algo en el suelo." << endl;
                cout << "Desea encender la luz (1) o buscar algo en la oscuridad (2)?" << endl;
                cin >> decision;
                cout << endl;

                if (decision == 1) {
                    cout << "Enciendes la luz y descubres que has pisado una trampa mortal. FIN." << endl;
                }
                else if (decision == 2) {
                    cout << "Buscas en la oscuridad y encuentras una llave. La llave te permite escapar de la habitación. FIN." << endl;
                }
            }
            else if (moneda == 1) {
                cout << "Abres la puerta y encuentras una habitación oscura. Algo se mueve en la oscuridad, pero no estás seguro de qué. ¿Desea encender la luz (1) o buscar algo en la oscuridad (2)?" << endl;
                cin >> decision;
                cout << endl;

                if (decision == 1) {
                    cout << "Enciendes la luz y encuentras una figura oscura parada frente a ti. El ser te ataca. FIN." << endl;
                }
                else if (decision == 2) {
                    cout << "Buscas en la oscuridad, pero no encuentras nada. De repente, las luces se encienden y te das cuenta de que estás rodeado de monstruos. CORRE POR TU VIDA. FIN." << endl;
                }
            }
        }
        else if (puerta == 2) {
            cout << "Decides continuar caminando por el camino. En unos minutos te encuentras con dos caminos diferentes." << endl;
            cout << "Desea tomar el camino de la izquierda (1) o el de la derecha (2)?" << endl;
            cin >> camino;
            cout << endl;
        }
    }

    if (camino == 1) {
        cout << "El camino que tomaste te lleva a una casa abandonada. Al entrar a la casa, te das cuenta de que estás rodeado de monstruos." << endl;
        cout << "Desea luchar contra los monstruos (1) o buscar una salida (2)?" << endl;
        cin >> decision;
        cout << endl;

        if (decision == 1) {
            cout << "Luchas contra los monstruos, pero pierdes. FIN." << endl;
        }
        else if (decision == 2) {
            cout << "Buscas una salida y encuentras una ventana rota. Escapas de la casa por la ventana y te alejas corriendo de los monstruos. FIN." << endl;
        }
    }
    else if (camino == 2) {
        cout << "El camino que tomaste te lleva a una cueva. Después de tomar unos pasos, te das cuenta de alguien te está siguiendo. ¿Desea seguir adelante (1) o investigar quién te sigue (2)?" << endl;
        cin >> decision;
        cout << endl;

        if (decision == 1) {
            cout << "Continúas por la cueva, pero eventualmente te das cuenta de que estás perdido. FIN." << endl;
        }
        else if (decision == 2) {
            cout << "Investigas quién te sigue y descubres que es un monstruo. ¿Desea luchar contra el monstruo (1) o correr por su vida (2)?" << endl;
            cin >> decision;
            cout << endl;

            if (decision == 1) {
                cout << "Luchas contra el monstruo con todas tus fuerzas, pero pierdes. FIN." << endl;
            }
            else if (decision == 2) {
                cout << "Corres por tu vida por la cueva hasta que encuentras una salida. Finalmente, llegas a salvo a casa. FIN." << endl;
            }
        }
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
