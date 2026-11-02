/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001172c0  Symbol: Get_Monster_attack */

/* Get_Monster_attack(int) */

undefined4 Get_Monster_attack(int param_1)

{
  void *__src;
  size_t __n;
  int iVar1;
  int iVar2;
  undefined4 auStack_a8 [40];
  
  iVar1 = **(int **)(DAT_00117364 + 0x1172d4) + -1 + (**(int **)(DAT_00117360 + 0x1172cc) + -1) * 10
  ;
  iVar2 = 0;
  if (1 < iVar1) {
    iVar2 = iVar1 >> 1;
  }
  if (**(int **)(DAT_00117360 + 0x1172cc) == 9) {
    iVar2 = 0x27;
  }
  if (param_1 == 0) {
    __src = (void *)(DAT_00117368 + 0x1172f6);
  }
  else if (param_1 == 1) {
    __src = (void *)(DAT_0011736c + 0x117320);
  }
  else if (param_1 == 2) {
    __src = (void *)(DAT_00117370 + 0x11734c);
  }
  else if (param_1 == 3) {
    __src = (void *)((int)&DAT_00117378 + DAT_00117374);
  }
  else if (param_1 == 4) {
    __src = (void *)(DAT_00117378 + 0x117324);
  }
  else {
    if (param_1 == 5) {
      __n = 0x50;
      __src = (void *)(DAT_0011737c + 0x117352);
      goto LAB_00117350;
    }
    if (param_1 == 6) {
      __src = (void *)(DAT_00117380 + 0x1173ae);
    }
    else {
      if (param_1 != 7) {
        return 0;
      }
      __src = (void *)(DAT_00117384 + 0x11735c);
    }
  }
  __n = 0xa0;
LAB_00117350:
  memcpy(auStack_a8,__src,__n);
  return auStack_a8[iVar2];
}


