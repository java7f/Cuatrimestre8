package bintree;

import java.util.HashMap;
import java.util.Vector;

/**
 * Clase que representa nodos de un árbol.
 */
public class BinTree {

    /**
     * Hijos izquierdos y derechos.
     */
	private BinTree left, right;

    /**
     * Valor almacenado.
     */
	private Character token;

    /**
     * Constructor nulo.
     */
	
	public BinTree()
	{
		left = null;
		right = null;
		token = null;
	}

    /**
     * Constructor que inicializa el nodo con un valor inicial.
     * @param n token inicial.
     */
	
	public BinTree(char n)
	{
		left = null;
		right = null;
		token = n;
	}

    /**
     * Inserta un hijo a la izquierda.
     * @param n Nodo hijo.
     */
	public void insertLeft(BinTree n)
	{
		left = n;
	}

    /**
     * Inserta un hijo a la izquierda.
     * @param n Nodo hijo.
     */
	public void insertRight(BinTree n)
	{
		right = n;
	}

    /**
     * Coloca en el nodo un valor para almacenar.
     * @param token valor a almacenar.
     */
	public void setToken(Character token) 
	{
		this.token = token;
	}

    /**
     * Devuelve el hijo izquierdo.
     * @return nodo izquierdo
     */
	public BinTree getLeft() 
	{
		return left;
	}

    /**
     * Devuelve el hijo derecho
     * @return nodo derecho
     */
	public BinTree getRight() 
	{
		return right;
	}

    /**
     * Devuelve el token almacenado.
     * @return token.
     */
	public Character getToken() 
	{
		return token;
	}


    /**
     * Imprime el árbol haciendo recorrido en orden.
     * @param node Nodo para iniciar.
     */
	public static void printInorder(BinTree node)
	{
		if (node == null)
			return;

		//Imprimir hijo izquierdo.
		printInorder(node.left);

		//Imprimir valor.
		System.out.print(node.token + " ");

		//Imprimir hijo derecho.
		printInorder(node.right);
	}

    /**
     * Función que evalúa un árbol de expresión utilizando la tabla de símbolos para obtener
     * el valor de verdad para cada variable.
     * @param root Raíz del árbol.
     * @param symbolTable Tabla de símbolos
     * @return Resultado de la fórmula o null si no pude evaluarse
     */
	public static Boolean evaluateTree(BinTree root, HashMap<Character, Boolean> symbolTable)
	{
        boolean left = false, right = false;

        if (root == null)
            return null;

        //Es una hoja
        if(root.left == null && root.right == null)
            return symbolTable.get(root.token);

        //Evalúa el subárbol izquierdo.
        if(root.left != null)
            left = evaluateTree(root.left, symbolTable);

        //Evalúa el subárbol derecho.
        if (root.right != null)
            right = evaluateTree(root.right, symbolTable);

        //Se chequea cuál operación se evaluará.
        switch (root.token)
        {
            case '→':
                return !left || right;
            case '^':
                return left && right;
            case '∨':
                return left || right;
            case '~':
                return !left;
            default:
                return null;
        }
        
	}
	
	 public static Boolean evaluateAllValuesTree(BinTree root, HashMap<Character, Vector<Boolean>> symbolTable, int index)
 	{
         boolean left = false, right = false;
         
         if (root == null)
             return null;
         
       //Es una hoja
         if(root.left == null && root.right == null)
             return symbolTable.get(root.token).elementAt(index);

         //Evalúa el subárbol izquierdo.
         if(root.left != null)
             left = evaluateAllValuesTree(root.left, symbolTable, index);

         //Evalúa el subárbol derecho.
         if (root.right != null)
             right = evaluateAllValuesTree(root.right, symbolTable, index);

         //Se chequea cuál operación se evaluará.
         switch (root.token)
         {
             case '→':
                 return !left || right;
             case '^':
                 return left && right;
             case '∨':
                 return left || right;
             case '~':
                 return !left;
             default:
                 return null;
         }
	}

}
