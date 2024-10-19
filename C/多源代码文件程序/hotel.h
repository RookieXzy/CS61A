#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "*******************"

int menu(void); //显示菜单栏自定义函数
int getnights(void);//显示住多少晚的函数
void showprice(double rate, int nights);