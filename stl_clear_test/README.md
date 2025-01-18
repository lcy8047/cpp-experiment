# stl_clear_test

## stack_clear
stack을 재사용하는 경우 변수를 다시 선언할 때, 모두 pop을 할 때 얼마나 차이가 나는지 비교함

### result

``` text
Element size : 32, repetition : 100
        97clock, 9.7e-05s : redecl
       139clock, 0.000139s : pop
------------------
Element size : 64, repetition : 100
       164clock, 0.000164s : redecl
       280clock, 0.00028s : pop
------------------
Element size : 128, repetition : 100
       279clock, 0.000279s : redecl
       549clock, 0.000549s : pop
------------------
Element size : 256, repetition : 100
       535clock, 0.000535s : redecl
      1016clock, 0.001016s : pop
------------------
Element size : 512, repetition : 100
       960clock, 0.00096s : redecl
      2183clock, 0.002183s : pop
------------------
Element size : 1024, repetition : 100
      2398clock, 0.002398s : redecl
      4275clock, 0.004275s : pop
------------------
Element size : 2048, repetition : 100
      3139clock, 0.003139s : redecl
      4197clock, 0.004197s : pop
------------------
Element size : 4096, repetition : 100
      3122clock, 0.003122s : redecl
      6447clock, 0.006447s : pop
------------------
Element size : 8192, repetition : 100
      6112clock, 0.006112s : redecl
     12943clock, 0.012943s : pop
------------------
Element size : 16384, repetition : 100
     12317clock, 0.012317s : redecl
     25540clock, 0.02554s : pop
------------------
Element size : 32768, repetition : 100
     26404clock, 0.026404s : redecl
     50282clock, 0.050282s : pop
------------------
Element size : 65536, repetition : 100
     53196clock, 0.053196s : redecl
     99535clock, 0.099535s : pop
------------------
Element size : 131072, repetition : 100
    108559clock, 0.108559s : redecl
    200491clock, 0.200491s : pop
------------------
Element size : 262144, repetition : 100
    222098clock, 0.222098s : redecl
    405805clock, 0.405805s : pop
------------------
Element size : 524288, repetition : 100
    457377clock, 0.457377s : redecl
    812473clock, 0.812473s : pop
------------------
Element size : 1048576, repetition : 100
    926904clock, 0.926904s : redecl
   1628659clock, 1.62866s : pop
------------------
Element size : 2097152, repetition : 100
   1880280clock, 1.88028s : redecl
   3260443clock, 3.26044s : pop
------------------
Element size : 4194304, repetition : 100
   3760091clock, 3.76009s : redecl
   6520102clock, 6.5201s : pop
------------------
Element size : 8388608, repetition : 100
   7630109clock, 7.63011s : redecl
  13078902clock, 13.0789s : pop
------------------
Element size : 16777216, repetition : 100
  15043162clock, 15.0432s : redecl
  26736200clock, 26.7362s : pop
------------------
```