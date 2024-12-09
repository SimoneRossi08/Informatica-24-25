;Inizializzare i registri AX e BX con due valori a tua scelta compresi tra 0 e 255,
;se AX è uguale a BX incrementare AX di 1 unità e decrementare BX di 1 unità.

.model small
.stack 200h
.data
.code

MAIN:
    mov ax, 03h
    mov bx, 03h

    cmp ax, bx
    je VERO
    jmp CONTINUA
        VERO:
            inc ax
            dec bx
            jmp CONTINUA
    CONTINUA:
    mov ah, 4ch
    int 21h
    .exit
END.