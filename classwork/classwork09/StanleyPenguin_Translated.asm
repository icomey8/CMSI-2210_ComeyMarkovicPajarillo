; Using sayhello as a base before translating.  In progress.

         global   _main                ; this is the main entry point
         extern   _printf              ; external code from "C" library

         section  .text                ; text [code] segment

_main:
          mov       ebx, 1
top:
          push      ebx
          push      format
          call       _printf              ; call printf()
          add       esp, 8               ; shift by 4 bytes for every push - so for 2 push 8
          add       ebx, ebx
          cmp       ebx, 1000000
          JLZ       top

          ret                          ; return to O/S

format:   db "%d", 0


