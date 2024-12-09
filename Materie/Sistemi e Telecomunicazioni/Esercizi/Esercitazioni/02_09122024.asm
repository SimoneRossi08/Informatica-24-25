;Inizializzare i registri AX e BX con due valori a tua scelta compresi tra 0 e 255,
;quindi se ax è maggiore di bx scambiare i due valori tra loro

.model small
.stack 200h
.data
.code

MAIN: 
    mov ax, 08h
    mov bx, 09h

    cmp ax, bx
    jg VERO
    jmp CONTINUA
        VERO:
        mov cx, ax
        mov ax, bx
        mov bx, cx
        jmp CONTINUA
    CONTINUA:
    mov ah, 4ch
    int 21h
    .exit
END.