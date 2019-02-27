/**
* @file pintosShell.c
* @brief Fuente del shell para Pintos
* @author Javier Falcon
*
*/

#include "kernel/console.h"
#include "lib/stdio.h"
#include "devices/input.h"
#include <string.h>

/**
 * Constante para representar el ASCII del enter
 */
int const ENTER_CODE = 13;
/**
* Función que será llamada en init.c para la lógica del shell.
*/
int shell()
{
 	bool exitSignal = 1; 
    char command[100];

	do 
    {
        printf("Shell ISC364>");

		for(int i = 0; i < 100; i++) {
	    		command[i] = input_getc();
        
        		if(command[i] == ENTER_CODE)
       				break;
        
         	printf("%c", command[i]);
        }

        /**
         * Chequeo del comando
         */
        if(command[0]=='w' && command[1]=='h' && command[2]=='o' && command[3] =='a' && command[4]=='m' && command[5]=='i' && command[6] == 13) {
            printf("\nJavier Falcón\n");
            command[0] = '0';
        }
        else if(command[0]=='e' && command[1]=='x' && command[2]=='i' && command[3] == 't' && command[4] == 13) {
            exitSignal = 0;
            break;
        }
        else {
            printf("\nComando desconocido.\n"); 
            command[0] = '0';
        } 
        
} while (exitSignal == 1);

return 0;
}

