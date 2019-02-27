package apps;

import analyzers.EmailLex;
import analyzers.IDlex;
import analyzers.PhoneNumberLex;

public class AnylzeTest {

    public static void main(String[] args) {

        IDlex matricula = new IDlex();
        PhoneNumberLex phone = new PhoneNumberLex();
        EmailLex email = new EmailLex();

        System.out.println("1. Pruebas de matrículas\n");
        System.out.println("\ta)2016-5265: " + matricula.analyzeID("2016-5265") + "\n");
        System.out.println("\tb)99-3245: " + matricula.analyzeID("99-3245") + "\n");
        System.out.println("\tc)20165265: " + matricula.analyzeID("20165265") + "\n");
        System.out.println("\td)2006-1562: " + matricula.analyzeID("2006-1562") + "\n");
        System.out.println("\te)0000-1562: " + matricula.analyzeID("0000-1562") + "\n");

        System.out.println("\n2. Pruebas de números de teléfono\n");
        System.out.println("\ta)+1-849-3526897: " + phone.analyzePhone("+1-849-3526897") + "\n");
        System.out.println("\tb)+1-809-6692385: " + phone.analyzePhone("+1-809-6692385") + "\n");
        System.out.println("\tc)+1-829-2073227: " + phone.analyzePhone("+1-829-2073227") + "\n");
        System.out.println("\td)849-3526897: " + phone.analyzePhone("849-3526897") + "\n");
        System.out.println("\te)+1-549-8075631: " + phone.analyzePhone("+1-549-8075631") + "\n");

        System.out.println("\n3. Pruebas de direcciones de correo electrónico\n");
        System.out.println("\ta)java7f@gmail.com: " + email.analyzeEmail("java7f@gmail.com") + "\n");
        System.out.println("\tb)pedrito_123@hotmail.com: " + email.analyzeEmail("pedrito_123@hotmail.com") + "\n");
        System.out.println("\tc)java7fgmail.com: " + email.analyzeEmail("java7fgmail.com") + "\n");
        System.out.println("\td)20165265@ce.pucmm.edu.do: " + email.analyzeEmail("20165265@ce.pucmm.edu.do") + "\n");
        System.out.println("\te)20165265@ce.pucmm..edu.do: " + email.analyzeEmail("20165265@ce.pucmm..edu.do") + "\n");
    }
}
