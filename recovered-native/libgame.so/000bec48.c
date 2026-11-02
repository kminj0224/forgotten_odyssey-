/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bec48  Symbol: Get_Time */

/* Get_Time(tm*, long) */

undefined8 Get_Time(tm *param_1,long param_2)

{
  tm *__src;
  long local_c;
  
  local_c = param_2;
  __src = localtime(&local_c);
  memcpy(param_1,__src,0x2c);
  printf((char *)(DAT_000beccc + 0xbec66),local_c);
  printf((char *)(DAT_000becd4 + 0xbec74),param_1->tm_year + DAT_000becd0);
  printf((char *)(DAT_000becd8 + 0xbec80),param_1->tm_mon + 1);
  printf((char *)(DAT_000becdc + 0xbec8a),param_1->tm_mday);
  printf((char *)(DAT_000bece0 + 0xbec94),param_1->tm_hour);
  printf((char *)(DAT_000bece4 + 0xbec9e),param_1->tm_min);
  printf((char *)(DAT_000bece8 + 0xbeca8),param_1->tm_sec);
  printf((char *)(DAT_000becec + 0xbecb2),param_1->tm_wday);
  printf((char *)(DAT_000becf0 + 0xbecbc),param_1->tm_yday);
  printf((char *)(DAT_000becf4 + 0xbecc6),param_1->tm_isdst);
  return CONCAT44(param_1,param_1);
}


