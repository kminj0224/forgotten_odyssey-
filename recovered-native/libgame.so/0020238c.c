/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020238c  Symbol: FUN_0020238c */

pthread_key_t * FUN_0020238c(pthread_key_t *param_1)

{
  if (param_1 != (pthread_key_t *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      pthread_key_delete(*param_1);
    }
    *(undefined *)(param_1 + 1) = 0;
  }
  return param_1;
}


