/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7290  Symbol: FUN_001c7290 */

void FUN_001c7290(void)

{
  int *piVar1;
  int iVar2;
  
  pthread_once(*(pthread_once_t **)(DAT_001c72c4 + 0x1c72a4),
               (__init_routine *)(DAT_001c72c8 + 0x1c72a8));
  if (**(int **)(DAT_001c72cc + 0x1c72b4) != 0) {
    return;
  }
  iVar2 = DAT_001c7284 + 0x1c7264;
  FUN_001c63ec(iVar2,2);
  piVar1 = *(int **)(DAT_001c728c + 0x1c727c);
  **(int **)(DAT_001c7288 + 0x1c7278) = iVar2;
  *piVar1 = iVar2;
  return;
}


