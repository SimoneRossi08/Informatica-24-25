.model small
.stack 200h
.data
.code

MAIN:
    mov ax, 07h
    mov bx, 03h

    cmp ax, bx
    jle VERO
    jmp FALSO

        VERO:
            mov cx, ax
            mov ax, bx
            mov bx, ax
            jmp FINE
        FALSO: 
            sub ax, bx
            jmp FINE
FINE:
    mov ah, 4ch
    int 21h
    .exit
END.