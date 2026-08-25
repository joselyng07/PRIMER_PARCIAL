#include <iostream>
using namespace std;

int main() {
    string producto;
    double precio, cantidad, dinero;
    double subtotal, descuento, totalAPagar, cambio, dineroFaltante;

    cout << "Ingrese el nombre del producto: ";
    getline(cin, producto);
    cout << "Ingrese el precio unitario del producto: ";
    cin >> precio;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    cout << "Ingrese la cantidad de dinero entregada para el pago: ";
    cin >> dinero;

    subtotal = precio * cantidad;
    descuento = subtotal * 0.10;
    totalAPagar = subtotal - descuento;

    if (dinero >= totalAPagar) {
        cambio = dinero - totalAPagar;
        cout << "\n       REPORTE DE COMPRA EXITOSA" << endl;
        cout << "Nombre del producto: " << producto << endl;
        cout << "Cantidad de productos: " << cantidad << endl;
        cout << "Precio unitario: $" << precio << endl;
        cout << "Subtotal: $" << subtotal << endl;
        cout << "Descuento aplicado: $" << descuento << endl;
        cout << "Total a pagar: $" << totalAPagar << endl;
        cout << "Dinero entregado: $" << dinero << endl;
        cout << "Cambio a entregar: $" << cambio << endl;
    } else {
        dineroFaltante = totalAPagar - dinero;
        cout << "\n       ALERTA: FONDOS INSUFICIENTES" << endl;
        cout << "Total a pagar: $" << totalAPagar << endl;
        cout << "Dinero entregado: $" << dinero << endl;
        cout << "Dinero faltante: $" << dineroFaltante << endl;
    }
    return 0;
}
