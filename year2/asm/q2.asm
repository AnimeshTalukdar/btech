.MODEL SMALL


        .STACK 100H


        .DATA


               LF    EQU    0AH
               CR    EQU    0DH
               MSG4  DB     'ANIMESH TALUKDAR',LF,CR,'$'
 

        .CODE
         MAIN PROC FAR
              MOV AX,@DATA

              MOV DS,AX
              LEA DX,MSG4
              MOV AH,09H
              INT 21H
              MOV AH,4CH
              INT 21H
MAIN ENDP
END MAIN