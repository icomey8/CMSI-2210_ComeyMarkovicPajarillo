         global      _main
         extern      _printf
         extern      _scanf

         section     .text
_main:
         push        ebx               

         push        input          
         call        _printf
         add         esp,  4           
         push        number1           
         push        format1         
         call        _scanf            
         add         esp,  8           

         push        input         
         call        _printf
         add         esp,  4           
         push        number2           
         push        format1         
         call        _scanf            
         add         esp,  8           
setup:
         xor         eax,  eax         ; set to zero
         xor         ecx,  ecx         
         mov         eax,  [number1]   
         mov         ecx,  [number2]   
         cmp         eax,  ecx         
         je          end               
         jb          reverse             
         jmp         start               
reverse:
         xchg        eax,  ecx         ; larger number first
start:
         xor         edx,  edx         ; set to zero
         idiv        ecx               
         test        edx,  edx         ; check remainder
         je          end
         mov         eax,  ecx         
         mov         ecx,  edx         
         jmp         start             
end:
         mov         eax,  ecx         
         push        eax               
         push        format2            
         call        _printf           
         add         esp,  8           
         ret

         section     .data
input:      db    "Enter a number: ", 0x00
format1:    db    "%d", 0x00
format2:    db    "GCD: %d", 0x00

number1:    dd    0x00
number2:    dd    0x00
