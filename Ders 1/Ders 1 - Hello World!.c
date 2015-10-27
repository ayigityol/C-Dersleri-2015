/*
-------------------------------------------------------------------------------
*	Name: Ders 1 - Hello World!
*	Copyright: Copyrighted by IEEE METU NCC
*	Author: Ahmet Yiðit YOL
*	Date: 20.10.15
*	Description: 
*	The first class of basic C programming tutorial in METU NCC.
*	Comments are Turkish.
*	This course organized by IEEE METU NCC SB- Computer Society subcommittee. 
-------------------------------------------------------------------------------
*/


//bu tek satýrlýk bir yorum


/*bu çok satýrlýk bir
yorum dizisi */


#include <stdio.h> // standart input output kütüphanesi.
#include <stdlib.h>  // standart fonksiyon kütüphanesi.


int main(){ //iþletim sisteminin programý okumaya baþladýðý nokta.

	printf("Hello World!"); // ekrana Hello World! yazdýr.
	
	/*
		
	programýmýzý yazdýðýmýz bölge burasý(27-37. satýr arasý.)
	
	*/
	
	
	return 0;//iþletim sistemine programýn hatasýz çalýþtýðýný belirttiðimiz kod.
	
	//bu satýrýn altýna kod yazarsanýz return 0; yüzünden hiçbir zaman çalýþmayacaktýr.
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
