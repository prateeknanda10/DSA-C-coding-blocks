#INCLUDE<IOSTREAM>
USING NAMESPACE STD;
INT FINDZEROES(INT N) {
INT ANS =0;
FOR  (INT D =0; N/D >=1; D=D*5) {
ANS = ANS + N/D;
}
RETURN ANS;
 }

INT MAIN( )  {

LONG LONG INT N;
CIN>>N;

CO
UT<< FINDZEROES(N) <<ENDL;
RETURN 0 ;
}


