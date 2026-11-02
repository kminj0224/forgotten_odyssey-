/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bed14  Symbol: GetMoney */

/* GetMoney(int, int) */

uint GetMoney(int param_1,int param_2)

{
  return ((param_1 >> 0x1f) - (param_2 >> 0x1f)) + (uint)((uint)param_2 <= (uint)param_1) & 0xff;
}


