# Digital Fitness Watch Personal Project
Product: MatthWatch8<br/>
Purpose: a low-power digital watch with a general clock, timer, stopwatch, alarms, and step counter<b/>
 
## Toolchain
- Standard Peripheral Libray(SPL) for quick development while having low overhead
- COSMIC compiler is used to compile, link, and build the code
  * To produce a working motorola(.s19) file which (ST Visual Programmer uses to flash the MCU) the following terminal commands are neccesary<br/>
    * _Debug & Compile_ <br/>
      cxstm8 -istm8s103f3_spl-master\inc +debug -pxp -no -l +mods0 -pp -i"C:\Program Files (x86)\COSMIC\FSE_Compilers\CXSTM8\Hstm8" -clDebug\ -coDebug\ src\main.c

    * _Link & Build:_ <br/>
      clnk -m Debug\mattwatch8.map -l"C:\Program Files (x86)\COSMIC\FSE_Compilers\CXSTM8\Lib" -o Debug\matthwatch8.sm8 Debug\matthwatch8.lkf
    
    * _Convert to .elf_ <br/>
      cvdwarf Debug\matthwatch8.sm8
      
    * _Convert to .s19:_ <br/>
      chex -o Debug\matthwatch8.s19 Debug\matthwatch8.sm8
      
- ST Visual Programmer is currently used program flash data, memory data, and option bytes
- ST-LinkV2 is used as a physical adapter between USB-A and SWIM-Protocol running the ST-LinkV2 device driver

