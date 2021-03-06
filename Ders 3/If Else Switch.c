/*                                                                                                                                                                                                                                                                                                                 
-------------------------------------------------------------------------------
*	Name: Ders 2 -  if Else Switch Statements
*	Copyright: Copyrighted by IEEE METU NCC
*	Author: Ahmet Yi�it YOL
*	Date: 26.10.15
*	Description: 
*	The third class of basic C programming tutorial in METU NCC.
*	Comments are Turkish.
*	This course organized by IEEE METU NCC SB- Computer Society subcommittee. 
-------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

/* Program i�erisindeki b�t�n sorular ve ��z�mleri yorum sat�rlar� i�ine
al�nm��t�r. 

�lgili b�l�m�n ba�� ve sonundaki slash ve y�ld�z karakterlerini silerek
yan�t kodlar�n� test edebilirsiniz.
*/

/*
 _______  _______  ______    __   __  ____  
                                           /$$  
                                         /$$$$  
  /$$$$$$$  /$$$$$$   /$$$$$$  /$$   /$$|_  $$  
 /$$_____/ /$$__  $$ /$$__  $$| $$  | $$  | $$  
|  $$$$$$ | $$  \ $$| $$  \__/| $$  | $$  | $$  
 \____  $$| $$  | $$| $$      | $$  | $$  | $$  
 /$$$$$$$/|  $$$$$$/| $$      |  $$$$$$/ /$$$$$$
|_______/  \______/ |__/       \______/ |______/
 Bir araban�n h�z�n� kullan�c�dan alan ve h�z de�erine g�re arac�n nas�l gitti�ini s�yleyen program� yaz�n. 
 1. H�z > 10, �ok yava� 
 2. H�z > 30, yava� 
 3. H�z > 50, orta 
 4. H�z > 70, h�zl� 
 5. H�z > 90, �ok h�zl�
*/

/* YANIT BIR ICIN BU SATIRI SIL ------------------------------------------------------

	float hiz = 0.00; // arac�n h�z� i�in kullan�lacak de�i�ken.
	
	printf("Lutfen aracinizin hizini giriniz (hiz siniri 90) : ");
	scanf("%f", &hiz);
	
	if (hiz<0.00){ // ters yonde gitme kontrolu (ters yonde ise hizi negatif girecektir)
		printf("Ters yonde gidiyorsunuz.\n");
		hiz *=-1;
	}
	
	if(hiz<10){
		printf("Cok yavas.");
	}
	else if(hiz<30){
		printf("Yavas.");
	}
	else if(hiz<50){
		printf("Orta.");
	}
	else if(hiz<50){
		printf("Hizli.");
	}
	else if(hiz<=90){
		printf("Cok hizli.");
	}
	else{
		printf("Hiz sinirini gectiniz");
	}
	//sample run 1 result : Lutfen aracinizin hizini giriniz (hiz siniri 90) : 90  Cok hizli.
	//sample run 2 result : Lutfen aracinizin hizini giriniz (hiz siniri 90) : 100 Hiz sinirini gectiniz
	//sample run 1 result : Lutfen aracinizin hizini giriniz (hiz siniri 90) : -20 Ters yonde gidiyorsunuz. Yavas.
YANIT BIR ICIN BU SATIRI SIL ------------------------------------------------------*/ 


/*
                                          /$$$$$$ 
                                         /$$__  $$
  /$$$$$$$  /$$$$$$   /$$$$$$  /$$   /$$|__/  \ $$
 /$$_____/ /$$__  $$ /$$__  $$| $$  | $$  /$$$$$$/
|  $$$$$$ | $$  \ $$| $$  \__/| $$  | $$ /$$____/ 
 \____  $$| $$  | $$| $$      | $$  | $$| $$      
 /$$$$$$$/|  $$$$$$/| $$      |  $$$$$$/| $$$$$$$$
|_______/  \______/ |__/       \______/ |________/
                                                  
 Kullan�c�dan (x,y) �eklinde kordinat�n� alan ve kordinat�n 
 ka��nc� b�lgede oldu�unu yazd�ran program� yaz�n. 
 
 */
 
