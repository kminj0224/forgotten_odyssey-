/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001872c8  Symbol: FUN_001872c8 */

void FUN_001872c8(int param_1)

{
  byte bVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa
       ) {
      FUN_0017c738(param_1);
    }
  }
  pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (*pcVar2 == '<') {
    if (pcVar2[1] == '!') {
      bVar1 = pcVar2[2];
      if (bVar1 == 0x45) {
        if (pcVar2[3] == 'L') {
          FUN_00182150(param_1);
        }
        else if (pcVar2[3] == 'N') {
          FUN_00186d00(param_1);
        }
      }
      else if (bVar1 < 0x46) {
        if (bVar1 == 0x2d) {
          FUN_0017e97c(param_1);
        }
        else if (bVar1 == 0x41) {
          FUN_00186694(param_1);
        }
      }
      else if (bVar1 == 0x4e) {
        FUN_00181798(param_1);
      }
    }
    else if (pcVar2[1] == '?') {
      FUN_00181988(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x60) == 0) && (*(int *)(param_1 + 0x28) == 1)) {
    FUN_00181300(param_1);
  }
  if ((*(int *)(param_1 + 0x60) == 0) && (1 < *(int *)(param_1 + 0x28))) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((*pcVar2 == '<') && ((pcVar2[1] == '!' && (pcVar2[2] == '[')))) {
      FUN_00188e0c(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0xac) = 3;
  return;
}


