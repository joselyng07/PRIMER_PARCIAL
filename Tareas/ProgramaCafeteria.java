6.	import java.util.Locale;
7.	import java.util.Scanner;
8.	
9.	public class ProgramaCafeteria {
10.	
11.	    static final double PORCENTAJE_DESCUENTO = 0.10;
12.	
13.	    public static void main(String[] args) {
14.	        Scanner entrada = new Scanner(System.in);
15.	
16.	        // Entrada de datos
17.	        System.out.print("Ingrese el nombre del producto: ");
18.	        String producto = entrada.nextLine();
19.	
20.	        System.out.print("Ingrese el precio unitario del producto: ");
21.	double precio = entrada.nextDouble();
22.	
23.	        System.out.print("Ingrese la cantidad de productos: ");
24.	        double cantidad = entrada.nextDouble();
25.	
26.	        System.out.print("Ingrese la cantidad de dinero entregada para el pago: ");
27.	        double dinero = entrada.nextDouble();
28.	
29.	        // Procesamiento
30.	        double subtotal = precio * cantidad;
31.	        double descuento = subtotal * PORCENTAJE_DESCUENTO;
32.	        double totalAPagar = subtotal - descuento;
33.	
34.	        // Validación y salida
35.	        if (dinero >= totalAPagar) {
36.	            double cambio = dinero - totalAPagar;
37.	            mostrarReporteExitoso(producto, cantidad, precio, subtotal, descuento, totalAPagar, dinero, cambio);
38.	        } else {
39.	            double dineroFaltante = totalAPagar - dinero;
40.	            mostrarAlertaFondos(totalAPagar, dinero, dineroFaltante);
41.	        }
42.	
43.	        entrada.close();
44.	    }
45.	
46.	    static void mostrarReporteExitoso(String producto, double cantidad, double precio,
47.	                                       double subtotal, double descuento, double totalAPagar,
48.	                                       double dinero, double cambio) {
49.	        System.out.println("\n       REPORTE DE COMPRA EXITOSA");
50.	        System.out.println("Nombre del producto: " + producto);
51.	        System.out.println("Cantidad de productos: " + cantidad);
52.	        System.out.printf(Locale.US, "Precio unitario: $%.2f%n", precio);
53.	        System.out.printf(Locale.US, "Subtotal: $%.2f%n", subtotal);
54.	        System.out.printf(Locale.US, "Descuento aplicado: $%.2f%n", descuento);
55.	        System.out.printf(Locale.US, "Total a pagar: $%.2f%n", totalAPagar);
56.	        System.out.printf(Locale.US, "Dinero entregado: $%.2f%n", dinero);
57.	        System.out.printf(Locale.US, "Cambio a entregar: $%.2f%n", cambio);
58.	    }
59.	
60.	    static void mostrarAlertaFondos(double totalAPagar, double dinero, double dineroFaltante) {
61.	        System.out.println("\n       ALERTA: FONDOS INSUFICIENTES");
62.	        System.out.printf(Locale.US, "Total a pagar: $%.2f%n", totalAPagar);
63.	        System.out.printf(Locale.US, "Dinero entregado: $%.2f%n", dinero);
64.	        System.out.printf(Locale.US, "Dinero faltante: $%.2f%n", dineroFaltante);
65.	    }
66.	}
