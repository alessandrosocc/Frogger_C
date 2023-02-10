#define CORRENTI 5
#define DIMCORRENTI 2
#define PUNTEGGIO 3
#define TANE 6
#define FIUME 10
#define PRATO 2
#define AUTOSTRADA 10
#define MARCIAPIEDE 2
#define TEMPO 3
#define VITE 6
#define NTANE 5
//LE WINDOW NON SONO PASSATE PER VALORE!!!!!!!!!! NON PER RIFERIMENTO NON SONO PUNTATORI
//maxY dal basso = sempre maxY-3
//(0,0) == alto a sx
//(maxX, maxY) == basso a dx


void areaDiGioco(int p1[], int p2[], int p3[],int p4[], int p5[], int p6[], int p7[], int p8[], int p9[],int pipeTempo[],int[]);
void controlloGenerazioneMacchine(int p1[], int p2[], int p7[]);
void windowGeneration();
void initScreen(int*, int*);
void mostraVita(int);




// global variables
int offsetAutostrada = 0;
int offsetFiume=0;
int offsetTempo=0;
int offsetMarciapiede=0;
int idMacchine = 0;
int vite=5;
int maxX=0, maxY=0;
int addPoints=0;
int taneChiuse[NTANE]={0};

int iterazione=0;
int iterazioneMoment=0;
int offsetTane=0;
int offsetPunteggio=0;
int offsetPrato=0;
bool gioca=true;
int offsetFinale=0;

void proiettiliKillRana(elemento, elemento[], int[], int *,int*);
void stampaTronchiNemici(elemento[],elemento[], elemento);
void getTronchiBullets(elemento*,elemento[],elemento[]);
void stampaRanaBullets(elemento,elemento);
void stampaMacchinaCamion(elemento[]);
void getDataFromPipe(int[],elemento*,elemento[],elemento*, elemento*);
void collisionRanaVehicles(int[], int*,elemento*,elemento[],int*);
void processGeneration(int[],int[],int[],int[],int[],int[],int[],int[], int[],int[],int[]);
void frogIsOnLog(int p5[], int p7[],  elemento, elemento[],int*);
void ranaKillEnemy(elemento,elemento*, elemento [], int [], int*);
void collisioneProiettiliMacchine(elemento *, elemento [], elemento [], int []);
void collisioneProiettileRanaProiettiliNemici(elemento *, elemento[], int[]);
void mostraPunteggio(int);
void chiudiTana(int);
void tempo(int[],int[]);
void riprova(int*);
void displayTime(int);



