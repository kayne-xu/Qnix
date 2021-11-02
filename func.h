// 屏幕输出相关
void console_putchar(int c);

int console_getchar();

void printf(char *fmt, ...);

void panic(char *s);
void log(char *s);
void info(char *s);

// 系统

void shutdown();