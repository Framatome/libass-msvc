#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE

#define CONFIG_DIRECTWRITE	1
#define CONFIG_RASTERIZER	1
#define CONFIG_HARFBUZZ		1
#define CONFIG_ASM			1

#ifdef _M_IX86
#define __i386__
#elif _M_AMD64
#define __x86_64__
#endif

#if (!defined(_MSC_VER) || _MSC_VER < 1900) && !defined(snprintf)
#define snprintf(buf,len, format,...) _snprintf_s(buf, len,len, format, __VA_ARGS__)
#endif
