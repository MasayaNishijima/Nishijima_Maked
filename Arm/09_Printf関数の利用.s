.global main
.func main
main:
    ldr r0, =string
    mov r1, #0
loop:
    cmp r1, #10
    bge done
    ldrb r2, [r0, r1]
    cmp r2, #0x2f
    ble sloop
    sub r2, r2, #32
    strb r2, [r0, r1]
sloop:
    add r1, r1, #1
    b loop
done:
    bl printf
_exit:
    mov r0, #0
    mov r7, #1
    swi 0

.data
string:
    .asciz "these characters are lower letters within code.\n"


