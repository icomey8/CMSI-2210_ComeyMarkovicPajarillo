; assemble:  nasm -f win32 findGCDfunc.nasm
; link:  gcc -m32 findGCDfunc.obj -o findGCDfunc.exe

         global      _findGCDfunc
         section     .text

_findGCDfunc:
         push        ebp               
         mov         ebp,  esp         
         mov         eax,  [ebp+8]     
         mov         ecx,  edx         
         cmp         eax,  ecx         
         je          end               
         jb          reverse           
         jmp         start              
reverse:
         xchg        eax,  ecx         
start:
         xor         edx,  edx        
         idiv        ecx               
         test        edx,  edx        
         je          end
         mov         eax,  ecx         
         mov         ecx,  edx         
         jmp         start               
end:
         mov         eax,  ecx         
         mov         esp,  ebp         
         pop         ebp               
         ret
