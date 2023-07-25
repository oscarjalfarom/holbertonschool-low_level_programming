; File: 100-hello_world.asm
; Auth: Oscar J Alfaro M
; Desc: 64-bit assembly program that prints
;       Hello, World followed by a new line.

section .text
   global main

main:
   mov edx,len
   mov ecx,msg
   mov ebx,1
   mov eax,4
   int 0x80

   mov eax,0
   int 0x80

section .data
   msg: db 'Hello, World', 0xa
   len: equ $ - msg
