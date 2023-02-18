/*
Construir un programa que, dado un número total de horas, 
devuelve el número de semanas, días y horas equivalentes. 
Por ejemplo, dado un total de  1000 horas debe mostrar 5 
semanas, 6 días y 16 horas.
*/

package intro;

import java.util.Scanner;

public class Intro {

	public static void main(String[] args) {
		Scanner entrada= new Scanner(System.in);
		int total,dias,semanas,horas;
		System.out.println("Ingresa el número de horas");
		total=entrada.nextInt();
		semanas=total/168;
		dias=(total%168)/24;
		horas=total%24;
		System.out.println("El equivalente es: \n"
				+ "\nSemanas: "+semanas
				+ "\nDías: "+dias
				+ "\nHoras: "+horas
				);

	}

}
