#Digital Fitness Watch Personal Project
Product: MatthWatch8<br/>
To produce a working .s19 file the following terminal commands are neccesary<br/>
* Compile:<br/>
  * cxstm8 -istm8s103f3_spl-master\inc +debug -pxp -no -l +mods0 -pp -i"C:\Program Files (x86)\COSMIC\FSE_Compilers\CXSTM8\Hstm8" -clDebug\ -coDebug\ src\main.c
* Link:<br/>
  * clnk -m Debug\mattwatch8.map -l"C:\Program Files (x86)\COSMIC\FSE_Compilers\CXSTM8\Lib" -o Debug\matthwatch8.sm8 Debug\matthwatch8.lkf
  * cvdwarf Debug\matthwatch8.sm8
* Build:<br/>
  *chex -o Debug\matthwatch8.s19 Debug\matthwatch8.sm8
