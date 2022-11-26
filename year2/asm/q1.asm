.MODEL SMALL


        .STACK 100H


        .DATA


               DATA1 DB 02H
               DATA2 DB 05H
 

        .CODE

         MAIN PROC FAR


                MOV AX,@DATA

                MOV DS,AX

                MOV BL,9
                MOV DL,12
                SUB DL,BL
                ADD DL,48
                MOV AH,2
                INT 21H
                MOV AH,4CH

		INT 21H



        MAIN ENDP


        END  MAIN