/* YANIT IKI ICIN BU SATIRI SIL ------------------------------------------------------
YANIT IKI ICIN BU SATIRI SIL ------------------------------------------------------*/ 

	float x=0.00, y=0.00;
	printf("Lutfen koordinatlari giriniz Format(x,y) : ");
	scanf("%f %f", &x, &y);
	
	if(x == 0.00 && y == 0.00){//eger x = 0 ve y = 0		
		printf("Koordinatlar orjinde.");
	}
	else if(x == 0.00){
		printf("Koordinatlar Y dogrusu uzerinde.");
	}
	else if(y = 0.00){
		printf("Koordinatlar X dogrusu uzerinde.");
	}
	else if (x > 0.00 && y > 0.00){
		printf("Koordinatlar 1. bolgede.");
	}
	else if (x < 0.00 && y > 0.00){
		printf("Koordinatlar 2. bolgede.");
	}
	else if (x < 0.00 && y < 0.00){
		printf("Koordinatlar 3. bolgede.");
	}
	else{
		printf("Koordinatlar 4. bolgede.");
	}

 /*
                                          /$$$$$$ 
                                         /$$__  $$
  /$$$$$$$  /$$$$$$   /$$$$$$  /$$   /$$|__/  \ $$
 /$$_____/ /$$__  $$ /$$__  $$| $$  | $$   /$$$$$/
|  $$$$$$ | $$  \ $$| $$  \__/| $$  | $$  |___  $$
 \____  $$| $$  | $$| $$      | $$  | $$ /$$  \ $$
 /$$$$$$$/|  $$$$$$/| $$      |  $$$$$$/|  $$$$$$/
|_______/  \______/ |__/       \______/  \______/ 
                                                
  A�a��daki form�lleri kullanarak hacmi ve alan� hesaplayan C program� 
  yaz�n�z. Yazd���n�z program� �u de�erler ile test ediniz: 1, 6, 12.2, 0,2. ( Float veri tipi )
	a. V= 4/3 PI r3 
	b. A= 4 PI r2
 */

 /* YANIT UC ICIN BU SATIRI SIL ------------------------------------------------------

	float r = 0; // yaricap degiskeni.
	float pi = 3.1416;	// pi degeri. bu pi degeri her float degiskeni gibi ram'de 8 byte yer kapliyor.
	float alan = 0;		
	float hacim = 0; 
		
	printf("Yaricap degerini giriniz : ");
	scanf("%f", &r);

	
	hacim = (4.00/3.00)*pi*r*r*r; //K�renin hacminin hesapland��� sat�r.
	alan = 4*pi*r*r; // K�renin alan�n�n hesapland��� sat�r.
	printf("%.2f yaricapina sahip bir kurenin hacmi %.2f ve alani %.2f'dir.", r, hacim, alan);
	//sample run  result : 3.10 yaricapina sahip bir kurenin hacmi 124.79 ve alani 120.76'dir.
YANIT UC ICIN BU SATIRI SIL ------------------------------------------------------*/ 

 /*
                                         /$$   /$$
                                        | $$  | $$
  /$$$$$$$  /$$$$$$   /$$$$$$  /$$   /$$| $$  | $$
 /$$_____/ /$$__  $$ /$$__  $$| $$  | $$| $$$$$$$$
|  $$$$$$ | $$  \ $$| $$  \__/| $$  | $$|_____  $$
 \____  $$| $$  | $$| $$      | $$  | $$      | $$
 /$$$$$$$/|  $$$$$$/| $$      |  $$$$$$/      | $$
|_______/  \______/ |__/       \______/       |__/
                                                 
  Yazd���n�z programda PI de�erini sabit bir de�er olarak tan�mlay�n�z. ( #define )
 
 */
 
 /* YANIT DORT ICIN BU SATIRI SIL ------------------------------------------------------
 
 //sat�r 16'da #define PI 3.1416 yaz�yor. Bu program i�inde herhangi bir yerde PI yazd���n�zda
 //otomatik olarak 3.1416 yaz�lmas�na olanak sa�l�yor. Bu sayede ram'de herhangi bir yer harcam�yoruz fakat
 //program i�inde tekrar PI de�erini de�i�tirme �ans�m�z kalm�yor. K�sacas� #define yap�s� de�i�mez, sabit ifadelere
 //(macrolara) kullan�l�r. Program �al���rken bir de�i�ken gibi #define'dan sonra yazan ifadeyi de�i�tirme �ans�m�z yok!
 	float r = 0; // yaricap degiskeni.
	//float pi = 3.1416;	art�k bu de�ere ihtiyac�m�z yok ��nk� 16. sat�rda #define PI 3.1416 yazd�k.
	float alan = 0;		
	float hacim = 0; 
		
	printf("Yaricap degerini giriniz : ");
	scanf("%f", &r);
	
	
	hacim = (4.00/3.00)*PI*r*r*r; //K�renin hacminin hesapland��� sat�r.
	alan = 4*PI*r*r; // K�renin alan�n�n hesapland��� sat�r.
	printf("%.2f yaricapina sahip bir kurenin hacmi %.2f ve alani %.2f'dir.", r, hacim, alan);
	//sample run  result : 3.10 yaricapina sahip bir kurenin hacmi 124.79 ve alani 120.76'dir.
 YANIT DORT ICIN BU SATIRI SIL ------------------------------------------------------*/ 

 
 
 return 0;
}



