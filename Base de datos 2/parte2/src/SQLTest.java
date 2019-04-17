import java.sql.*;
import java.util.Scanner;

public class SQLTest {

    public static void main(String[] args) {
        int id;
        String firstName, lastName, sndLastName, birth, registerDate, docType, docId, gender, maritalStatus;

        Scanner in = new Scanner(System.in);
        System.out.println("ID: ");
        id = in.nextInt();
        System.out.println("Nombre: ");
        firstName = in.next();
        System.out.println("Primer Apellido: ");
        lastName = in.next();
        System.out.println("Segundo Apellido: ");
        sndLastName = in.next();
        System.out.println("Fecha de Nacimiento: ");
        birth = in.next();
        System.out.println("Fecha de Registro: ");
        registerDate = in.next();
        System.out.println("Tipo de Documento: ");
        docType = in.next();
        System.out.println("Número de Documento: ");
        docId = in.next();
        System.out.println("Sexo: ");
        gender = in.next();
        System.out.println("Marital Status: ");
        maritalStatus = in.next();

        Connection connection = getConnection();
        String addQuery = "INSERT INTO users (id,firstName, lastName, sndLastName, birth, registerDate, docType, docId, gender, maritalStatus) " +
                "VALUES("+ id + ", '" + firstName + "','" + lastName + "','" + sndLastName + "','" +
                birth + "','" + registerDate +"','" + docType + "','" + docId + "','" + gender + "','" + maritalStatus + "');";
        try {
            Statement stmt = connection.createStatement();
            stmt.executeQuery(addQuery);
        } catch (SQLException e) {
            e.printStackTrace();
        }

    }

    public static Connection getConnection(){
        Connection connection = null;

        try{
            String url = "jdbc:sqlserver://localhost:1433;databaseName=users;integratedSecurity=true";
            Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");
            connection = DriverManager.getConnection(url);
        }
        catch(Exception e){
            e.printStackTrace();
            System.out.println("error");
        }
        return connection;
    }
}

