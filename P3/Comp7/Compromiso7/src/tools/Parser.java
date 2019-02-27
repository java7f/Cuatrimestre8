package tools;

import java.util.Vector;

import bintree.BinTree;

/**
 * GRAMÁTICA:
 *
 * imp → dis{op-imp dis}
 * dis → conj{op-dis conj}
 * conj → neg{op-conj neg}
 * neg → op-neg var | var
 * var → [a-z]
 * op-imp → '→'
 * op-dis  →   ∨
 * op-conj → ^
 * op-neg → ~
 */

/**
 * Clase que representa un analizador sintáctico como la segunda etapa de la compilación.
 */
public class Parser {

    /**
     * Token actual.
     */
	private char token;

    /**
     * Lista de tokens detectados por el lexer.
     */
	private Vector<Character> tokens;

    /**
     * Fórmula a evaluar
     */
	private String expression;

    /**
     * Flag que se activa si se encontró un error sintáctico.
     */
	private boolean errorFlag;

    /**
     * Constructor.
     * @param tokens Lista de tokens.
     * @param expression Fórmula.
     */
	public Parser(Vector<Character> tokens, String expression) {
		this.tokens = tokens;
		this.expression = expression;
		this.errorFlag = false;
	}


    /**
     * Verifica si un token es una letra del abecedario minúscula.
     * @param expectedToken Token a evaluar.
     * @return true si es una letra minúscula.
     */
	private boolean isVar(char expectedToken) {
		if(token > 96 && token < 123) 
			return true;
		else {
			return false;
		}
	}

    /**
     * Función que indica que hubo un error sintáctico.
     */
	private void error() 
	{
		System.out.println("Misconstructed expression " + expression);
		errorFlag = true;
	}

    /**
     * Realiza un emparejamiento de un token terminal. Si concuerda, se elimina el token de la lista.
     * @param expectedToken Token a evaluar.
     */
	private void match(char expectedToken) 
	{
		if(token == expectedToken) 
		{
			tokens.remove(0);
			token = ' ';
			if(!tokens.isEmpty())
				token = tokens.elementAt(0);	
		}
		
		else 
		{
			if(!errorFlag)
				error();
		}
	}

    /**
     * Función recursiva para la regla gramática imp.
     * @return Árbol armado.
     */
	public BinTree implication()
	{
		token = tokens.firstElement();
		BinTree newNode = disjunction();
		BinTree opNode = new BinTree();
		
		while(token == '→') 
		{
			opNode.setToken(token);
			match('→');
			opNode.insertLeft(newNode);
			opNode.insertRight(disjunction());
		}
		if(!tokens.isEmpty() && !errorFlag)
			error();
		
		if (opNode.getToken() != null) {
			newNode = opNode;
		}
		
		return newNode;
	}

    /**
     * Función recursiva para la regla gramática dis.
     * @return Árbol de disjunción.
     */
	private BinTree disjunction() {
		BinTree newNode = conjunction();
		BinTree opNode = new BinTree();
		
		while(token == '∨') 
		{
			opNode.setToken(token);;
			match('∨');
			opNode.insertLeft(newNode);
			opNode.insertRight(conjunction());
		}
		
		if (opNode.getToken() != null) {
			newNode = opNode;
		}
		
		return newNode;
	}

    /**
     * Función recursiva para la regla gramática conj.
     * @return Árbol de conjunción.
     */
	private BinTree conjunction() {
		 BinTree newNode = negation();
		 BinTree opNode = new BinTree();

		while(token == '^') 
		{
			opNode.setToken(token);
			match('^');
			opNode.insertLeft(newNode);
			opNode.insertRight(negation());
		}
		
		if (opNode.getToken() != null) {
			newNode = opNode;
		}
		
		return newNode;
	}

    /**
     * Función recursiva para la regla gramática neg.
     * @return Hoja con variable proposicional.
     */
	private BinTree negation() {
		BinTree newNode,opNode = null;

		if(token == '~')
		{
			opNode = new BinTree(token);
			match('~');
			
			if(isVar(token)) {
				newNode = new BinTree(token);
				opNode.insertLeft(newNode);
				
				match(token);
				
			}
			else {
				error();
			}
		}
		
		else if(isVar(token)) 
		{
			opNode = new BinTree(token);
			
			match(token);
			
		}
		
		else {
			if(!errorFlag)
				error();
		}
		
		return opNode;
	}

}
