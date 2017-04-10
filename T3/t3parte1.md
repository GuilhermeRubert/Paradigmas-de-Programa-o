  
  Call: (8) avo(joao, _5716) ? creep
   Call: (9) pai(joao, _5934) ? creep
   Exit: (9) pai(joao, jose) ? creep
   Call: (9) pai(jose, _5716) ? creep
   Fail: (9) pai(jose, _5716) ? creep
   Fail: (8) avo(joao, _5716) ? creep
false.

 Call: (8) avo(roberto, _7182) ? creep
   Call: (9) pai(roberto, _7396) ? creep
   Exit: (9) pai(roberto, joao) ? creep
   Call: (9) pai(joao, _7182) ? creep
   Exit: (9) pai(joao, jose) ? creep
   Exit: (8) avo(roberto, jose) ? creep
Y = jose ;
   Redo: (9) pai(roberto, _7396) ? creep
   Exit: (9) pai(roberto, julio) ? creep
   Call: (9) pai(julio, _7182) ? creep
   Exit: (9) pai(julio, marcos) ? creep
   Exit: (8) avo(roberto, marcos) ? creep
Y = marcos ;
   Redo: (9) pai(julio, _7182) ? creep
   Exit: (9) pai(julio, mario) ? creep
   Exit: (8) avo(roberto, mario) ? creep
Y = mario.

 Call: (8) azulejos(120, _5716) ? creep
   Call: (9) 120>0 ? creep
   Exit: (9) 120>0 ? creep
   Call: (9) _5942 is floor(sqrt(120)) ? creep
   Exit: (9) 10 is floor(sqrt(120)) ? creep
   Call: (9) _5954 is 120-10*10 ? creep
   Exit: (9) 20 is 120-10*10 ? creep
   Call: (9) azulejos(20, _5956) ? creep
   Call: (10) 20>0 ? creep
   Exit: (10) 20>0 ? creep
   Call: (10) _5962 is floor(sqrt(20)) ? creep
   Exit: (10) 4 is floor(sqrt(20)) ? creep
   Call: (10) _5974 is 20-4*4 ? creep
   Exit: (10) 4 is 20-4*4 ? creep
   Call: (10) azulejos(4, _5976) ? creep
   Call: (11) 4>0 ? creep
   Exit: (11) 4>0 ? creep
   Call: (11) _5982 is floor(sqrt(4)) ? creep
   Exit: (11) 2 is floor(sqrt(4)) ? creep
   Call: (11) _5994 is 4-2*2 ? creep
   Exit: (11) 0 is 4-2*2 ? creep
   Call: (11) azulejos(0, _5996) ? creep
   Exit: (11) azulejos(0, 0) ? creep
   Call: (11) _6000 is 1+0 ? creep
   Exit: (11) 1 is 1+0 ? creep
   Exit: (10) azulejos(4, 1) ? creep
   Call: (10) _6006 is 1+1 ? creep
   Exit: (10) 2 is 1+1 ? creep
   Exit: (9) azulejos(20, 2) ? creep
   Call: (9) _5716 is 1+2 ? creep
   Exit: (9) 3 is 1+2 ? creep
   Exit: (8) azulejos(120, 3) ? creep
A = 3 .



[trace]  ?- fat(3,3).
   Call: (8) fat(3, 3) ? creep
   Call: (9) 3>0 ? creep
   Exit: (9) 3>0 ? creep
   Call: (9) _5902 is 3+ -1 ? creep
   Exit: (9) 2 is 3+ -1 ? creep
   Call: (9) fat(2, _5904) ? creep
   Call: (10) 2>0 ? creep
   Exit: (10) 2>0 ? creep
   Call: (10) _5908 is 2+ -1 ? creep
   Exit: (10) 1 is 2+ -1 ? creep
   Call: (10) fat(1, _5910) ? creep
   Call: (11) 1>0 ? creep
   Exit: (11) 1>0 ? creep
   Call: (11) _5914 is 1+ -1 ? creep
   Exit: (11) 0 is 1+ -1 ? creep
   Call: (11) fat(0, _5916) ? creep
   Exit: (11) fat(0, 1) ? creep
   Call: (11) _5920 is 1*1 ? creep
   Exit: (11) 1 is 1*1 ? creep
   Exit: (10) fat(1, 1) ? creep
   Call: (10) _5926 is 2*1 ? creep
   Exit: (10) 2 is 2*1 ? creep
   Exit: (9) fat(2, 2) ? creep
   Call: (9) 3 is 3*2 ? creep
   Fail: (9) 3 is 3*2 ? creep
   Redo: (11) fat(0, _5916) ? creep
   Call: (12) 0>0 ? creep
   Fail: (12) 0>0 ? creep
   Fail: (11) fat(0, _5916) ? creep
   Fail: (10) fat(1, _5910) ? creep
   Fail: (9) fat(2, _5904) ? creep
   Fail: (8) fat(3, 3) ? creep
false.


[trace]  ?- fat(3,3).
   Call: (8) fat(3, 3) ? creep
   Call: (9) 3>0 ? creep
   Exit: (9) 3>0 ? creep
   Call: (9) _5902 is 3+ -1 ? creep
   Exit: (9) 2 is 3+ -1 ? creep
   Call: (9) fat(2, _5904) ? creep
   Call: (10) 2>0 ? creep
   Exit: (10) 2>0 ? creep
   Call: (10) _5908 is 2+ -1 ? creep
   Exit: (10) 1 is 2+ -1 ? creep
   Call: (10) fat(1, _5910) ? creep
   Call: (11) 1>0 ? creep
   Exit: (11) 1>0 ? creep
   Call: (11) _5914 is 1+ -1 ? creep
   Exit: (11) 0 is 1+ -1 ? creep
   Call: (11) fat(0, _5916) ? creep
   Exit: (11) fat(0, 1) ? creep
   Call: (11) _5920 is 1*1 ? creep
   Exit: (11) 1 is 1*1 ? creep
   Exit: (10) fat(1, 1) ? creep
   Call: (10) _5926 is 2*1 ? creep
   Exit: (10) 2 is 2*1 ? creep
   Exit: (9) fat(2, 2) ? creep
   Call: (9) 3 is 3*2 ? creep
   Fail: (9) 3 is 3*2 ? creep
   Redo: (11) fat(0, _5916) ? creep
   Call: (12) 0>0 ? creep
   Fail: (12) 0>0 ? creep
   Fail: (11) fat(0, _5916) ? creep
   Fail: (10) fat(1, _5910) ? creep
   Fail: (9) fat(2, _5904) ? creep
   Fail: (8) fat(3, 3) ? creep
false.

