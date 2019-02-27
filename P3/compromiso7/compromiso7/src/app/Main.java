package app;

import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;
import java.util.Vector;
import bintree.BinTree;
import tools.*;

public class Main {
	
	public static Vector<Character> tokens;
	public static BinTree syntaxTree = new BinTree(); 

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String formula;
		System.out.println("Insert Formula:  ");
		formula = scan.nextLine();
		
		
		tokens = Lexer.getTokens(formula);
		
		Parser parser = new Parser(tokens, formula);
		
		syntaxTree = parser.implication();
		
		int option;
		
		do
		{
			System.out.println("\nMenu");
			System.out.println("=======================");
			System.out.println("1. Insert Values");
			System.out.println("2. All Truth Values");
			System.out.println("3. Exit\n");
			
			option = scan.nextInt();
			
			switch(option)
			{
			case 1:
				insertValues();
				break;
			case 2: 
				allValues();
				break;
			case 3: 
				System.out.println("Bye! ^-^");
				break;
			default:
				System.out.println("Not a valid option!");
			}
			
		
		}while(option != 3);
		
		scan.close();

		
	}
	
	
	static void insertValues()
	{
		Lexer.insertPropValues();
		HashMap<Character, Boolean> symbolTable = Lexer.getSymbolTable();
		System.out.println("Value: "+ BinTree.evaluateTree(syntaxTree, symbolTable));
	}
	
	static void allValues()
	{
		Lexer.insertAllValues();
		
		HashMap<Character, Vector<Boolean>> temp  = Lexer.getAllSymbolTable();
		Set<Character> variables = temp.keySet();
		int evalNumber = variables.size();
		evalNumber = 2 << (evalNumber-1);

		for (int i = 0; i < evalNumber; i++) {
			
			System.out.println(BinTree.evaluateAllValuesTree(syntaxTree, temp, i));
		}
		
	}
	

}
