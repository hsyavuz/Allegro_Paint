#include <allegro.h>
#include <math.h>

void Baslat();
void Bitir();

struct Koordinat
{
	int x;
	int y;
};
Koordinat koordinat[2];

void MouseBilgi(int *XKoordinat, int *YKoordinat) {

	*XKoordinat = mouse_x-10;
	*YKoordinat = mouse_y-83;

}

void renk(int * Kirmizi, int *Yesil, int *Mavi) {
	if (mouse_x > 49 && mouse_y > 45 && mouse_x < 806 && mouse_y < 69 && (mouse_b & 1)) {
		//lavanta
		if (mouse_x > 49 && mouse_y > 45 && mouse_x < 84 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 200;
			*Yesil = 191;
			*Mavi = 231;
		}
		//mavi gri
		else if (mouse_x > 86 && mouse_y > 45 && mouse_x < 122 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 112;
			*Yesil = 146;
			*Mavi = 190;
		}
		//açık turkuaz
		else if (mouse_x > 124 && mouse_y > 45 && mouse_x < 160 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 153;
			*Yesil = 217;
			*Mavi = 234;
		}
		//limon yesili
		else if (mouse_x > 162 && mouse_y > 45 && mouse_x < 198 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 181;
			*Yesil = 230;
			*Mavi = 29;
		}
		//acık sarı
		else if (mouse_x > 201 && mouse_y > 45 && mouse_x < 236 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 239;
			*Yesil = 228;
			*Mavi = 176;
		}
		//altın
		else if (mouse_x > 239 && mouse_y > 45 && mouse_x < 274 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 255;
			*Yesil = 201;
			*Mavi = 14;
		}
		//pembe
		else if (mouse_x > 276 && mouse_y > 45 && mouse_x < 311 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 255;
			*Yesil = 174;
			*Mavi = 201;
		}
		//kahverengi
		else if (mouse_x > 314 && mouse_y > 45 && mouse_x < 349 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 185;
			*Yesil = 122;
			*Mavi = 84;
		}
		//gri 25
		else if (mouse_x > 351 && mouse_y > 45 && mouse_x < 387 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 195;
			*Yesil = 195;
			*Mavi = 195;
		}
		//beyaz
		else if (mouse_x > 390 && mouse_y > 45 && mouse_x < 426 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 255;
			*Yesil = 255;
			*Mavi = 255;
		}
		//mor
		else if (mouse_x > 428 && mouse_y > 45 && mouse_x < 463 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 163;
			*Yesil = 73;
			*Mavi = 164;
		}
		//civit
		else if (mouse_x > 465 && mouse_y > 45 && mouse_x < 501 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 63;
			*Yesil = 72;
			*Mavi = 204;
		}
		//turkuaz
		else if (mouse_x > 504 && mouse_y > 45 && mouse_x < 539 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 0;
			*Yesil = 162;
			*Mavi = 232;
		}
		//yesil
		else if (mouse_x > 542 && mouse_y > 45 && mouse_x < 577 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 34;
			*Yesil = 177;
			*Mavi = 76;
		}
		//sarı
		else if (mouse_x > 580 && mouse_y > 45 && mouse_x < 615 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 255;
			*Yesil = 242;
			*Mavi = 0;
		}
		//tturuncu
		else if (mouse_x > 618 && mouse_y > 45 && mouse_x < 653 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 255;
			*Yesil = 127;
			*Mavi = 39;
		}
		//kırmızı
		else if (mouse_x > 656 && mouse_y > 45 && mouse_x < 691 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 237;
			*Yesil = 28;
			*Mavi = 36;
		}
		//koyu kırmızı
		else if (mouse_x > 693 && mouse_y > 45 && mouse_x < 729 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 136;
			*Yesil = 0;
			*Mavi = 21;
		}
		//gri 50
		else if (mouse_x > 731 && mouse_y > 45 && mouse_x < 767 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 127;
			*Yesil = 127;
			*Mavi = 127;
		}
		//siyah
		else if (mouse_x > 770 && mouse_y > 45 && mouse_x < 806 && mouse_y < 69 && (mouse_b & 1)) {
			*Kirmizi = 0;
			*Yesil = 0;
			*Mavi = 0;
		}
	}
}

