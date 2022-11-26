Ques 1:
.MODEL SMALL
.STACK 100H
.DATA
A DB 4
B DB 2
.CODE
MAIN PROC FAR
MOV AX,@DATA
MOV DS,AX
MOV DL,A
SUB DL,B
SUB DL,48
MOV AH,2
INT 21H


MOV AH,4CH
INT 21H

MAIN ENDP
END MAIN
Ques 2:
.MODEL SMALL
.STACK 100H
.DATA
STRING DB 'BROTIN ','$'
.CODE
MAIN PROC
MOV AX,@DATA
MOV DS,AX
LEA DX,STRING
MOV AH,09H
INT 21H
MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN
Ques 3
 
.MODEL SMALL
 
        .STACK 100H
 
        .DATA
 
               STR1 DB 0DH,0AH, 'ENTER THE STRING :- $'
               STR2 DB 0DH,0AH, 'YOUR REVERSED STRING IS   :- $'
               nl DB 0DH,0AH,'$' 
 
        .CODE
         MAIN PROC FAR
 
                MOV AX,@DATA
                MOV DS,AX
 
 
         DISP:
                LEA DX,STR1
                MOV AH,09H
                INT 21H
 
                MOV CL,00
                MOV AH,01H
 
         READ:
 
                INT 21H
 
 
                MOV BL,AL
 
                PUSH BX
                INC CX
                CMP AL,0DH
 
                JZ DISPLAY
                
                JMP READ
                
         DISPLAY:
 
                LEA DX,STR2
                MOV AH,09H
                INT 21H
 
                LEA DX, nl
                MOV AH,09H
                INT 21H
                                
         ANS:
                MOV AH,02H
                POP BX
                MOV DL,BL
                INT 21H
                LOOP ANS
        MOV AH,4CH
        INT 21H
 
 
        MAIN ENDP
 
        END  MAIN
Ques 4:
.MODEL SMALL
.STACK 100H
.DATA
MSG1 DB "ENTER THE NUMBER $:"
D DB 10,2,16,"$"
MSG2 DB " ",13,10,"$" 
.CODE
MAIN PROC
MOV AX,@DATA
MOV DS,AX

LEA DX,MSG1
MOV AH,09H
INT 21H
MOV BL,0
MOV CH,10

LOOP1:
    MOV AH,01H
    INT 21H
    CMP AL,13
    JE LOOP2
    SUB AL,30H
    MOV CL,AL
    MOV AL,BL
    MUL CH
    ADD AL,CL
    MOV BL,AL
    JMP LOOP1

LOOP2:
MOV CL,BL
LEA SI,D
MOV CH,0

INI: 
MOV AL,CL
MOV DH,0
MOV DL,24H
PUSH DX
MOV BL,[SI]

L1:
    CMP AL,0
    JE L2
    MOV AH,0
    DIV BL
    MOV DL,AH
    MOV DH,0
    PUSH DX
    JMP L1

L2:
    POP DX
    CMP DL,24H
    JE L3
    CMP DL,9
    JG HEX
    ADD DL,30H
    MOV AH,02H
    INT 21H
    JMP L2

HEX:
    ADD DL,55
    MOV AH,02H
    INT 21H
    JMP L2


L3:
LEA DX,MSG2
MOV AH,09H
INT 21H
INC BH
MOV CH,3
CMP BH,CH
JE L4
INC SI
JMP INI

L4:
MOV AH,4CH
INT 21H

MOV AH,4CH
INT 21H
MAIN ENDP
END MAIN
Ques 5:
.model small
.stack 100h
.data
    msg1 db 10,13,'Enter your name:', '$'
    msg2 db 10,13,'Name:', '$'
    str1 db ?
.code
main proc far
mov ax,@data
mov ds,ax
 
lea dx,msg1
mov ah,09h
int 21h
 
lea si,str1
loop1:
mov ah,01h
int 21h
cmp al,0dh
je loop2
mov [si],al
inc si
jmp loop1
 
loop2:
mov al,'$'
mov [si],al
 
lea dx,msg2
mov ah,09h
int 21h
 
lea dx,str1
mov ah,09h
int 21h
 
mov ah,04ch
int 21h
 
main endp
end main

 