/*
                                                                                                                                                                                                                                                                                                                           
IIIIIIIIIIEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE     MMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEETTTTTTTTTTTTTTTTTTTTTTTUUUUUUUU     UUUUUUUU     NNNNNNNN        NNNNNNNN        CCCCCCCCCCCCC        CCCCCCCCCCCCC                                                                    
I::::::::IE::::::::::::::::::::EE::::::::::::::::::::EE::::::::::::::::::::E     M:::::::M             M:::::::ME::::::::::::::::::::ET:::::::::::::::::::::TU::::::U     U::::::U     N:::::::N       N::::::N     CCC::::::::::::C     CCC::::::::::::C                                                                    
I::::::::IE::::::::::::::::::::EE::::::::::::::::::::EE::::::::::::::::::::E     M::::::::M           M::::::::ME::::::::::::::::::::ET:::::::::::::::::::::TU::::::U     U::::::U     N::::::::N      N::::::N   CC:::::::::::::::C   CC:::::::::::::::C                                                                    
II::::::IIEE::::::EEEEEEEEE::::EEE::::::EEEEEEEEE::::EEE::::::EEEEEEEEE::::E     M:::::::::M         M:::::::::MEE::::::EEEEEEEEE::::ET:::::TT:::::::TT:::::TUU:::::U     U:::::UU     N:::::::::N     N::::::N  C:::::CCCCCCCC::::C  C:::::CCCCCCCC::::C                                                                    
  I::::I    E:::::E       EEEEEE  E:::::E       EEEEEE  E:::::E       EEEEEE     M::::::::::M       M::::::::::M  E:::::E       EEEEEETTTTTT  T:::::T  TTTTTT U:::::U     U:::::U      N::::::::::N    N::::::N C:::::C       CCCCCC C:::::C       CCCCCC                                                                    
  I::::I    E:::::E               E:::::E               E:::::E                  M:::::::::::M     M:::::::::::M  E:::::E                     T:::::T         U:::::D     D:::::U      N:::::::::::N   N::::::NC:::::C              C:::::C                                                                                  
  I::::I    E::::::EEEEEEEEEE     E::::::EEEEEEEEEE     E::::::EEEEEEEEEE        M:::::::M::::M   M::::M:::::::M  E::::::EEEEEEEEEE           T:::::T         U:::::D     D:::::U      N:::::::N::::N  N::::::NC:::::C              C:::::C                                                                                  
  I::::I    E:::::::::::::::E     E:::::::::::::::E     E:::::::::::::::E        M::::::M M::::M M::::M M::::::M  E:::::::::::::::E           T:::::T         U:::::D     D:::::U      N::::::N N::::N N::::::NC:::::C              C:::::C                                                                                  
  I::::I    E:::::::::::::::E     E:::::::::::::::E     E:::::::::::::::E        M::::::M  M::::M::::M  M::::::M  E:::::::::::::::E           T:::::T         U:::::D     D:::::U      N::::::N  N::::N:::::::NC:::::C              C:::::C                                                                                  
  I::::I    E::::::EEEEEEEEEE     E::::::EEEEEEEEEE     E::::::EEEEEEEEEE        M::::::M   M:::::::M   M::::::M  E::::::EEEEEEEEEE           T:::::T         U:::::D     D:::::U      N::::::N   N:::::::::::NC:::::C              C:::::C                                                                                  
  I::::I    E:::::E               E:::::E               E:::::E                  M::::::M    M:::::M    M::::::M  E:::::E                     T:::::T         U:::::D     D:::::U      N::::::N    N::::::::::NC:::::C              C:::::C                                                                                  
  I::::I    E:::::E       EEEEEE  E:::::E       EEEEEE  E:::::E       EEEEEE     M::::::M     MMMMM     M::::::M  E:::::E       EEEEEE        T:::::T         U::::::U   U::::::U      N::::::N     N:::::::::N C:::::C       CCCCCC C:::::C       CCCCCC                                                                    
II::::::IIEE::::::EEEEEEEE:::::EEE::::::EEEEEEEE:::::EEE::::::EEEEEEEE:::::E     M::::::M               M::::::MEE::::::EEEEEEEE:::::E      TT:::::::TT       U:::::::UUU:::::::U      N::::::N      N::::::::N  C:::::CCCCCCCC::::C  C:::::CCCCCCCC::::C                                                                    
I::::::::IE::::::::::::::::::::EE::::::::::::::::::::EE::::::::::::::::::::E     M::::::M               M::::::ME::::::::::::::::::::E      T:::::::::T        UU:::::::::::::UU       N::::::N       N:::::::N   CC:::::::::::::::C   CC:::::::::::::::C                                                                    
I::::::::IE::::::::::::::::::::EE::::::::::::::::::::EE::::::::::::::::::::E     M::::::M               M::::::ME::::::::::::::::::::E      T:::::::::T          UU:::::::::UU         N::::::N        N::::::N     CCC::::::::::::C     CCC::::::::::::C                                                                    
IIIIIIIIIIEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE     MMMMMMMM               MMMMMMMMEEEEEEEEEEEEEEEEEEEEEE      TTTTTTTTTTT            UUUUUUUUU           NNNNNNNN         NNNNNNN        CCCCCCCCCCCCC        CCCCCCCCCCCCC                                                                    
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
        CCCCCCCCCCCCC     OOOOOOOOO     MMMMMMMM               MMMMMMMMPPPPPPPPPPPPPPPPP   UUUUUUUU     UUUUUUUUTTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR           SSSSSSSSSSSSSSS      OOOOOOOOO             CCCCCCCCCCCCCIIIIIIIIIIEEEEEEEEEEEEEEEEEEEEEETTTTTTTTTTTTTTTTTTTTTTTYYYYYYY       YYYYYYY
     CCC::::::::::::C   OO:::::::::OO   M:::::::M             M:::::::MP::::::::::::::::P  U::::::U     U::::::UT:::::::::::::::::::::TE::::::::::::::::::::ER::::::::::::::::R        SS:::::::::::::::S   OO:::::::::OO        CCC::::::::::::CI::::::::IE::::::::::::::::::::ET:::::::::::::::::::::TY:::::Y       Y:::::Y
   CC:::::::::::::::C OO:::::::::::::OO M::::::::M           M::::::::MP::::::PPPPPP:::::P U::::::U     U::::::UT:::::::::::::::::::::TE::::::::::::::::::::ER::::::RRRRRR:::::R      S:::::SSSSSS::::::S OO:::::::::::::OO    CC:::::::::::::::CI::::::::IE::::::::::::::::::::ET:::::::::::::::::::::TY:::::Y       Y:::::Y
  C:::::CCCCCCCC::::CO:::::::OOO:::::::OM:::::::::M         M:::::::::MPP:::::P     P:::::PUU:::::U     U:::::UUT:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::ERR:::::R     R:::::R     S:::::S     SSSSSSSO:::::::OOO:::::::O  C:::::CCCCCCCC::::CII::::::IIEE::::::EEEEEEEEE::::ET:::::TT:::::::TT:::::TY::::::Y     Y::::::Y
 C:::::C       CCCCCCO::::::O   O::::::OM::::::::::M       M::::::::::M  P::::P     P:::::P U:::::U     U:::::U TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEE  R::::R     R:::::R     S:::::S            O::::::O   O::::::O C:::::C       CCCCCC  I::::I    E:::::E       EEEEEETTTTTT  T:::::T  TTTTTTYYY:::::Y   Y:::::YYY
C:::::C              O:::::O     O:::::OM:::::::::::M     M:::::::::::M  P::::P     P:::::P U:::::D     D:::::U         T:::::T          E:::::E               R::::R     R:::::R     S:::::S            O:::::O     O:::::OC:::::C                I::::I    E:::::E                     T:::::T           Y:::::Y Y:::::Y   
C:::::C              O:::::O     O:::::OM:::::::M::::M   M::::M:::::::M  P::::PPPPPP:::::P  U:::::D     D:::::U         T:::::T          E::::::EEEEEEEEEE     R::::RRRRRR:::::R       S::::SSSS         O:::::O     O:::::OC:::::C                I::::I    E::::::EEEEEEEEEE           T:::::T            Y:::::Y:::::Y    
C:::::C              O:::::O     O:::::OM::::::M M::::M M::::M M::::::M  P:::::::::::::PP   U:::::D     D:::::U         T:::::T          E:::::::::::::::E     R:::::::::::::RR         SS::::::SSSSS    O:::::O     O:::::OC:::::C                I::::I    E:::::::::::::::E           T:::::T             Y:::::::::Y     
C:::::C              O:::::O     O:::::OM::::::M  M::::M::::M  M::::::M  P::::PPPPPPPPP     U:::::D     D:::::U         T:::::T          E:::::::::::::::E     R::::RRRRRR:::::R          SSS::::::::SS  O:::::O     O:::::OC:::::C                I::::I    E:::::::::::::::E           T:::::T              Y:::::::Y      
C:::::C              O:::::O     O:::::OM::::::M   M:::::::M   M::::::M  P::::P             U:::::D     D:::::U         T:::::T          E::::::EEEEEEEEEE     R::::R     R:::::R            SSSSSS::::S O:::::O     O:::::OC:::::C                I::::I    E::::::EEEEEEEEEE           T:::::T               Y:::::Y       
C:::::C              O:::::O     O:::::OM::::::M    M:::::M    M::::::M  P::::P             U:::::D     D:::::U         T:::::T          E:::::E               R::::R     R:::::R                 S:::::SO:::::O     O:::::OC:::::C                I::::I    E:::::E                     T:::::T               Y:::::Y       
 C:::::C       CCCCCCO::::::O   O::::::OM::::::M     MMMMM     M::::::M  P::::P             U::::::U   U::::::U         T:::::T          E:::::E       EEEEEE  R::::R     R:::::R                 S:::::SO::::::O   O::::::O C:::::C       CCCCCC  I::::I    E:::::E       EEEEEE        T:::::T               Y:::::Y       
  C:::::CCCCCCCC::::CO:::::::OOO:::::::OM::::::M               M::::::MPP::::::PP           U:::::::UUU:::::::U       TT:::::::TT      EE::::::EEEEEEEE:::::ERR:::::R     R:::::R     SSSSSSS     S:::::SO:::::::OOO:::::::O  C:::::CCCCCCCC::::CII::::::IIEE::::::EEEEEEEE:::::E      TT:::::::TT             Y:::::Y       
   CC:::::::::::::::C OO:::::::::::::OO M::::::M               M::::::MP::::::::P            UU:::::::::::::UU        T:::::::::T      E::::::::::::::::::::ER::::::R     R:::::R     S::::::SSSSSS:::::S OO:::::::::::::OO    CC:::::::::::::::CI::::::::IE::::::::::::::::::::E      T:::::::::T          YYYY:::::YYYY    
     CCC::::::::::::C   OO:::::::::OO   M::::::M               M::::::MP::::::::P              UU:::::::::UU          T:::::::::T      E::::::::::::::::::::ER::::::R     R:::::R     S:::::::::::::::SS    OO:::::::::OO        CCC::::::::::::CI::::::::IE::::::::::::::::::::E      T:::::::::T          Y:::::::::::Y    
        CCCCCCCCCCCCC     OOOOOOOOO     MMMMMMMM               MMMMMMMMPPPPPPPPPP                UUUUUUUUU            TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRR      SSSSSSSSSSSSSSS        OOOOOOOOO             CCCCCCCCCCCCCIIIIIIIIIIEEEEEEEEEEEEEEEEEEEEEE      TTTTTTTTTTT          YYYYYYYYYYYYY    
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                             
 222222222222222         000000000       1111111   555555555555555555                                                                                                                                                                                                                                                        
2:::::::::::::::22     00:::::::::00    1::::::1   5::::::::::::::::5                                                                                                                                                                                                                                                        
2::::::222222:::::2  00:::::::::::::00 1:::::::1   5::::::::::::::::5                                                                                                                                                                                                                                                        
2222222     2:::::2 0:::::::000:::::::0111:::::1   5:::::555555555555                                                                                                                                                                                                                                                        
            2:::::2 0::::::0   0::::::0   1::::1   5:::::5                                                                                                                                                                                                                                                                   
            2:::::2 0:::::0     0:::::0   1::::1   5:::::5                                                                                                                                                                                                                                                                   
         2222::::2  0:::::0     0:::::0   1::::1   5:::::5555555555                                                                                                                                                                                                                                                          
    22222::::::22   0:::::0 000 0:::::0   1::::l   5:::::::::::::::5                                                                                                                                                                                                                                                         
  22::::::::222     0:::::0 000 0:::::0   1::::l   555555555555:::::5                                                                                                                                                                                                                                                        
 2:::::22222        0:::::0     0:::::0   1::::l               5:::::5                                                                                                                                                                                                                                                       
2:::::2             0:::::0     0:::::0   1::::l               5:::::5                                                                                                                                                                                                                                                       
2:::::2             0::::::0   0::::::0   1::::l   5555555     5:::::5                                                                                                                                                                                                                                                       
2:::::2       2222220:::::::000:::::::0111::::::1115::::::55555::::::5                                                                                                                                                                                                                                                       
2::::::2222222:::::2 00:::::::::::::00 1::::::::::1 55:::::::::::::55                                                                                                                                                                                                                                                        
2::::::::::::::::::2   00:::::::::00   1::::::::::1   55:::::::::55                                                                                                                                                                                                                                                          
22222222222222222222     000000000     111111111111     555555555                                                                                                                                                                                                                                                            
                                                                       
*/
