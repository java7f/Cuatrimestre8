/**
 * @file XMLtest.java
 * @brief Fuente de la aplicación XMLtest
 */

import java.io.File;
import java.util.Scanner;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.Document;
import org.w3c.dom.NodeList;
import org.w3c.dom.Node;
import org.w3c.dom.Element;

public class XMLtest {

    public static void main(String[] args) {

        try {

            File inputFile = new File("ejerc2.xml");
            DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
            Document doc = dBuilder.parse(inputFile);

            doc.getDocumentElement().normalize();
            NodeList nList = doc.getElementsByTagName("eval");
            Scanner scanner = new Scanner(System.in);
            int evalsNumber = nList.getLength();
            int idEval;

            System.out.println("Ingrese el número de la evaluación:\n");
            idEval = scanner.nextInt();

            System.out.println("La evaluación " + idEval + " contiene los siguientes datos: ");

            for (int temp = 0; temp < evalsNumber; temp++) {
                Node nNode = nList.item(temp);

                if (nNode.getNodeType() == Node.ELEMENT_NODE) {
                    Element eElement = (Element) nNode;

                    if (eElement.getAttribute("id").equals(String.valueOf(idEval))) {
                        System.out.println("Semana : "
                                + eElement
                                .getElementsByTagName("week")
                                .item(0)
                                .getTextContent());
                        System.out.println("Fecha : "
                                + eElement
                                .getElementsByTagName("date")
                                .item(0)
                                .getTextContent());
                        System.out.println("Título : "
                                + eElement.getAttribute("title"));
                        System.out.println("Valor : "
                                + eElement.getAttribute("value"));
                    }
                }
            }


        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
