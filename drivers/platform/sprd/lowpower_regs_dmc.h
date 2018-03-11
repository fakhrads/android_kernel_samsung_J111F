
//-----------dmc register---------------//
//reg,deep_golden,light_golden
static unsigned int dmc_deepsleep_regs[][3] = {
{0x30000000,0x01900376,0x01900376},
{0x30000004,0x00000502,0x00000502},
{0x30000008,0x00000000,0x00000000},
{0x3000000C,0x00000000,0x00000000},
{0x30000010,0x00000000,0x00000000},
{0x30000014,0x00000000,0x00000000},
{0x30000018,0x00000000,0x00000000},
{0x3000001C,0x00000000,0x00000000},
{0x30000020,0x4040037a,0x4040037a},
{0x30000024,0x0000035a,0x0000035a},
{0x30000028,0x00000370,0x00000370},
{0x3000002C,0x00000350,0x00000350},
{0x30000030,0x2020037c,0x2020037c},
{0x30000034,0x0000035c,0x0000035c},
{0x30000038,0x8080037a,0x8080037a},
{0x3000003C,0x0000035a,0x0000035a},
{0x30000040,0x0808037e,0x0808037e},
{0x30000044,0x0000035e,0x0000035e},
{0x30000048,0x1010037e,0x1010037e},
{0x3000004C,0x0000035e,0x0000035e},
{0x30000050,0x8080037e,0x8080037e},
{0x30000054,0x0000035e,0x0000035e},
{0x30000058,0x0808037e,0x0808037e},
{0x3000005C,0x0000035e,0x0000035e},
{0x30000060,0x1010037e,0x1010037e},
{0x30000064,0x0000035e,0x0000035e},
{0x30000068,0x000dc32f,0x000dc32f},
{0x3000006C,0x00000000,0x00000000},
{0x30000070,0x00000000,0x00000000},
{0x30000074,0x00000000,0x00000000},
{0x30000078,0x00000000,0x00000000},
{0x3000007C,0x00000000,0x00000000},
{0x30000080,0x00000000,0x00000000},
{0x30000084,0x00000000,0x00000000},
{0x30000088,0x00000000,0x00000000},
{0x3000008C,0x00000000,0x00000000},
{0x30000090,0x00000000,0x00000000},
{0x30000094,0x00000000,0x00000000},
{0x30000098,0x00000000,0x00000000},
{0x3000009C,0x00000000,0x00000000},
{0x300000A0,0x99f70000,0x99f70000},
{0x300000A4,0x01030000,0x01030010},
{0x300000A8,0x00f903f7,0x00f903f7},
{0x300000AC,0x007d03f7,0x007d03f7},
{0x300000B0,0x00000000,0x00000000},
{0x300000B4,0x00000000,0x00000000},
{0x300000B8,0x00000000,0x00000000},
{0x300000BC,0x00000000,0x00000000},
{0x300000C0,0x0055c040,0x0055c040},
{0x300000C4,0x0055c040,0x0055c040},
{0x300000C8,0x0055c040,0x0055c040},
{0x300000CC,0x0054c040,0x0054c040},
{0x300000D0,0x0055c040,0x0055c040},
{0x300000D4,0x0055c040,0x0055c040},
{0x300000D8,0x0055c040,0x0055c040},
{0x300000DC,0x0055c040,0x0055c040},
{0x300000E0,0x0055c040,0x0055c040},
{0x300000E4,0x00000058,0x00000058},
{0x300000E8,0x00000000,0x00000000},
{0x300000EC,0x00000000,0x00000000},
{0x300000F0,0x00000000,0x00000000},
{0x300000F4,0x00000000,0x00000000},
{0x300000F8,0x00000000,0x00000000},
{0x300000FC,0x00000000,0x00000000},
{0x30000100,0x00007fa0,0x00007fa0},
{0x30000104,0x1000000a,0x1000000a},
{0x30000108,0x00011bff,0x00011bff},
{0x3000010C,0x00003019,0x00003019},
{0x30000110,0x00000000,0x00000000},
{0x30000114,0x00000000,0x00000000},
{0x30000118,0x00000000,0x00000000},
{0x3000011C,0x00000000,0x00000000},
{0x30000120,0x00bfbfff,0x00bfbfff},
{0x30000124,0x00002333,0x00002333},
{0x30000128,0x01000200,0x01000200},
{0x3000012C,0x00000000,0x00000000},
{0x30000130,0x00000000,0x00000000},
{0x30000134,0x00000000,0x00000000},
{0x30000138,0x00000000,0x00000000},
{0x3000013C,0x00000000,0x00000000},
{0x30000140,0x04040809,0x04040809},
{0x30000144,0x02080802,0x02080802},
{0x30000148,0x540b0038,0x540b0038},
{0x3000014C,0x35021411,0x35021411},
{0x30000150,0x01c044ec,0x01c044ec},
{0x30000154,0x01e001e0,0x01e001e0},
{0x30000158,0x0007f000,0x0007f000},
{0x3000015C,0x0007f000,0x0007f000},
{0x30000160,0x0001c000,0x0001c000},
{0x30000164,0x00070000,0x00070000},
{0x30000168,0x00000004,0x00000004},
{0x3000016C,0x00000000,0x00000000},
{0x30000170,0x04040709,0x04040709},
{0x30000174,0x02080802,0x02080802},
{0x30000178,0x510b0036,0x510b0036},
{0x3000017C,0x35021411,0x35021411},
{0x30000180,0x01c044ec,0x01c044ec},
{0x30000184,0x01e001e0,0x01e001e0},
{0x30000188,0x0007f000,0x0007f000},
{0x3000018C,0x0007f000,0x0007f000},
{0x30000190,0x0001c000,0x0001c000},
{0x30000194,0x00070000,0x00070000},
{0x30000198,0x00000004,0x00000004},
{0x3000019C,0x00000000,0x00000000},
{0x300001A0,0x04040607,0x04040607},
{0x300001A4,0x02080702,0x02080702},
{0x300001A8,0x460a002f,0x460a002f},
{0x300001AC,0x3502110e,0x3502110e},
{0x300001B0,0x01c044eb,0x01c044eb},
{0x300001B4,0x01e001e0,0x01e001e0},
{0x300001B8,0x0007f000,0x0007f000},
{0x300001BC,0x0007f000,0x0007f000},
{0x300001C0,0x0001c000,0x0001c000},
{0x300001C4,0x00070000,0x00070000},
{0x300001C8,0x00000004,0x00000004},
{0x300001CC,0x00000000,0x00000000},
{0x300001D0,0x02040405,0x02040405},
{0x300001D4,0x02070701,0x02070701},
{0x300001D8,0x2a08001c,0x2a08001c},
{0x300001DC,0x34020a09,0x34020a09},
{0x300001E0,0x01c044eb,0x01c044eb},
{0x300001E4,0x01e001e0,0x01e001e0},
{0x300001E8,0x0007f000,0x0007f000},
{0x300001EC,0x0007f000,0x0007f000},
{0x300001F0,0x0001c000,0x0001c000},
{0x300001F4,0x00070000,0x00070000},
{0x300001F8,0x00010004,0x00010004},
{0x300001FC,0x00000000,0x00000000},
{0x30000200,0x00080100,0x00080100},
{0x30000204,0x00010000,0x00010000},
{0x30000208,0x3ff88000,0x3ff88000},
{0x3000020C,0x00000000,0x00000000},
{0x30000210,0x00000000,0x00000000},
{0x30000214,0x00000000,0x00000000},
{0x30000218,0x00000000,0x00000000},
{0x3000021C,0x5a5a5a5a,0x5a5a5a5a},
{0x30000220,0x4210db6e,0x4210db6e},
{0x30000224,0x92488888,0x92488888},
{0x30000228,0xc7878787,0xc7878787},
{0x3000022C,0x33331c71,0x33331c71},
{0x30000230,0x00000055,0x00000055},
{0x30000234,0x00000000,0x00000000},
{0x30000238,0x00000000,0x00000000},
{0x3000023C,0x00000000,0x00000000},
{0x30000240,0x00000000,0x00000000},
{0x30000244,0x00000000,0x00000000},
{0x30000248,0x00000000,0x00000000},
{0x3000024C,0x00000000,0x00000000},
{0x30000250,0x00000000,0x00000000},
{0x30000254,0x00000000,0x00000000},
{0x30000258,0x00000000,0x00000000},
{0x3000025C,0x00000000,0x00000000},
{0x30000260,0x00000000,0x00000000},
{0x30000264,0x00000000,0x00000000},
{0x30000268,0x00000000,0x00000000},
{0x3000026C,0x00000000,0x00000000},
{0x30000270,0x00000000,0x00000000},
{0x30000274,0x00000000,0x00000000},
{0x30000278,0x00000000,0x00000000},
{0x3000027C,0x00000000,0x00000000},
{0x30000280,0x00000000,0x00000000},
{0x30000284,0x00000000,0x00000000},
{0x30000288,0x00000000,0x00000000},
{0x3000028C,0x00000000,0x00000000},
{0x30000290,0x00000000,0x00000000},
{0x30000294,0x00000000,0x00000000},
{0x30000298,0x00000000,0x00000000},
{0x3000029C,0x00000000,0x00000000},
{0x300002A0,0x00000000,0x00000000},
{0x300002A4,0x00000000,0x00000000},
{0x300002A8,0x00000000,0x00000000},
{0x300002AC,0x00000000,0x00000000},
{0x300002B0,0x00000000,0x00000000},
{0x300002B4,0x00000000,0x00000000},
{0x300002B8,0x00000000,0x00000000},
{0x300002BC,0x00000000,0x00000000},
{0x300002C0,0x00000000,0x00000000},
{0x300002C4,0x00000000,0x00000000},
{0x300002C8,0x00000000,0x00000000},
{0x300002CC,0x00000000,0x00000000},
{0x300002D0,0x00000000,0x00000000},
{0x300002D4,0x00000000,0x00000000},
{0x300002D8,0x00000000,0x00000000},
{0x300002DC,0x00000000,0x00000000},
{0x300002E0,0x00000000,0x00000000},
{0x300002E4,0x00000000,0x00000000},
{0x300002E8,0x00000000,0x00000000},
{0x300002EC,0x00000000,0x00000000},
{0x300002F0,0x00000000,0x00000000},
{0x300002F4,0x00000000,0x00000000},
{0x300002F8,0x00000000,0x00000000},
{0x300002FC,0x00000000,0x00000000},
{0x30000300,0x03428604,0x03428604},
{0x30000304,0x08515957,0x08515957},
{0x30000308,0xc0031220,0xc0031320},
{0x3000030C,0x01122222,0x01122222},
{0x30000310,0x00000000,0x00000000},
{0x30000314,0x00000000,0x00000000},
{0x30000318,0x00000000,0x00000000},
{0x3000031C,0x00000000,0x00000000},
{0x30000320,0x00000000,0x00000000},
{0x30000324,0x00000000,0x00000000},
{0x30000328,0x00000000,0x00000000},
{0x3000032C,0x00000000,0x00000000},
{0x30000330,0x00000000,0x00000000},
{0x30000334,0x00000000,0x00000000},
{0x30000338,0x00000000,0x00000000},
{0x3000033C,0x00000000,0x00000000},
{0x30000340,0x00000000,0x00000000},
{0x30000344,0x00000000,0x00000000},
{0x30000348,0x00000000,0x00000000},
{0x3000034C,0x00000000,0x00000000},
{0x30000350,0x00000000,0x00000000},
{0x30000354,0x00000000,0x00000000},
{0x30000358,0x00000000,0x00000000},
{0x3000035C,0x00000000,0x00000000},
{0x30000360,0x00000000,0x00000000},
{0x30000364,0x00000000,0x00000000},
{0x30000368,0x00000000,0x00000000},
{0x3000036C,0x00000000,0x00000000},
{0x30000370,0x00000000,0x00000000},
{0x30000374,0x00000000,0x00000000},
{0x30000378,0x00000000,0x00000000},
{0x3000037C,0x00000000,0x00000000},
{0x30000380,0x00000000,0x00000000},
{0x30000384,0x00000000,0x00000000},
{0x30000388,0x00000000,0x00000000},
{0x3000038C,0x00000000,0x00000000},
{0x30000390,0x00000000,0x00000000},
{0x30000394,0x00000000,0x00000000},
{0x30000398,0x00000000,0x00000000},
{0x3000039C,0x00000000,0x00000000},
{0x300003A0,0x00000000,0x00000000},
{0x300003A4,0x00000000,0x00000000},
{0x300003A8,0x00000000,0x00000000},
{0x300003AC,0x00000000,0x00000000},
{0x300003B0,0x00000000,0x00000000},
{0x300003B4,0x00000000,0x00000000},
{0x300003B8,0x00000000,0x00000000},
{0x300003BC,0x00000000,0x00000000},
{0x300003C0,0x00000000,0x00000000},
{0x300003C4,0x00000000,0x00000000},
{0x300003C8,0x00000000,0x00000000},
{0x300003CC,0x00000000,0x00000000},
{0x300003D0,0x00000000,0x00000000},
{0x300003D4,0x00000000,0x00000000},
{0x300003D8,0x00000000,0x00000000},
{0x300003DC,0x00000000,0x00000000},
{0x300003E0,0x00000000,0x00000000},
{0x300003E4,0x00000000,0x00000000},
{0x300003E8,0x00000000,0x00000000},
{0x300003EC,0x00000000,0x00000000},
{0x300003F0,0x00000000,0x00000000},
{0x300003F4,0x00000000,0x00000000},
{0x300003F8,0x00000000,0x00000000},
{0x300003FC,0x00000000,0x00000000},
{0x30000400,0x03428604,0x03428604},
{0x30000404,0x08515956,0x08515956},
{0x30000408,0x80011620,0x80001520},
{0x3000040C,0xc0070e20,0xc0070e20},
{0x30000410,0xc0070e20,0xc0070e20},
{0x30000414,0x00000000,0x00000000},
{0x30000418,0x00000000,0x00000000},
{0x3000041C,0x00000000,0x00000000},
{0x30000420,0x00000000,0x00000000},
{0x30000424,0x00000000,0x00000000},
{0x30000428,0x00000000,0x00000000},
{0x3000042C,0x00000000,0x00000000},
{0x30000430,0x00000000,0x00000000},
{0x30000434,0x00000000,0x00000000},
{0x30000438,0x00000000,0x00000000},
{0x3000043C,0x00000000,0x00000000},
{0x30000440,0x00000000,0x00000000},
{0x30000444,0x00000000,0x00000000},
{0x30000448,0x00000000,0x00000000},
{0x3000044C,0x00000000,0x00000000},
{0x30000450,0x00000000,0x00000000},
{0x30000454,0x00000000,0x00000000},
{0x30000458,0x00000000,0x00000000},
{0x3000045C,0x00000000,0x00000000},
{0x30000460,0x00000000,0x00000000},
{0x30000464,0x00000000,0x00000000},
{0x30000468,0x00000000,0x00000000},
{0x3000046C,0x00000000,0x00000000},
{0x30000470,0x00000000,0x00000000},
{0x30000474,0x00000000,0x00000000},
{0x30000478,0x00000000,0x00000000},
{0x3000047C,0x00000000,0x00000000},
{0x30000480,0x00000000,0x00000000},
{0x30000484,0x00000000,0x00000000},
{0x30000488,0x00000000,0x00000000},
{0x3000048C,0x00000000,0x00000000},
{0x30000490,0x00000000,0x00000000},
{0x30000494,0x00000000,0x00000000},
{0x30000498,0x00000000,0x00000000},
{0x3000049C,0x00000000,0x00000000},
{0x300004A0,0x00000000,0x00000000},
{0x300004A4,0x00000000,0x00000000},
{0x300004A8,0x00000000,0x00000000},
{0x300004AC,0x00000000,0x00000000},
{0x300004B0,0x00000000,0x00000000},
{0x300004B4,0x00000000,0x00000000},
{0x300004B8,0x00000000,0x00000000},
{0x300004BC,0x00000000,0x00000000},
{0x300004C0,0x00000000,0x00000000},
{0x300004C4,0x00000000,0x00000000},
{0x300004C8,0x00000000,0x00000000},
{0x300004CC,0x00000000,0x00000000},
{0x300004D0,0x00000000,0x00000000},
{0x300004D4,0x00000000,0x00000000},
{0x300004D8,0x00000000,0x00000000},
{0x300004DC,0x00000000,0x00000000},
{0x300004E0,0x00000000,0x00000000},
{0x300004E4,0x00000000,0x00000000},
{0x300004E8,0x00000000,0x00000000},
{0x300004EC,0x00000000,0x00000000},
{0x300004F0,0x00000000,0x00000000},
{0x300004F4,0x00000000,0x00000000},
{0x300004F8,0x00000000,0x00000000},
{0x300004FC,0x00000000,0x00000000},
{0x30000500,0x03428604,0x03428604},
{0x30000504,0x08515856,0x08505856},
{0x30000508,0x80011620,0x80001620},
{0x3000050C,0xc0070e20,0xc0070f20},
{0x30000510,0xc0070e20,0xc0070f20},
{0x30000514,0x00000000,0x00000000},
{0x30000518,0x00000000,0x00000000},
{0x3000051C,0x00000000,0x00000000},
{0x30000520,0x00000000,0x00000000},
{0x30000524,0x00000000,0x00000000},
{0x30000528,0x00000000,0x00000000},
{0x3000052C,0x00000000,0x00000000},
{0x30000530,0x00000000,0x00000000},
{0x30000534,0x00000000,0x00000000},
{0x30000538,0x00000000,0x00000000},
{0x3000053C,0x00000000,0x00000000},
{0x30000540,0x00000000,0x00000000},
{0x30000544,0x00000000,0x00000000},
{0x30000548,0x00000000,0x00000000},
{0x3000054C,0x00000000,0x00000000},
{0x30000550,0x00000000,0x00000000},
{0x30000554,0x00000000,0x00000000},
{0x30000558,0x00000000,0x00000000},
{0x3000055C,0x00000000,0x00000000},
{0x30000560,0x00000000,0x00000000},
{0x30000564,0x00000000,0x00000000},
{0x30000568,0x00000000,0x00000000},
{0x3000056C,0x00000000,0x00000000},
{0x30000570,0x00000000,0x00000000},
{0x30000574,0x00000000,0x00000000},
{0x30000578,0x00000000,0x00000000},
{0x3000057C,0x00000000,0x00000000},
{0x30000580,0x00000000,0x00000000},
{0x30000584,0x00000000,0x00000000},
{0x30000588,0x00000000,0x00000000},
{0x3000058C,0x00000000,0x00000000},
{0x30000590,0x00000000,0x00000000},
{0x30000594,0x00000000,0x00000000},
{0x30000598,0x00000000,0x00000000},
{0x3000059C,0x00000000,0x00000000},
{0x300005A0,0x00000000,0x00000000},
{0x300005A4,0x00000000,0x00000000},
{0x300005A8,0x00000000,0x00000000},
{0x300005AC,0x00000000,0x00000000},
{0x300005B0,0x00000000,0x00000000},
{0x300005B4,0x00000000,0x00000000},
{0x300005B8,0x00000000,0x00000000},
{0x300005BC,0x00000000,0x00000000},
{0x300005C0,0x00000000,0x00000000},
{0x300005C4,0x00000000,0x00000000},
{0x300005C8,0x00000000,0x00000000},
{0x300005CC,0x00000000,0x00000000},
{0x300005D0,0x00000000,0x00000000},
{0x300005D4,0x00000000,0x00000000},
{0x300005D8,0x00000000,0x00000000},
{0x300005DC,0x00000000,0x00000000},
{0x300005E0,0x00000000,0x00000000},
{0x300005E4,0x00000000,0x00000000},
{0x300005E8,0x00000000,0x00000000},
{0x300005EC,0x00000000,0x00000000},
{0x300005F0,0x00000000,0x00000000},
{0x300005F4,0x00000000,0x00000000},
{0x300005F8,0x00000000,0x00000000},
{0x300005FC,0x00000000,0x00000000},
{0x30000600,0x03428604,0x03428604},
{0x30000604,0x08515957,0x08515857},
{0x30000608,0x80001520,0x80001520},
{0x3000060C,0xc0070e20,0xc0070e20},
{0x30000610,0xc0080d20,0xc0080d20},
{0x30000614,0x00000000,0x00000000},
{0x30000618,0x00000000,0x00000000},
{0x3000061C,0x00000000,0x00000000},
{0x30000620,0x00000000,0x00000000},
{0x30000624,0x00000000,0x00000000},
{0x30000628,0x00000000,0x00000000},
{0x3000062C,0x00000000,0x00000000},
{0x30000630,0x00000000,0x00000000},
{0x30000634,0x00000000,0x00000000},
{0x30000638,0x00000000,0x00000000},
{0x3000063C,0x00000000,0x00000000},
{0x30000640,0x00000000,0x00000000},
{0x30000644,0x00000000,0x00000000},
{0x30000648,0x00000000,0x00000000},
{0x3000064C,0x00000000,0x00000000},
{0x30000650,0x00000000,0x00000000},
{0x30000654,0x00000000,0x00000000},
{0x30000658,0x00000000,0x00000000},
{0x3000065C,0x00000000,0x00000000},
{0x30000660,0x00000000,0x00000000},
{0x30000664,0x00000000,0x00000000},
{0x30000668,0x00000000,0x00000000},
{0x3000066C,0x00000000,0x00000000},
{0x30000670,0x00000000,0x00000000},
{0x30000674,0x00000000,0x00000000},
{0x30000678,0x00000000,0x00000000},
{0x3000067C,0x00000000,0x00000000},
{0x30000680,0x00000000,0x00000000},
{0x30000684,0x00000000,0x00000000},
{0x30000688,0x00000000,0x00000000},
{0x3000068C,0x00000000,0x00000000},
{0x30000690,0x00000000,0x00000000},
{0x30000694,0x00000000,0x00000000},
{0x30000698,0x00000000,0x00000000},
{0x3000069C,0x00000000,0x00000000},
{0x300006A0,0x00000000,0x00000000},
{0x300006A4,0x00000000,0x00000000},
{0x300006A8,0x00000000,0x00000000},
{0x300006AC,0x00000000,0x00000000},
{0x300006B0,0x00000000,0x00000000},
{0x300006B4,0x00000000,0x00000000},
{0x300006B8,0x00000000,0x00000000},
{0x300006BC,0x00000000,0x00000000},
{0x300006C0,0x00000000,0x00000000},
{0x300006C4,0x00000000,0x00000000},
{0x300006C8,0x00000000,0x00000000},
{0x300006CC,0x00000000,0x00000000},
{0x300006D0,0x00000000,0x00000000},
{0x300006D4,0x00000000,0x00000000},
{0x300006D8,0x00000000,0x00000000},
{0x300006DC,0x00000000,0x00000000},
{0x300006E0,0x00000000,0x00000000},
{0x300006E4,0x00000000,0x00000000},
{0x300006E8,0x00000000,0x00000000},
{0x300006EC,0x00000000,0x00000000},
{0x300006F0,0x00000000,0x00000000},
{0x300006F4,0x00000000,0x00000000},
{0x300006F8,0x00000000,0x00000000},
{0x300006FC,0x00000000,0x00000000},
{0x30000700,0x03428604,0x03428604},
{0x30000704,0x08525958,0x08515958},
{0x30000708,0x80011720,0x80011620},
{0x3000070C,0xc0061020,0xc0070e20},
{0x30000710,0xc0070f20,0xc0070e20},
{0x30000714,0x00000000,0x00000000},
{0x30000718,0x00000000,0x00000000},
{0x3000071C,0x00000000,0x00000000},
{0x30000720,0x00000000,0x00000000},
{0x30000724,0x00000000,0x00000000},
{0x30000728,0x00000000,0x00000000},
{0x3000072C,0x00000000,0x00000000},
{0x30000730,0x00000000,0x00000000},
{0x30000734,0x00000000,0x00000000},
{0x30000738,0x00000000,0x00000000},
{0x3000073C,0x00000000,0x00000000},
{0x30000740,0x00000000,0x00000000},
{0x30000744,0x00000000,0x00000000},
{0x30000748,0x00000000,0x00000000},
{0x3000074C,0x00000000,0x00000000},
{0x30000750,0x00000000,0x00000000},
{0x30000754,0x00000000,0x00000000},
{0x30000758,0x00000000,0x00000000},
{0x3000075C,0x00000000,0x00000000},
{0x30000760,0x00000000,0x00000000},
{0x30000764,0x00000000,0x00000000},
{0x30000768,0x00000000,0x00000000},
{0x3000076C,0x00000000,0x00000000},
{0x30000770,0x00000000,0x00000000},
{0x30000774,0x00000000,0x00000000},
{0x30000778,0x00000000,0x00000000},
{0x3000077C,0x00000000,0x00000000},
{0x30000780,0x00000000,0x00000000},
{0x30000784,0x00000000,0x00000000},
{0x30000788,0x00000000,0x00000000},
{0x3000078C,0x00000000,0x00000000},
{0x30000790,0x00000000,0x00000000},
{0x30000794,0x00000000,0x00000000},
{0x30000798,0x00000000,0x00000000},
{0x3000079C,0x00000000,0x00000000},
{0x300007A0,0x00000000,0x00000000},
{0x300007A4,0x00000000,0x00000000},
{0x300007A8,0x00000000,0x00000000},
{0x300007AC,0x00000000,0x00000000},
{0x300007B0,0x00000000,0x00000000},
{0x300007B4,0x00000000,0x00000000},
{0x300007B8,0x00000000,0x00000000},
{0x300007BC,0x00000000,0x00000000},
{0x300007C0,0x00000000,0x00000000},
{0x300007C4,0x00000000,0x00000000},
{0x300007C8,0x00000000,0x00000000},
{0x300007CC,0x00000000,0x00000000},
{0x300007D0,0x00000000,0x00000000},
{0x300007D4,0x00000000,0x00000000},
{0x300007D8,0x00000000,0x00000000},
{0x300007DC,0x00000000,0x00000000},
{0x300007E0,0x00000000,0x00000000},
{0x300007E4,0x00000000,0x00000000},
{0x300007E8,0x00000000,0x00000000},
{0x300007EC,0x00000000,0x00000000},
{0x300007F0,0x00000000,0x00000000},
{0x300007F4,0x00000000,0x00000000},
{0x300007F8,0x00000000,0x00000000},
{0x300007FC,0x00000000,0x00000000},
{0 , 0, 0}

};




