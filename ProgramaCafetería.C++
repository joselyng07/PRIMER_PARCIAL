import java.util.Locale;
import java.util.Scanner;

public class ProgramaCafeteria {

    static final double PORCENTAJE_DESCUENTO = 0.10;

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        // Entrada de datos
        System.out.print("Ingrese el nombre del producto: ");
        String producto = entrada.nextLine();

        System.out.print("Ingrese el precio unitario del producto: ");
        double precio = entrada.nextDouble();

        System.out.print("Ingrese la cantidad de productos: ");
        double cantidad = entrada.nextDouble();

        System.out.print("Ingrese la cantidad de dinero entregada para el pago: ");
        double dinero = entrada.nextDouble();

        // Procesamiento
        double subtotal = precio * cantidad;
        double descuento = subtotal * PORCENTAJE_DESCUENTO;
        double totalAPagar = subtotal - descuento;

        // ValidaciÃ³n y salida
        if (dinero >= totalAPagar) {
            double cambio = dinero - totalAPagar;
            mostrarReporteExitoso(producto, cantidad, precio, subtotal, descuento, totalAPagar, dinero, cambio);
        } else {
            double dineroFaltante = totalAPagar - dinero;
            mostrarAlertaFondos(totalAPagar, dinero, dineroFaltante);
        }

        entrada.close();
    }

    static void mostrarReporteExitoso(String producto, double cantidad, double precio,
                                       double subtotal, double descuento, double totalAPagar,
                                       double dinero, double cambio) {
        System.out.println("\n       REPORTE DE COMPRA EXITOSA");
        System.out.println("Nombre del producto: " + producto);
        System.out.println("Cantidad de productos: " + cantidad);
        System.out.printf(Locale.US, "Precio unitario: $%.2f%n", precio);
        System.out.printf(Locale.US, "Subtotal: $%.2f%n", subtotal);
        System.out.printf(Locale.US, "Descuento aplicado: $%.2f%n", descuento);
        System.out.printf(Locale.US, "Total a pagar: $%.2f%n", totalAPagar);
        System.out.printf(Locale.US, "Dinero entregado: $%.2f%n", dinero);
        System.out.printf(Locale.US, "Cambio a entregar: $%.2f%n", cambio);
    }

    static void mostrarAlertaFondos(double totalAPagar, double dinero, double dineroFaltante) {
        System.out.println("\n       ALERTA: FONDOS INSUFICIENTES");
        System.out.printf(Locale.US, "Total a pagar: $%.2f%n", totalAPagar);
        System.out.printf(Locale.US, "Dinero entregado: $%.2f%n", dinero);
        System.out.printf(Locale.US, "Dinero faltante: $%.2f%n", dineroFaltante);
    }
}
