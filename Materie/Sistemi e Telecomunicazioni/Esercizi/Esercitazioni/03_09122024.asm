;Inizializzare i registri AX e BX con due valori a tua scelta compresi tra 0 e 255,
;quindi se AX è minore o uguale di BX sommare i due valori in CX

.model small
.stack 200h
.data
.code

MAIN:
    mov ax, 05h
    mov bx, 06h

    cmp ax, bx
    jle VERO
    jmp CONTINUA
        VERO:
            add ax, bx
            mov cx, ax
            jmp CONTINUA
    CONTINUA:
    mov ah, 4ch
    int 21h
    .exit
END.