/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016ab8  Symbol: FUN_00016ab8 */

pthread_key_t * FUN_00016ab8(pthread_key_t *param_1)

{
  if (param_1 != (pthread_key_t *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      pthread_key_delete(*param_1);
    }
    *(undefined *)(param_1 + 1) = 0;
  }
  return param_1;
}