void Kalem( BITMAP *CizimAlani,BITMAP * AraKatman) {

	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	while ( !key[KEY_SPACE])
	{	
		renk(&kirmizi, &yesil, &mavi);
		MouseBilgi(&XKoordinat, &YKoordinat);
		if(mouse_b & 1){
			circlefill(CizimAlani, XKoordinat, YKoordinat, 3, makeacol(kirmizi, yesil, mavi , -1));
		}

		blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
		blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
	}
	
	
}
void Silgi(BITMAP *CizimAlani, BITMAP * AraKatman) {

	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	while (!key[KEY_SPACE])
	{
		
		MouseBilgi(&XKoordinat, &YKoordinat);
		if (mouse_b & 1) {
			circlefill(CizimAlani, XKoordinat, YKoordinat, 10, makeacol(255, 255, 255, -1));
		}

		blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
		blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
	}


}

void CizgiCiz(BITMAP *CizimAlani, BITMAP * AraKatman) {
	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	int sayac = 0;

	while (!key[KEY_SPACE]) {

		for (int i = 0; i < 2;)
		{
			renk(&kirmizi, &yesil, &mavi);
			MouseBilgi(&XKoordinat, &YKoordinat);
			if (key[KEY_SPACE]) {
				break;
			}
			
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 1) && i == 0) 
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				i++;
				sayac++;

			}
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 2) && i == 1)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				sayac++;
				i++;
			}
			if (sayac == 2)
			{
				fastline(CizimAlani, koordinat[0].x, koordinat[0].y, koordinat[1].x, koordinat[1].y, makeacol(kirmizi, yesil, mavi, -1));
				blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
				blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
				sayac = 0;

			}
		}
	}
	
	
}

void UcgenCiz(BITMAP *CizimAlani, BITMAP * AraKatman) {
	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	int sayac = 0;

	while (!key[KEY_SPACE]) {

		for (int i = 0; i < 3;)
		{
			renk(&kirmizi, &yesil, &mavi);
			MouseBilgi(&XKoordinat, &YKoordinat);
			if (key[KEY_SPACE]) {
				break;
			}
			//((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) & 1)
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 1)&& !(mouse_b&2) && i == 0)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				i++;
				sayac++;

			}
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 2) && !(mouse_b & 1) && i == 1)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				sayac++;
				i++;
			}
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 1)&&(mouse_b&2) && i == 2)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				i++;
				sayac++;

			}
			if (sayac == 3)
			{
				triangle(CizimAlani, koordinat[0].x, koordinat[0].y, koordinat[1].x, koordinat[1].y, koordinat[2].x, koordinat[2].y, makeacol(kirmizi, yesil, mavi, -1));
				blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
				blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
				sayac = 0;

			}
		}
	}


}

void KareCiz(BITMAP *CizimAlani, BITMAP * AraKatman) {
	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	int sayac = 0;

	while (!key[KEY_SPACE]) {

		for (int i = 0; i < 2;)
		{
			renk(&kirmizi, &yesil, &mavi);
			MouseBilgi(&XKoordinat, &YKoordinat);
			if (key[KEY_SPACE]) {
				break;
			}
			//((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) & 1)
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 1) && i == 0)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				i++;
				sayac++;

			}
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 2) && i == 1)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				sayac++;
				i++;
			}
			if (sayac == 2)
			{
				rectfill(CizimAlani, koordinat[0].x, koordinat[0].y, koordinat[1].x, koordinat[1].y, makeacol(kirmizi, yesil, mavi, -1));
				blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
				blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
				sayac = 0;

			}
		}
	}


}

