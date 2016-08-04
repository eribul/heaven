%Macro codehell3(inddata,uddata);
 /******************************************************
  Inddata er data fra lpr med diagnoser og inddto/uddto
  Alle indl�ggelser fra et forl�b - overlappende intervaller
  samles til en indl�ggelse igen defineret ved inddto/uddto
  Der tages ikke h�jde for afdelinger og specialer der er fjernet.
  Hvis de inkluderes bliver det systematisk fra sidste indl�ggelse
  diagnosen fra hver forl�b inkluderes som variabel
  Uddata er det komprimerede datas�t - kan v�re identisk med inddata  
*******************************************************/
 proc sort data=&inddata; by pnr inddto; run;  data &uddata; set &inddata;
  by pnr;
  retain ind2 ud2 pttype;
  drop inddto uddto afd sgh spec recnum;
  rename ind2=inddto ud2=uddto;  
   *Er vi p� den f�rste record af en patient.  Der skal IKKE outputtes, blot s�ttes gemmev�rdier af datoer;
   if first.pnr then
    do;
     ind2=inddto; ud2=uddto; 
	 pttype=10;
     end;
	if pattype=0 then pttype=0;
   *Specialekoder;
  *Er vi startet p� et nyt forl�b og skal outputte det forrige;
   if inddto>ud2 and ud2 ne . then 
    do;
     output; 
     ind2=inddto; ud2=uddto;
    end;
  *Er der overlap mellem record defineret ved inddto/uddto og ind2/ud2 - s� justeres datoer;
   if inddto<=ud2 and inddto ne . then ud2=max(ud2,uddto);
   if last.pnr then output;
  format inddto uddto ind2 ud2 date8.;
 run;
%mend;

%codehell3(pop,pop2);



