//MENU.H

//dessa har ingen betydelse än...
#define M_LABEL 0
#define M_CHOICE 1
#define M_SLIDER 2
#define M_NUMBER 3
#define M_CHECK 4


struct coolmenuitem {
 char *text;  //texten såklart
 int type;    //meningslös än så länge
 int x,y;     //var valet ska vara
 int min,max; //meningslös
 int val;     //samma här
 char *strval;//och här
};

//starta en meny
int coolmenu(RLE_SPRITE *background, coolmenuitem *items, int count, int sel=0);