void DaireCiz(BITMAP *CizimAlani, BITMAP * AraKatman) {
	int XKoordinat = 0;
	int YKoordinat = 0;
	int kirmizi = 0;
	int yesil = 0;
	int mavi = 0;
	int sayac = 0;

	while (!key[KEY_SPACE]) {

		for (int i = 0; i < 2;)
		{
			renk(&kirmizi, &yesil, &mavi);
			MouseBilgi(&XKoordinat, &YKoordinat);
			if (key[KEY_SPACE]) {
				break;
			}
			//((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) & 1)
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 1) && i == 0)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				i++;
				sayac++;

			}
			if ((mouse_x > 6 && mouse_y > 76 && mouse_x < 585 && mouse_y < 452) && (mouse_b & 2) && i == 1)
			{
				koordinat[sayac].x = XKoordinat;
				koordinat[sayac].y = YKoordinat;
				sayac++;
				i++;
			}
			if (sayac == 2)
			{
				int x = (koordinat[0].x - koordinat[1].x);
				int y = (koordinat[0].y - koordinat[1].y);
				int yaricap = sqrt((x * x) + (y * y));
				circlefill(CizimAlani, koordinat[0].x, koordinat[0].y,yaricap,makeacol(kirmizi,yesil,mavi,-1));
				blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
				blit(AraKatman, screen, 0, 0, 0, 0, 816, 460);
				sayac = 0;

			}
		}
	}


}


int main() {
	Baslat();

	int genislik = 816;
	int yukseklik = 460;
	BITMAP *AraKatman = create_bitmap(genislik, yukseklik);
	BITMAP *CizimAlani = load_bitmap("CizimAlani.bmp", NULL);
	BITMAP *ArkaPlan = load_bitmap("Paint.bmp", NULL);
	show_mouse(screen);
	blit(ArkaPlan, AraKatman, 0, 0, 0, 0, genislik, yukseklik);
	blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
	blit(AraKatman, screen, 0, 0, 0, 0, genislik, yukseklik);
	PALETTE pal;

	get_palette(pal);

	while (!key[KEY_ESC]) {

		
		if (mouse_x > 730 && mouse_y > 9 && mouse_x < 806 && mouse_y < 36 && (mouse_b & 1))
		{
			clear_to_color(CizimAlani, makecol(255, 255, 255));
		}
		else if (mouse_x > 753 && mouse_y > 392 && mouse_x < 790 && mouse_y < 426 && (mouse_b & 1))
		{
			Kalem(CizimAlani, AraKatman);
		}
		else if (mouse_x > 750 && mouse_y > 141 && mouse_x < 792 && mouse_y < 174 && (mouse_b & 1))
		{	
			CizgiCiz(CizimAlani, AraKatman);
		}
		else if (mouse_x > 745 && mouse_y > 237 && mouse_x < 794 && mouse_y < 278 && (mouse_b & 1))
		{
			KareCiz(CizimAlani, AraKatman);
		}
		else if (mouse_x > 748 && mouse_y > 289 && mouse_x < 799 && mouse_y < 328 && (mouse_b & 1))
		{
			DaireCiz(CizimAlani, AraKatman);
		}
		else if (mouse_x > 742 && mouse_y > 186 && mouse_x < 794 && mouse_y < 231 && (mouse_b & 1))
		{
			Kalem(CizimAlani, AraKatman);
		}
		else if (mouse_x > 741 && mouse_y > 333 && mouse_x < 800 && mouse_y < 384 && (mouse_b & 1))
		{
			UcgenCiz(CizimAlani, AraKatman);
		}
		else if (mouse_x > 432 && mouse_y > 9 && mouse_x < 507 && mouse_y < 36 && (mouse_b & 1))
		{
			Silgi(CizimAlani, AraKatman);
		}
		else if (mouse_x > 609 && mouse_y > 9 && mouse_x < 730 && mouse_y < 36 && (mouse_b & 1))
		{
			save_bitmap("adsiz.bmp", CizimAlani, pal);
		}
		else if (mouse_x > 517 && mouse_y > 9 && mouse_x < 609 && mouse_y < 36 && (mouse_b & 1))
		{
			CizimAlani = load_bitmap("adsiz.bmp", NULL);
		}
		


		blit(CizimAlani, AraKatman, 0, 0, 6, 76, 580, 377);
		blit(AraKatman, screen, 0, 0, 0, 0, genislik, yukseklik);
	}
	
	Bitir();
	return 0;
}
END_OF_MAIN()

void Baslat() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 816, 460, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}
	install_timer();
	install_keyboard();
	install_mouse();

}
void Bitir() {
	clear_keybuf();

}