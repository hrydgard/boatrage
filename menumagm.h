//MENU MANAGEMENT'N'STUFF
void mainmenu();
void credits();
void singlerace();
void customrace();
void season();
void customseason();
void newgamemenu();
int quitmenu();
void mainmenu();
int selectlevel(int std=1,int still=0);
void showlevelinfo(char *file);
void letplayerupgrade(player &p);
void afterrace(player &p1, player &p2,int moneyamount);
void race(player &p1,player &p2);

//hålla hastigheten på spelet
void speeder();
//END_OF_FUNCTION(speeder); //behövs vid funktioner som körs av timern

//räkna frames per second
void countfps();
//END_OF_FUNCTION(countfps); //behövs vid funktioner som körs av timern

//räkna ned
void thecountdown();
//END_OF_FUNCTION(thecountdown); //behövs vid funktioner som körs av timern

extern volatile int fps,fpsc,fpsx,fpsxc;

