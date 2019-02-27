package tools;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;
import java.util.Vector;

/**
 * variables[a-z] = var
 *
 * ^ = op_conj
 * ∨ = op_disj
 * ~ = op_neg
 * → = op_imp
 *
 **/

/**
 * Clase que representa un analizador léxico como la primera etapa de la compilación.
 */
public class Lexer 
{
    /**
     * Tabla de símbolos que será llenada durante el análisis léxico.
     */
	private static HashMap<Character, Boolean> symbolTable;
	private static HashMap<Character, Vector<Boolean>> allSymbolTable;

    /**
     * Función que realiza la tokenización dada una fórmula.
     * @param formula cadena con la fórmula.
     * @return Vector con cada token detectado.
     */
	public static Vector<Character> getTokens(String formula)
	{
		Vector<Character>tokens = new Vector<>();
		
		int formLength = formula.length();
		boolean propValue = false;
		symbolTable = new HashMap<Character, Boolean>();


		for(int i = 0; i<formLength; i++)
		{
			char token = formula.charAt(i);
			
			if(token == ' ')continue; //Si ve un espacio, lo ignora.

            //Chequeo del tipo de token.
			if((token > 96 && token < 123) || token == '^' || token == '∨' || token == '~' || token == '→')
			{
				tokens.add(token);
				if(token > 96 && token < 123)
				{
					symbolTable.put(token, propValue); //Si es una variable, se inserta en la tabla con un valor genérico.
				}
			}
			else
			{
				System.out.println(token + " is an invalid token!");
				tokens.clear();
				break;
			}
		
		}
		
		return tokens;
	}

    /**
     * Devuelve la tabla de símbolos.
     * @return Tabla de símbolos.
     */
    public static HashMap<Character, Boolean> getSymbolTable()
    {
        return symbolTable;
    }
    
    /**
     * Devuelve la tabla de símbolos.
     * @return Tabla de símbolos.
     */
    public static HashMap<Character, Vector<Boolean>> getAllSymbolTable()
    {
        return allSymbolTable;
    }

    /**
     * Imprime el contenido de la tabla de símbolos.
     */
    public static void printSymbolTable()
    {
        Set<Character> variables = symbolTable.keySet();
        for (Character var: variables){

            Character key = var;
            String value = symbolTable.get(var).toString();
            System.out.println(key + " " + value);
        }
    }

    /**
     * Método que pide en consola los valores de verdad para cada variable detectada
     * e inserta el valor en la tabla para cada una.
     */
    public static void insertPropValues()
    {
        Set<Character> variables = symbolTable.keySet();
        Boolean propValue;
        
        @SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
        
        for (Character var: variables)
        {
            System.out.println("Ingrese el valor de verdad para " + var);
            propValue = scanner.nextBoolean();
            symbolTable.replace(var, propValue);
        }       
       
    }
    
    
    public static void insertAllValues()
    {
    	Set<Character> variables = symbolTable.keySet();
    	allSymbolTable = new HashMap<>();
    	int vecSize = variables.size();
    	
    	
    	
    	vecSize = 2<<(vecSize-1);
    	
    	int factor = vecSize/2;
    	Boolean val = false;
    	
    	for (Character var: variables)
        {
    	Vector<Boolean> tempVec = new Vector<Boolean>();
           for(int i = 0; i<vecSize; i++)
           {   
        	   
        	   if(i%factor == 0)
        		   val = !val;
        	   
        	   tempVec.add(val);
        	   
           }
           
           allSymbolTable.put(var, new Vector<>(tempVec));
           tempVec.clear();
           
           factor /=2;
           Vector<Boolean> test = allSymbolTable.get(var);
           System.out.println(test);
        } 
    	
    }
    
    
}
