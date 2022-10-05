//#include <stdio.h>
//#include <string.h>
#include "../include/libft.h"
char	*f(unsigned int a, char c);
int	*t(unsigned int x, char *s);

char	mapi(unsigned int n, char s)
{
	return (s + (n + 1) / (n + 1));
}

void	iteri(unsigned int n, char *s)
{
	(void)n;
	*s += 1;
}

int main()
{

	printf("MEMCPY START\n\n");
	char	ben[] = "furkan";
	char	o[] = "bukimya";

	ft_memcpy(o, ben, 3);

	printf("char deneme: %s\n", o);

	int	sr[] = {1,2,3,4,5};
	int	dt[] = {9,8,7,6,0};

	ft_memcpy(dt,sr,1);

	printf("int deneme: %d,%d,%d,%d,%d\n", dt[0],dt[1],dt[2],dt[3],dt[4]);
	printf("\n\n\nMEMCPY DONE\n\t\t\tMEMMOVE START\n\n\n");



	char	bu[] = "bukimya";
	ft_memmove(bu, bu + 1, 3);
	printf("ft_ dest > src:   %s\n", bu);
	char	yu[] = "bukimya";
	memmove(yu, yu + 1, 3);
	printf("ori_ dest < src:   %s\n", yu);
	char	su[] = "bukimya";
	ft_memmove(su + 1, su, 3);
	printf("ft_memmove test (dest > src):   %s\n", su);
	char	ku[] = "bukimya";
	memmove(ku + 1, ku, 3);
	printf("original memmove dest > src:   %s\n", ku);

	printf("\n\n\nMEMMOVE DONE\t\t\tSTRLCPY START\n\n\n");




	printf("dest: %s\n", bu);
	printf("src: %s\n", ben);
	int	deg;
	deg = ft_strlcpy(bu, ben, 0);
	printf("sonuc dest: %s\n", bu);
	printf("sonuç src: %s\n", ben);
	printf("return degeri: %d\n", deg);

	printf("\n\n nuıll deniyorum:\n");
	char	n1[0];
	char	n2[0];
	int	ni = ft_strlcpy(n2, n1, 5);
	printf("src: n1: %s\ndest: n2: %s\nreturn degeri: %d\n\n", n1, n2, ni);

	printf("asagisi orginal strlcpy\n");
	char	hop[] = "ukiimya";
	int	bud;
	printf("dest: %s\n", hop);
	printf("src: %s\n", ben);
//	bud = strlcpy(hop, ben, 4);
	printf("strlcpy yok la. nası oluyoır çözemedim şuanlık.\n");
	printf("sonuc dest: %s\n", hop);
	printf("sonuc src: %s\n", ben);
//	printf("return deg: %d\n", bud);
	
	
	printf("\n\n\n FT_STRLCPY  DONE\n\t\t\tFT_STRLEN START\n\n");


	printf("dizi: %s\n", hop);
	bud = ft_strlen(hop);
	printf("sonuc: %d", bud);
	
	
	printf("\n\n\n FT_STRLEN DONE\n\t\t\tSTRLCAT START\n\n\n");


	printf("originals:\ndest: %s, src: %s\nsize olarak 3 girecegim\n", hop, ben);
	bud = ft_strlcat(hop, ben, 3);
	printf("sonuc dest: %s\n", hop);
        printf("sonuc src: %s\n", ben);
        printf("return deg: %d\n", bud);
	
	
	printf("\n\n\n FT_STRLCAT  DONE\n\t\t\tTOLOWWER && TOUPPER START\n\n\n");


	char	l = 'a';
	char	u = 'A';
	ft_toupper(l);
	ft_tolower(u);
	printf("kucuk a buyumus mu  => %c\n",l);
	printf("buyuk A kuculmus mu => %c\n\n", u);



	printf("\n\n\nTOUPPER && TOLOWER DONE\n\t\t\tSTRCHR START\n\n\n");


	char azz[] = "ali veli kirkdokuz elli";
//	ft_strchr(azz, 'k');
	printf("metin: %s\n aranacak harf: k\n harfin dizideki adresi %p\n fok. sonucu: %p\n", azz, &azz[9], ft_strchr(azz, 'k'));



	printf("\n\n\nSTRCHR DONE\n\t\t\tSTRRCHR START\n\n\n");
	
	
	
	printf("metin: %s\n aranacak harf: r\n harfin dizideki adresi %p\n fok. sonucu: %p\n\n", azz, &azz[11], ft_strrchr(azz, 'r'));

	
	
	printf("\n\n\nSTRRCHR DONE\n\t\t\tSTRNCMP START\n\n\n");

	
	char	az[] = "ali veli ellidokuz altmis";
	printf("ilk dizi %s\nikinci dizi%s\n beklenen return pozitif\nreturn: %d\n\n", azz, az, ft_strncmp(azz, az, 50));

	
	printf("\n\n\nSTRNCMP DONE\n\t\t\tMEMCHR START\n\n\n");

	
	printf("metin: %s\n aranacak harf: k\n harfin dizideki adresi %p\n fok. sonucu: %p\n", azz, &azz[9], ft_memchr(azz, 'k', 12));

	
	printf("\n\n\nMEMCHR DONE\n\t\t\tMEMCMP START\n\n\n");
	
	
	printf("ilk dizi %s\nikinci dizi%s\n beklenen return pozitif\nreturn: %d\n\n", azz, az, ft_strncmp(azz, az, 50));


	printf("\n\n\nMEMCMP DONE\n\t\t\tSTRNSTR START\n\n\n");


	char elli[] = "elli";
	printf("big: %s\nlittle: %s\ndönmesi gereken değer: %p\ndönen değer %p\n",az, elli, &az[9], ft_strnstr(az, elli, 9));



	printf("\n\n\nSTRNSTR DONE\n\t\t\tATOI START\n\n\n");


	char	ato1[] = "  	 -35464345jlkjh";
	char	ato2[] = " 		935jkhg78";
	char	ato3[] = "l.k	453pil";
	char	ato4[] = "-gsgs78";
	char	ato5[] = "68543-jkd	";
	char	ato6[] = "-3334-ja";
	char	ato7[] = "  +534lşjukgkj";
	char	ato8[] = " --574kl";
	char	ato9[] = "  	++354ew";
	char	ato0[] = "  		37343";

	printf("1 =>\tbeklenen:\t-35464345\n\tgelen:\t\t%d\n",ft_atoi(ato1));
	printf("2 =>\tbeklenen:\t935\n\tgelen:\t\t%d\n",ft_atoi(ato2));
	printf("3 =>\tbeklenen:\t0\n\tgelen:\t\t%d\n",ft_atoi(ato3));
	printf("4 =>\tbeklenen:\t0\n\tgelen:\t\t%d\n",ft_atoi(ato4));
	printf("5 =>\tbeklenen:\t68543\n\tgelen:\t\t%d\n",ft_atoi(ato5));
	printf("6 =>\tbeklenen:\t-3334\n\tgelen:\t\t%d\n",ft_atoi(ato6));
	printf("7 =>\tbeklenen:\t534\n\tgelen:\t\t%d\n",ft_atoi(ato7));
	printf("8 =>\tbeklenen:\t0\n\tgelen:\t\t%d\n",ft_atoi(ato8));
	printf("9 =>\tbeklenen:\t0\n\tgelen:\t\t%d\n",ft_atoi(ato9));
	printf("10 =>\tbeklenen:\t37343\n\tgelen:\t\t%d\n",ft_atoi(ato0));


	printf("\n\n\nATOI DONE\n\t\t\tCALLOC START\n\n\n");


	int	*try;
	try = ft_calloc(7, sizeof(int));
	for(int i = 0; i < 9; i++)
		printf("%d. eleman:\t%d\n", i+1, try[i]);


	printf("\n\n\nCALLOC DONE\n\t\t\tSTRDUP START\n\n\n");

	char	*kazz;
	kazz = ft_strdup(azz);
	printf("giden dizi:\t%s\tadresi:\t%p\n",azz,&azz);
	printf("gelen dizi:\t%s\tadresi:\t%p\n",kazz,&kazz);


	printf("\n\nSTRDUP DONE\n\t\t\tSUBSTR START\n\n");

	printf("%s dizisinin 9. indisinden başlayıp 9 karakterli dizi oluşturalım\nbeklenen sonuc:\tkirkdokuz\ngelen sonuc:\t%s\n",azz, ft_substr(azz, 9, 9));


	printf("\n\n\nSUBSTR DONE\n\t\t\tSTRJOIN START\n\n\n");

	printf("azz uzunlugu:\t%ld\nkazz uzunlugu:\t%ld\ntop uzunluk:\t%ld\nson dizi:\t%s\n", ft_strlen(azz), ft_strlen(kazz), ft_strlen(ft_strjoin(azz,kazz)), ft_strjoin(azz,kazz));


	printf("\n\n\nSTRJOIN DONE\n\t\t\tSTRTRIM START\n\n\n");


	char	*trim;
	char	*trimt;
	char	dul[0];
	trim = ft_strtrim(azz, "aki");
	printf("s1 olarak ayarladigim dizi:\t%s\n", azz);
	printf("s1'in adresi:\t\t\t%p\n", &azz);
	printf("strtrim(azz, \"aki\") sonucu:\t%s\n",trim);
	printf("strtrim(azz, \"aki\") adresi:\t%p\n",trim);
	printf("s1 hala aynı mı ==?>>\t\t%s\n",azz);
	printf("s1 adresi ==?>>\t\t\t%p\n",&azz);

	printf("\n\t>>>asagisi s1'in null hali<<<\n");
	trimt = (ft_strtrim(dul, "aki"));
	printf("s1 olarak ayarladigim dizi:\t%s\n", dul);
        printf("s1'in adresi:\t\t\t%p\n", &dul);
        printf("strtrim(azz, \"aki\") sonucu:\t%s\n",trimt);
        printf("strtrim(azz, \"aki\") adresi:\t%p\n",trimt);
        printf("s1 hala aynı mı ==?>>\t\t%s\n",dul);
        printf("s1 adresi ==?>>\t\t\t%p\n",&dul);



	printf("\n\n\nSTRTRIM DONE\n\t\t\tSPLIT START\n\n\n");



	char	**splt;
	printf("parcalanacak dizi:\t%s\n", azz);
	printf("sperator:\t%c\n", 'i');
	splt = ft_split(azz, 'i');
	int	fd;
	fd = 0;
	while (splt[fd] != 0)
	{
		printf("dizi %d =>\t%s\n", fd + 1, splt[fd]);
		fd++;
	}



	printf("\n\n\nSPLIT DONE\n\t\t\tITOA START\n\n\n");


	int	uzunluk = 0;
	int	itoa;
	char	*ittoa;
	itoa = 2143648;
	ittoa = ft_itoa(itoa);
	while(ittoa[uzunluk] != '\0')
		uzunluk++;
	printf("itoa:\t\t%d\nittoa:\t\t%s\nuzunluk:\t%d\n", itoa, ittoa, uzunluk);








	printf("\n\n\nITOA DONE\n\t\t\tSTRMAPI START\n\n\n");




	printf("%s\n", ft_strmapi("yahubune", mapi));




	printf("\n\n\nSTRMAPI DONE\n\t\t\tSTRITERI START\n\n\n");	



	char	zum[] = "agu";
	printf("önce:\t%s\n",zum);
	ft_striteri(zum, iteri);
	printf("sonra:\t%s\n",zum);



	printf("\n\n\nSTRITERI DONE\n\t\t\tPUTCHAR_FD START\n\n\n");


	 ft_putchar_fd('f', 1);
	 printf("\n");
	 ft_putchar_fd('a', 2);
	 printf("\n");
	 ft_putchar_fd('b',  0);
	 printf("\n");
	 ft_putchar_fd('d', 3);
	 printf("\n");


	 printf("\n\n\nPUTCHAR_FD DONE\n\t\t\tPUTSTR_FD START\n\n\n");



	 printf("putstr_fd \"%s\" yazmalı\nsonuc:\n", azz);
	 ft_putstr_fd(azz,6);  //fd değer,n, degistirip dene.
	 printf("\n");




	 printf("\n\n\nPUTSTR_FD DONE\n\t\t\tPUTENDL_FD START\n\n\n");



	 printf("putendle_fd \"%s\" yazmalı\nsonuc:\n", azz);
         ft_putendl_fd(azz,1);  //fd değer,n, degistirip dene.


	 printf("\n\n\nPUTENDLE_FD DONE\n\t\t\tPUTNBR_FD START\n\n\n");




	 ft_putnbr_fd(87354, 1);
	 printf("\n");

	printf("\n\n\nPUTNBR_FD DONE\n\t\t\tALL WORKS DONE\n\n\n");


	for (int adssvf = 0; adssvf < 5; adssvf++)
	{
		for (int oglf = 0; oglf < 27; oglf++)
			printf("·");
		printf("\n");
	}
	printf(" FROM NOW ON ALL IS BONUS\n");

	for (int adssvf = 0; adssvf < 5; adssvf++)
        {
                for (int oglf = 0; oglf < 27; oglf++)
                        printf("·");
                printf("\n");
        }







	return(0);
}
