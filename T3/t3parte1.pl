
azulejos(0,0).
azulejos(Na,Nq) :-
   Na > 0,
   Q is floor(sqrt(Na)),
   R is Na - Q*Q,
   azulejos(R,C),
   Nq is 1 + C.
   
   fat(0,1). 
   fat(N,F) :-      
	N > 0,    Aux is N-1,    fat(Aux, M),    F is N*M.